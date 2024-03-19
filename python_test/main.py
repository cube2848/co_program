## 입력을 하나의 문자열로 받아서 (숫자 + 문자)로 쪼개기

# def Input():
#     N = int(input())
#     st = []
#     for i in range(N):
#         st.append((input()))
#     return st

def Input():
    a = float(input())
    return a

def Unit_Input():
    a = input()
    return a

# def Input():
#     a, b = input().split()
#     c = int(a)
#     return c, b

def change(i, str):
    j = None
    if str == 'kg':
        j = i * 2.2046
        print(j, 'lb')
    elif str == 'l':
        j = i * 0.2642
        print(j, 'g')
    elif str == 'lb':
        j = i * 0.4536
        print(j, 'kg')
    elif str == 'g':
        j = i * 3.7854
        print(j, 'l')

    k = round(j, 4)
    return k

N = int(input())
for i in range(N):
    for j in range(N):
        a = Input()
        b = Unit_Input()
        change(a, b)
    break