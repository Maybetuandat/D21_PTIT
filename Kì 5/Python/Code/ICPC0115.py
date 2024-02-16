factor = [1] * 20
def init():
    factor[1] = 1
    for i in range(2, 15):
        factor[i] = factor[i-1] * i
def xuli():
    n = input()
    sum =0
    for i in n:
        sum += factor[int(i)]
    if(sum == int(n)):
        return "Yes"
    else:
        return "No"
init()       
for i in range(int(input())):
    print(xuli())