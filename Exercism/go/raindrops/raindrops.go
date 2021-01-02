/*
Package raindrops converts a number into a string that contains raindrop sounds corresponding to certain potential factors.
*/
package raindrops

import "strconv"

// Convert takes an input int 'n' and returns the generated string
// or the passed number as a string if no condition is met.
func Convert(n int) string {
	str := ""

	if n%3 == 0 {
		str += "Pling"
	}

	if n%5 == 0 {
		str += "Plang"
	}

	if n%7 == 0 {
		str += "Plong"
	}

	if len(str) == 0 {
		return strconv.Itoa(n)
	}

	return str
}
