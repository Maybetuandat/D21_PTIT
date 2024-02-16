

f = open('D:\Exercise\Kì 5\Python\TH_Lan_1\CATHI.in', 'r')

class CaThi:
    
    def __init__(self, date, time, id, code) -> None:
        self.date = date
        self.time = time
        self.id = id
        self.code = code
        
    def __str__(self) -> str:
        return  self.code + " " + self.date +" "+ self.time +" "+  self.id
    def convert(self):
        a = int(self.time[0:2])
        b = int(self.time[3:5])
        return a * 60 + b


a = []
t = int(f.readline())
for i in range(1, t+1):
        if i < 10:
              s = "C00" + str(i)
        elif i >= 10 and i <= 99:
              s = "C0" + str(i)
        else:
              s = "C" + str(i)
        
        a.append(CaThi(f.readline().rstrip('\n'), f.readline().rstrip('\n'), f.readline().rstrip('\n'), s))
a.sort(key= lambda x : (x.date, x.convert(),  x.code) )
for i in a:
        print(i)
 