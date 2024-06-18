def xuli():
    x = "012"
    s = input()
    for i in s:
        if(i not in x):
            print("NO")
            return
    print("YES")
for i in range(int(input())):
    xuli()