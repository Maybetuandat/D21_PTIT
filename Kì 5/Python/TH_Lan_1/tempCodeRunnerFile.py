f = open('D:\Exercise\Kì 5\Python\TH_Lan_1\data3.in', 'w')                    
a, b, m = map(int, input().split())
arr = []
def check(n):
    for i in range(2, m+ 1):
        s = ""
        k = n
        while k != 0:
            s = s + str(k % i)
            k = k // i
        if s[::-1] != s:
            return False
    return True
dem = 0
for i in range(a, b + 1):
       if check(i) == True:
        f.write(str(i) + ",")
        dem += 1
print(dem)
f.close()