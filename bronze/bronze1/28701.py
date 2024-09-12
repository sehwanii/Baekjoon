a = input()
b = input()
c = input()

if a.isdigit():
    d = int(a)+3
elif b.isdigit():
    d = int(b)+2
else:
    d = int(c)+1
flag = False
if(d%3 == 0):
    print("Fizz",end = '')
    flag = True
if(d%5 == 0):
    print("Buzz")
    flag = True
if(not flag):
    print(d)