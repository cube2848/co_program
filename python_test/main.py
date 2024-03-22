# 0  1  1  2  3 5 8 13 21 34 55 89 144 233
#[0][1][2][3] ---
# f[3] = f[1] + f[2]

def Input():
    n = int(input())
    return n
def fibonacci(n):
    for i in range(0, n):
        if n == 1 or n == 2:
            return 1
        else:
            i = fibonacci(n-2) + fibonacci(n-1)
            return i

ent = Input()
result = fibonacci(ent)
print(result)