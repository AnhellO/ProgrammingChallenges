// Package acronym should have a package comment that summarizes what it's about.
// https://golang.org/doc/effective_go.html#commentary
package acronym

import (
	"regexp"
	"strings"
)

// Abbreviate should have a comment documenting it.
func Abbreviate(s string) string {
	r, _ := regexp.Compile(`([A-Za-z])(?:.*?)(?:\s|-|$)`)
	initial := strings.ToUpper(r.ReplaceAllString(s, "$1"))
	r, _ = regexp.Compile(`[^A-Z]`)
	return r.ReplaceAllString(initial, "")
}
