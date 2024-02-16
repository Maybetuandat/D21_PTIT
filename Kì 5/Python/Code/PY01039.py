def xuli():
    s = input()
    st = set({})
    n = len(s)
    for i in s:
        st.add(i)
    if(len(st) != 2):
        print("NO")
        return
    for i in range(n-2):
        if(s[i] != s[i+2]):
            print("NO")
            return
    print("YES")
t = int(input())
for i in range(t):
    xuli()