s = input()
demhoa = 0
demthuong = 0
for i in s:
   
    if(i >= 'A' and i <= 'Z'):
        demhoa += 1
    else:
        demthuong += 1
if(demhoa > demthuong):
    print(s.upper())
else:
    print(s.lower())