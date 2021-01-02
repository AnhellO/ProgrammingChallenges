/*
Package scale generates a musical scale starting with a
provided tonic note and following a specified intervals pattern.
*/
package scale

import (
	"fmt"
	"sort"
	"strings"
)

var chromaticSharp = []string{"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"}
var useSharp = []string{"G", "D", "A", "E", "B", "F#", "e", "b", "f#", "c#", "g#", "d#", "C", "a"}

// sharpIndex holds the index of the corresponding note in the chromaticSharp slice
var sharpIndex = map[string]int{
	"A":  0,
	"A#": 1,
	"B":  2,
	"C":  3,
	"C#": 4,
	"D":  5,
	"D#": 6,
	"E":  7,
	"F":  8,
	"F#": 9,
	"G":  10,
	"G#": 11,
}

var chromaticFlat = []string{"A", "Bb", "B", "C", "Db", "D", "Eb", "E", "F", "Gb", "G", "Ab"}
var useFlat = []string{"F", "Bb", "Eb", "Ab", "Db", "Gb", "d", "g", "c", "f", "bb", "eb"}

// flatIndex holds the index of the corresponding note in the chromaticFlat slice
var flatIndex = map[string]int{
	"A":  0,
	"Bb": 1,
	"B":  2,
	"C":  3,
	"Db": 4,
	"D":  5,
	"Eb": 6,
	"E":  7,
	"F":  8,
	"Gb": 9,
	"G":  10,
	"Ab": 11,
}

// intervalsValues holds the numerical values of each interval
var intervalsValues = map[string]int{
	"m": 1,
	"M": 2,
	"A": 3,
}

// Scale generates an slice of notes that represents the musical scale based in the tonic note and the intervals
func Scale(tonic, intervals string) []string {
	// Sort them first so we can use binary search
	sort.Strings(useSharp)
	sort.Strings(useFlat)

	if intervals == "" {
		return getEmptyCase(tonic)
	}

	intervalLength := len(intervals)
	scale := make([]string, 0)

	if sort.SearchStrings(useSharp, tonic) != intervalLength {
		tonic = strings.ToUpper(tonic)
		scale = append(scale, tonic)
		for len(intervals) > 0 {
			interval := string(intervals[0])
			intervals = intervals[1:]
			value := intervalsValues[interval]
			index := sharpIndex[tonic]
			fmt.Println(index)
			for ; value > 0; value-- {
				if index+1 == len(chromaticSharp) {
					index = 0
					continue
				}
				index++
			}

			scale = append(scale, string(chromaticSharp[index]))
		}
	}
	// if sort.SearchStrings(useFlat, tonic) != notes {
	// 	index := sort.SearchStrings(chromaticFlat, strings.ToUpper(tonic))
	// 	return chromaticFlat[index:notes]
	// }

	return scale
}

// getEmptyCase handle the cases where there is no interval provided
func getEmptyCase(tonic string) []string {
	if findTonic(tonic, useFlat) {
		index := flatIndex[tonic]
		return append(chromaticFlat[index:], chromaticFlat[0:index]...)
	}

	index := sharpIndex[tonic]
	return append(chromaticSharp[index:], chromaticSharp[0:index]...)
}

// findTonic searches for a tonic note through a collection of notes
func findTonic(tonic string, notes []string) bool {
	for _, note := range notes {
		if tonic == note {
			return true
		}
	}

	return false
}
