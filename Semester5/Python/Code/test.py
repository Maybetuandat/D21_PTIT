from datetime import datetime
s  =  input()
a = datetime.strptime(s, "%H:%M")
print(a.microsecond)