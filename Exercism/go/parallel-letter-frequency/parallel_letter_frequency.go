package letter

// FreqMap records the frequency of each rune in a given text.
type FreqMap map[rune]int

// Frequency counts the frequency of each rune in a given text and returns this
// data as a FreqMap.
func Frequency(s string) FreqMap {
	m := FreqMap{}
	for _, r := range s {
		m[r]++
	}
	return m
}

// ConcurrentFrequency concurrently counts the frequency of each rune in a given text
// by using the Frequency() function
func ConcurrentFrequency(strings []string) FreqMap {
	m := make(FreqMap)
	mapChannel := make(chan FreqMap)

	for _, str := range strings {
		go func(s string) {
			mapChannel <- Frequency(s)
		}(str)
	}

	for range strings {
		for k, v := range <-mapChannel {
			m[k] += v
		}
	}

	return m
}
