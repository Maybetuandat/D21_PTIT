s = ""
while True:
   try:
     s += input() + "     "
   except: 
      break
x = list(map(int, s.split()))
t = x[0]
index = 1
for _ in range(t):
   z1 = complex(x[index], x[index+1])
   index += 2
   z2 = complex(x[index], x[index+1])
   index += 2
   zs = (z1 + z2) * z1
   zd = (z1 + z2) * (z1 + z2 )
   print(int(zs.real), end = " ")
   if zs.imag > 0:
      print(f"+ {int(zs.imag)}i,", end = " ")
   else:
      print(f"- {int(zs.imag * -1)}i,", end = " ") 
   print(int(zd.real), end = " ")
   if zd.imag > 0:
      print(f"+ {int(zd.imag)}i")
   else:
      print(f"- {int(zd.imag * -1)}i")