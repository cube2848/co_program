# 입력이 2개
# 1. 테스트 케이스
# 2. 정답입력

N = int(input())
st = []
for i in range(N):
    st.append((input()))

count = 0
score = 0
for i in range(N):
    count = 0
    score = 0
    for j in st[i]:
        if j == 'O':
            count = count + 1
            score = score + count
        elif j == 'X':
            count = 0
    print("점수 :",score)