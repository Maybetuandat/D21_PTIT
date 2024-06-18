adu = input()
n = len(adu)
vs = [0] * (n+1)
def trial(s):
    if(len(s) == n):
        print(s)
        return
    for i in range(n):
        if(vs[i] ==  0):
          vs[i] = 1
          trial(s + adu[i])
          vs[i] = 0
trial("")