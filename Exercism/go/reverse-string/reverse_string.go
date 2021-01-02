/*
Package reverse will give the reversed version of a string.
*/
package reverse

import (
	"strings"
)

// Reverse function takes an input string 's' and returns the reversed version of it.
func Reverse(s string) string {
	var reversed strings.Builder
	runed := []rune(s)

	for i := len(runed) - 1; i >= 0; i-- {
		reversed.WriteRune(runed[i])
	}

	return reversed.String()
}
