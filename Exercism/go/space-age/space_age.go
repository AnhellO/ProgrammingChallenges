package space

type Planet string

var solarSystem = map[Planet]float64{
	"Mercury": 0.2408467,
	"Venus":   0.61519726,
	"Earth":   1.0,
	"Mars":    1.8808158,
	"Jupiter": 11.862615,
	"Saturn":  29.447498,
	"Uranus":  84.016846,
	"Neptune": 164.79132,
}

// Age function takes an age in seconds and converts it to
// the corresponding age in years based in the provided planet
func Age(age float64, planet Planet) float64 {
	return formula(age, solarSystem[planet])
}

func formula(age, coeficient float64) float64 {
	return ((((age / 60) / 60) / 24) / 365.25) / coeficient
}
