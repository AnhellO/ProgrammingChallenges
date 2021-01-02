/*
Package lsproduct will calculate the largest product for a contiguous substring of digits of length 'n'
of the given a string of digits
*/
package lsproduct

import (
	"errors"
	"unicode"
)

// LargestSeriesProduct returns an int64 which is the largest product of the calculation
// or a -1 and an error in case there are issues with the calculation
func LargestSeriesProduct(num string, span int) (int64, error) {
	if len(num) < span {
		return -1, errors.New("span must be smaller than string length")
	}

	if span < 0 {
		return -1, errors.New("span must be greater than zero")
	}

	if num == "" {
		return 1, nil
	}

	var product int64 = -1
	for i, val := range num {
		if i+span > len(num) {
			break
		}

		if !unicode.IsDigit(val) {
			return -1, errors.New("digits input must only contain digits")
		}

		var temp int64 = 1
		for _, d := range num[i : i+span] {
			temp *= int64(d - '0')
		}

		if temp > product {
			product = temp
		}
	}

	return product, nil
}
