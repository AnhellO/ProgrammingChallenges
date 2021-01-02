import math


class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y


# Holds the radius and the score for each circles
circles = {10: 1, 5: 5, 1: 10}


def score(x, y):
    points = 0
    for radius, score in circles.items():
        if distance(Point(0, 0), Point(x, y)) <= radius:
            points = score

    return points


def distance(p1: Point, p2: Point) -> float:
    return math.sqrt(((p2.x - p1.x) ** 2) + ((p2.y - p1.y) ** 2))
