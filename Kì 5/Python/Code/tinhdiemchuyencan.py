class sv:
    def __init__(self, msv, ten, lop):
        self.msv = msv
        self.ten = ten
        self.lop = lop
        self.diem = 10
n = int(input())
a = []
for i in range(n):
    a.append(sv(input(), input(), input()))
for i in range(n):
    s = input()
    b = list(map(str, s.split()))
    for j in range(n):
        if(b[0] == a[j].msv):
            for k in b[1]:
                if(k == 'm'):
                    a[j].diem -= 1
                elif k == 'v':
                        a[j].diem -= 2

for x in a:
    print(x.msv, x.ten, x.lop, end = " ")
    if(x.diem <= 0):
        print("0 KDDK")
    else:
        print(x.diem)
                     