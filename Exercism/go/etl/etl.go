/*
Package etl helps with the ETL processing between two different types of maps.
*/
package etl

import (
	"strings"
)

// Transform receives an input map 'scrabble' and returns the transformed version of it after applying some ETL.
func Transform(scrabble map[int][]string) map[string]int {
	transformed := make(map[string]int)

	for score, letters := range scrabble {
		for _, letter := range letters {
			transformed[strings.ToLower(letter)] = score
		}
	}

	return transformed
}
