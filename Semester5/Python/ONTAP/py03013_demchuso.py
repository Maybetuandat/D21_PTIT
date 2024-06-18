
def countinRangeAtDigit(number, index, digit ):     #index duoc tinh tu 0 tu ben phai sang 
 
    powerOf10 = int(pow(10, index))  # 10 ^ d
    
    nextPowerOf10 = powerOf10 * 10  # 10 ^ (d + 1)
    right = number % powerOf10 
 
    roundDown = number - number % nextPowerOf10;  #ex : 61523 rounddown = 6 * 10^4, roundup = 7 * 10^4, right = 523
    roundup = roundDown + nextPowerOf10; 
    
    d = (number // powerOf10) % 10; # lay so o vi tri index 
 
    # if the digit in spot digit is 
    res = 0
    if d < digit: res =  roundDown // 10; 
    if d == digit: res =  roundDown // 10 + right + 1; 
    if d > digit: res =  roundup // 10; 
    if digit == 0:
        res -= powerOf10    # tồn tại trường hợp đặc biệt là số 0 không thể đứng đầu, nên cần trừ đi powerof10
    return res
def countnumber(digit, begin, end):
    s = len(str(begin))
    countbegin = 0
    for i in range(s):
        countbegin += countinRangeAtDigit(begin - 1, i, digit)
    countend = 0
    s1 = len(str(end))
    for i in range(s1):
        countend += countinRangeAtDigit(end, i, digit)
    return countend - countbegin
for _ in range(int(input())):
    begin, end  = map(int, input().split())
    for i in range(0, 10):
        print(countnumber(i, begin, end), end = " ")
    print()
