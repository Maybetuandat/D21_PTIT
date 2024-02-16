t = int(input())
for i in range(t):
    x = list(map(int, input().split()))
    p = str(max(x[0], x[1])) # max 
    q = str(min(x[0], x[1])) # min

    s1 = input()
    adu = list(map(str, s1.split()))
    if(len(adu) == 1):
      s2 = input()
    else:
      s1= adu[0]
      s2= adu[1]
    str1 = ""
    str2 = ""
    ans_max = 0
    ans_min = 0
    # tim max
    for j in range(len(s1)):
        if( s1[j] == q ):
            str1  = str1 + p
        else:
            str1 = str1 + s1[j]
    for j in range(len(s2)):
        if(s2[j] == q):
            str2 =str2 +  p
        else:
            str2 = str2 + s2[j]
    ans_max = int(str1) + int(str2)
    #tim minn
    str1 = ""
    str2 = ""
    for j in range(len(s1)):
        if( s1[j] == p ):
            str1  = str1 + q
        else:
            str1 = str1 + s1[j]
    for j in range(len(s2)):
        if(s2[j] == p):
            str2 =str2 +  q
        else:
            str2 = str2 + s2[j]
    ans_min = int(str1) + int(str2)
    print(ans_min, ans_max)