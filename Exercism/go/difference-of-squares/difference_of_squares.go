/*
Package diffsquares computes the difference between the square of the sum and the sum of the squares of the first N natural numbers
*/
package diffsquares

// SquareOfSum computes the square of the gauss sum for the provided number 'n'
func SquareOfSum(n int) int {
	gaussK := (n * (n + 1)) / 2
	return gaussK * gaussK
}

// SumOfSquares computes the sum of the powers of two for the first 'n' positive numbers
func SumOfSquares(n int) int {
	return (n * (n + 1) * (2*n + 1)) / 6
}

// Difference returns the diff between SquareOfSum and SumOfSquares
func Difference(n int) int {
	return SquareOfSum(n) - SumOfSquares(n)
}
