a = int(input())
k = 1350

while a > 0:
    a = a - k
    if a < 0:
        continue
    else:
        print(a)