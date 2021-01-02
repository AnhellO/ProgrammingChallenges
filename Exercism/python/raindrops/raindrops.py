def convert(number):
    sounds = []

    if number % 3 == 0:
        sounds.append('Pling')

    if number % 5 == 0:
        sounds.append('Plang')

    if number % 7 == 0:
        sounds.append('Plong')

    return ''.join(sounds) if sounds else str(number)