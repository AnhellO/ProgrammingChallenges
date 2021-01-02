/*
Package wordcount counts the occurrences of each word for a given phrase.
*/
package wordcount

import (
	"regexp"
	"strings"
)

// Frequency represents a map indexed by strings holding the number of ocurrences for each key as a value.
type Frequency map[string]int

// WordCount returns a Frequency map containing the word count of the given string.
func WordCount(phrase string) Frequency {
	r, _ := regexp.Compile(`([A-Za-z]+'[A-Za-z]|\d+|[A-Za-z]+)`)
	count := make(Frequency)

	for _, word := range r.FindAllString(normalize(phrase), -1) {
		count[word]++
	}

	return count
}

// normalize will process and normalize the string first before doing any word count
func normalize(phrase string) string {
	r, _ := regexp.Compile(`\s`)
	return r.ReplaceAllString(strings.ToLower(phrase), " ")
}
