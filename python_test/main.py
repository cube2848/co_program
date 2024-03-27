def Input():
    n = int(input())
    num1 = [] # 첫번째 숫자 배열
    num2 = [] # 두번째 숫자 배열
    for i in range(n):
        num1.append((input()))
        num2.append((input()))
    return num1, num2, n

def Algorithm(num1, num2): # 리스트 2개 받아
    count = 0
    for i in range(0, len(num1)):
        for j in range(0, len(num2)):
            if num1[i] != num2[j]:
                count += 1
            else:
                count += 0
    return count

def Output(n, count):
    for i in range(0, n):
        print("Hamming distance is ", count, '.', sep='')

Num1, Num2, N = Input()
result = Algorithm(Num1, Num2)
Output(N, result)