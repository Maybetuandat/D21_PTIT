n = int(input())
a = list(map(int, input().split()))
stack = []
for i in range(0, n):
    if(len(stack) == 0):
        stack.append(a[i])
    else:
        if((a[i] + stack[len(stack) - 1]) % 2  == 0):
            stack.pop()
        else:
            stack.append(a[i])
print(len(stack))
