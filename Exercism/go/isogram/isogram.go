/*
Package isogram helps to determine if a given word or phrase is an isogram
*/
package isogram

import (
	"unicode"
)

// IsIsogram evaluates the given string 's' and returns whether it's an isogram or not
func IsIsogram(s string) bool {
	var alpha [26]bool

	if s == "" {
		return true
	}

	for _, char := range s {
		charVal := unicode.ToUpper(char)

		// Process only valid uppercase letter/alpha runes -> [A-Z]
		if !unicode.IsLetter(charVal) {
			continue
		}

		// Get the ASCII value of the current rune and subtract the ASCII value of 'A' (which is '65')
		// in order to map the resulting value with its corresponding index into the alpha array.
		// This means you would have [A-Z] = [0-25] mapped to the array.
		index := charVal - 65
		if alpha[index] {
			return false
		}

		alpha[index] = true
	}

	return true
}
