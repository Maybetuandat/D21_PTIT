def xuli():
    n = int(input())
    a = list(map(int,input().split()))
    st = []
    print("1", end = " ")
    for i in range(n):
        if len(st) == 0:
            st.append(i)
        else:
            while len(st) > 0 and  a[st[-1]] <= a[i]  :
                st.pop()
            if len(st) == 0:
                print(i+1, end = " " )
            else:
                print(i - st[-1], end  = " ")
            st.append(i)
    print()
for i in range(int(input())):
    xuli()