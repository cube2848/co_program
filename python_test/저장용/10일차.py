def Input():
    n = int(input())
    return n

def fibonacci(n):
    if n == 0:
        return 0
    sum = 1
    temp = 0
    for i in range(1, n):
        a = sum
        sum = temp + sum
        temp = a
    return sum


ent = Input()
result = fibonacci(ent)
print(result)