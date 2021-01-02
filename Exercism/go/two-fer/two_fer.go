/*
Package twofer implements a greeting function.
*/
package twofer

import "fmt"

// ShareWith receives a string and returns a message greeting
func ShareWith(name string) string {
	if name == "" {
		name = "you"
	}

	return fmt.Sprintf("One for %s, one for me.", name)
}
