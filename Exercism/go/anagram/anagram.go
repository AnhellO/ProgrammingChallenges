/*
Package anagram gets the sublist of anagrams from a list of candidate strings for a given word.
*/
package anagram

import (
	"sort"
	"strings"
)

// runesStr is used to implement the data Interface from the 'sort' package
type runesStr []rune

func (s runesStr) Len() int {
	return len(s)
}

func (s runesStr) Less(i, j int) bool {
	return s[i] < s[j]
}

func (s runesStr) Swap(i, j int) {
	s[i], s[j] = s[j], s[i]
}

// SortString returns the sorted version of the given string 'str'
func SortString(str string) string {
	r := []rune(str)
	sort.Sort(runesStr(r))
	return string(r)
}

// Detect will get the valid anagrams for the given 'str' word by evaluating a []string slice of words.
func Detect(str string, candidates []string) []string {
	sorted := SortString(strings.ToLower(str))
	valid := make([]string, 0)

	for _, candidate := range candidates {
		sortedCandidate := SortString(strings.ToLower(candidate))

		if !strings.EqualFold(str, candidate) && sortedCandidate == sorted {
			valid = append(valid, candidate)
		}
	}

	return valid
}
