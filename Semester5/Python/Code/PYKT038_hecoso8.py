def convert(s):
    sum = int(s[0]) *  (1 <<2) + int(s[1]) * (1<<1) + int(s[2])
    return sum
s = input()
while len(s) % 3 != 0:
    s =  "0" + s
dem = 0
cmp = ""
for i in s:
    dem += 1
    cmp += i
    if dem == 3:
        print(convert(cmp), end= "")
        cmp = ""
        dem = 0
