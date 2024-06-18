s1 = input().lower()
s2 = input().lower()
st1 = []
st1 = set(st1)
st2 = []
st2 = set(st2)
for i in s1.split():
    st1.add(i)
for i in s2.split():
    st2.add(i)
st3 = []
st3 = set(st3)
for i in st1:
    st3.add(i)
for i in st2:
    st3.add(i)
st3 = sorted(st3)
for i in st3:
    print(i, end = " ")
print()
st4 = []
st4 = set(st4)
for i in st1:
    if i in st2:
        st4.add(i)
st4 = sorted(st4)
for i in st4:
    print(i, end = " ")