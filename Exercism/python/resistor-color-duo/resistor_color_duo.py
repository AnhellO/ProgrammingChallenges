resistors = ["black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"]

def value(colors):
    return int(f"{resistors.index(colors[0])}{resistors.index(colors[1])}")