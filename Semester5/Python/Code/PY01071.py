def check(ch):
    if(ch >= 'a' and ch <= 'z'):
        return True
    if(ch == '_' or ch == '.'):
        return True
    return False
def xuli():
    s = input()
    s = s.lower()
    if(len(s) <= 3):
        return "no"
    s1 = s[len(s) - 3: len(s)]
    if(s1 != ".py"):
        return "no"

    for i in s:
        if(check(i) == False):
            return "no"
    return "yes"
print(xuli())