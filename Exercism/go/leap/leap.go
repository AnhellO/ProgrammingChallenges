// Package leap evaluates if a given year is leap or not.
// https://golang.org/doc/effective_go.html#commentary
package leap

// IsLeapYear evaluates if the given year is a leap year or not.
func IsLeapYear(year int) bool {
	return year%4 == 0 && (year%100 != 0 || year%400 == 0)
}
