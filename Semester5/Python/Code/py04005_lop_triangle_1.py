import math
class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def distance ( self, other):
        d1 = other.x - self.x
        d2 = other.y - self.y
        a = math.sqrt( d1 * d1 + d2 * d2 )
        return a
class Triangle:
    def __init__ (self, Point1, Point2, Point3):
        self.Point1 = Point1
        self.Point2 = Point2
        self.Point3 = Point3
    
    def __str__(self) :
        kc1 = self.Point1.distance(self.Point2)
        kc2 = self.Point2.distance(self.Point3)
        kc3 = self.Point3.distance(self.Point1)
        if kc1 >= kc2 + kc3 or kc2 >= kc1 + kc3 or kc3 >= kc1 + kc2:
            return "INVALID"
        return '{:.3f}'.format(kc1 + kc2 + kc3)

t = int(input())
a = []
for i in range (t):
    a += [float(x) for x in input().split()]
n = 0
for i in range(t):
    tri = Triangle(Point(a[n], a[n+1]), Point(a[n+2], a[n+3]), Point(a[n+4], a[n+5]))
    print(tri)
    n += 6

