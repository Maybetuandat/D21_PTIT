value = input()
t = int(value)


for i in range (0, t):
    dem = 0
    value = input()
    value = input()
    for j in value:
        if(j == '0'):
          dem+= 1
    print(dem)