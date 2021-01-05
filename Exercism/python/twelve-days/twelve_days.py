parts = {
    1: ("first", "a Partridge in a Pear Tree"),
    2: ("second", "two Turtle Doves"),
    3: ("third", "three French Hens"),
    4: ("fourth", "four Calling Birds"),
    5: ("fifth", "five Gold Rings"),
    6: ("sixth", "six Geese-a-Laying"),
    7: ("seventh", "seven Swans-a-Swimming"),
    8: ("eighth", "eight Maids-a-Milking"),
    9: ("ninth", "nine Ladies Dancing"),
    10: ("tenth", "ten Lords-a-Leaping"),
    11: ("eleventh", "eleven Pipers Piping"),
    12: ("twelfth", "twelve Drummers Drumming")
}

def recite(start_verse, end_verse):
    song = []
    for x in range(start_verse, end_verse+1):
        verse = f"On the {parts[x][0]} day of Christmas my true love gave to me: {', '.join(parts[i][1] for i in range(x, 0, -1))}."
        song.append(', and '.join(verse.rsplit(', ', 1)))

    return song