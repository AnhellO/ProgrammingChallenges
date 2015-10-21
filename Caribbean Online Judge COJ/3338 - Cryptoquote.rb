line = gets.chomp
N = line.to_i
for i in 1..N do
        print "#{i} "
        s1 = gets.chomp
        s2 = gets.chomp
        chars = s2.split("")
        s1.split("").each do |x|
                if x == ' '
                        print ' '
                end
                print chars[(x.ord - 65)]
        end
        puts
end
