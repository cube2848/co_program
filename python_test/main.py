import random

for i in range(1,6):
    print(str(i) + "번 학생",end=' ')
    for j in range(1,6):
        print(random.randint(1,9),end=' ')
    print(end='\n')


count = 0 ## 겹치는 수
Class = 0 ## 공통되는거 찾기
grade = 0 ## 학년
for k in range(1,6):
    for n in range(1,6):
        if grade[n].Class[i] == grade[n].Class[i+1]:
            count = count + 1