s = input()
ans = ""
s1 = s[::-1]
dem = 0
for i in s1:
    dem+=1
    ans = i + ans
    if(dem == 3):
        ans = ',' + ans
        dem = 0
while(ans[0]== ','):
    ans = ans[1::None]
print(ans)