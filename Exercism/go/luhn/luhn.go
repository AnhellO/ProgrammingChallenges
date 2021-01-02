/*
Package luhn determines whether or not a given number is valid per the Luhn formula.
*/
package luhn

import (
	"strconv"
	"strings"
)

// Valid will evaluate the string "n" in order to check if it's a valid number based in the Luhn formula.
func Valid(n string) bool {
	// First remove the whitespaces
	n = strings.ReplaceAll(n, " ", "")

	// Then evaluate if the len of "n" is valid
	if len(n) < 2 {
		return false
	}

	// Finally do the luhn's check
	sum := 0
	// Use the evenSwitch to determine whether we have to double the digit or not
	// Using this approach will help to avoid reversing the string or having to iterate the string backwards
	evenSwitch := len(n)%2 == 0
	for _, char := range n {
		// Get the actual Int value of the string by trying to convert it
		intVal, err := strconv.Atoi(string(char))
		// If the conversion fails that means we are not parsing a correct Int value
		if err != nil {
			return false
		}

		if evenSwitch {
			intVal *= 2
			if intVal > 9 {
				intVal -= 9
			}
		}
		// Toggle on/off the evenSwitch
		evenSwitch = !evenSwitch
		sum += intVal
	}

	return sum%10 == 0
}
