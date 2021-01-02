/*
Package triangle helps to evaluate the type of a triangle.
*/
package triangle

import (
	"math"
	"sort"
)

// Kind represents the type of the triangle
type Kind int

const (
	// NaT represents a not valid triangle
	NaT = iota
	// Equ represents an equilateral triangle
	Equ = iota
	// Iso represents an isosceles triangle
	Iso = iota
	// Sca represents a scalene triangle
	Sca = iota
)

// KindFromSides returns the type of triangle based on the provided sides of it.
func KindFromSides(a, b, c float64) Kind {
	if isNaT(a, b, c) {
		return NaT
	}

	if isEqu(a, b, c) {
		return Equ
	}

	if isIso(a, b, c) {
		return Iso
	}

	return Sca
}

// isNat evaluates if the given triangle is valid or not.
func isNaT(a, b, c float64) bool {
	max := math.Max(a, math.Max(b, c))
	sides := []float64{a, b, c}
	sort.Sort(sort.Float64Slice(sides))
	return sides[0] <= 0 || math.IsNaN(sides[0]) || sides[2] == math.Inf(1) || max > a+b+c-max
}

// isEqu evaluates if the given triangle is equilateral.
func isEqu(a, b, c float64) bool {
	return a == b && a == c
}

// isIso evaluates if the given triangle is isosceles.
func isIso(a, b, c float64) bool {
	return a == b || a == c || b == c
}
