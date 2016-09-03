hash = {"a" => 0, "e" => 0, "i" => 0, "o" => 0, "u" => 0}
while s = gets
	s.scan(/([aeiou])/i).each do |item| item.each do |vowel| hash[vowel.downcase] += 1 end end
end
hash.each do |key, value| if key == "a" then print "#{value}" else print " #{value}" end end