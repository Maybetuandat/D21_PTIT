import re
def check(ch):
    if ch == '.' or ch == '?' or ch == '!':
        return True
    return False
a = []
while True:
    try:
        a.append(input().lower())
    except:
        break

for i in a:
    n = len(i)
    index = 0
    for j in range(n):
        if check(i[j]) == True:
            s= i[index:j].strip()
            index = j+1
            x = list(map(str, s.split()))
            x[0] = x[0].title()
            for k in range(len(x) - 1):
                print(x[k], end = " ")
            print(x[-1], end = "")
            print(i[j])
    if index == 0:
        x = list(map(str, i.split()))
        x[0] = x[0].title()
        for j in range(len(x) - 1):
            print(x[j], end = " ")
        print(x[-1], end = "")
        print(".")
                  
                