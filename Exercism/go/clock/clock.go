/*
Package clock implements a clock that handles times without dates.
It provides the option to add and subtract minutes to it.
*/
package clock

import (
	"fmt"
)

// Clock represents a 24hrs format clock
type Clock struct {
	Minutes int
}

// New returns a new Clock instance
func New(hours, minutes int) Clock {
	minutes += hours * 60
	minutes %= 60 * 24
	if minutes < 0 {
		minutes += 60 * 24
	}

	return Clock{Minutes: minutes}
}

// String returns a string representation of the clock with the "XX:XX" format
func (c Clock) String() string {
	return fmt.Sprintf("%02d:%02d", c.Minutes/60, c.Minutes%60)
}

// Add increases the clock by the amount of minutes provided and returns a new Clock instance
func (c Clock) Add(minutes int) Clock {
	return New(0, c.Minutes+minutes)
}

// Subtract decreases the clock by the amount of minutes provided and returns a new Clock instance
func (c Clock) Subtract(minutes int) Clock {
	return New(0, c.Minutes-minutes)
}
