/*
Package grains calculates the number of grains of wheat on a chessboard given that the number on each square doubles.

- Did this experiment make the code better? Worse?
	From my perspective the changes from using the math.Pow function to use the bitshift operators made the code
	a bit faster, but a bit less readable (not all people are familiarized with bitshift operators).
	However, this is something that could be easily researched and understood quickly, so I prefer this solution over the pow function.
- Did you learn anything from it?
	I had used bitshift operators in the past, but never on Golang. It's cool to see them around on the language,
	and also to be able to use them again, since it has been some time since the last time I used them.
*/
package grains

import (
	"errors"
	"math"
)

// Total returns the total number of grains in the chessboard
func Total() uint64 {
	return math.MaxUint64
}

// Square returns the number or grains for a specific index of the chessboard
func Square(input int) (uint64, error) {
	if input == 0 {
		return 0, errors.New("square 0 returns an error")
	}

	if input < 0 {
		return 0, errors.New("negative square returns an error")
	}

	if input > 64 {
		return 0, errors.New("square greater than 64 returns an error")
	}

	return 1 << (input - 1), nil
}
