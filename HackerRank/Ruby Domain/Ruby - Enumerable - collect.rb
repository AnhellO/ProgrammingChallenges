class String
    def is_letter?
        self =~ /[[:alpha:]]/
    end

    def is_upper?
        self == self.upcase
    end

    def is_lower?
        self == self.downcase
    end
end

def rot13(secret_messages)
    upper = "NOPQRSTUVWXYZABCDEFGHIJKLM"
    lower = "nopqrstuvwxyzabcdefghijklm"
    secret_messages.map do |message|
        message.each_char.with_index do |c, index|
            if c.is_letter?
                if c.is_lower? then
                    message[index] = lower[c.ord - 97]
                else
                    message[index] = upper[c.ord - 65]
                end
            end
        end
    end
    return secret_messages
end

puts rot13(["Jul qvq gur puvpxra pebff gur ebnq?", "Gb trg gb gur bgure fvqr!"])
