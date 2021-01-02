/*
Package hamming returns the value of the hamming distance between two given strings.
*/
package hamming

import (
	"errors"
)

// Distance calculates the hamming distance between two given strings
func Distance(a, b string) (int, error) {
	runesA, runesB := []rune(a), []rune(b)

	if len(runesA) != len(runesB) {
		return 0, errors.New("invalid length")
	}

	counter := 0
	for i := 0; i < len(runesA); i++ {
		if runesA[i] != runesB[i] {
			counter++
			continue
		}
	}

	return counter, nil
}
