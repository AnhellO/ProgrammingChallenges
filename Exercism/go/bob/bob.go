/*
Package bob evaluates a given string and returns a message
based on the evaluation
*/
package bob

import (
	"regexp"
	"strings"
)

// Hey receives a sentence string and returns a message
func Hey(remark string) string {
	remark = strings.TrimSpace(remark)

	if remark == "" {
		return "Fine. Be that way!"
	}

	isUpper := remark == strings.ToUpper(remark)
	isQuestion := strings.HasSuffix(remark, "?")
	isLetter := IsLetter(remark)

	if isQuestion {
		if isLetter && isUpper {
			return "Calm down, I know what I'm doing!"
		}

		return "Sure."
	}

	if isLetter && isUpper {
		return "Whoa, chill out!"
	}

	return "Whatever."
}

// IsLetter receives a string and evaluates whether it contains any alpha letter or not
func IsLetter(s string) bool {
	r, _ := regexp.Compile(`[A-Za-z]+`)

	if r.FindString(s) == "" {
		return false
	}

	return true
}
