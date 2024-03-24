def Input(): # 10개 입력받아서 리스트로 출력
    score = []
    for i in range(0, 10):
        score.append(int(input()))
    return score

def Algorithm(value):
    sum = 0
    prev = 0
    for i in value:
        prev = sum
        sum = prev + i
        if sum >= 100:
            break
    abssum = abs(sum - 100)
    absprev = abs(prev - 100)
    if absprev < abssum:
        print(prev)
    else:
        print(sum)

i = Input()
Algorithm(i)