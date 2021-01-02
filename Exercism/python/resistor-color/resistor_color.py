def color_code(color):
    return colors().index(color) if color in colors() else -1

def colors():
    return ["black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"]
