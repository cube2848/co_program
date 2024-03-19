def Input():
    st = []
    temp = None ## temp 초기화 (문자열)
    while True:
        temp = input()
        if temp == '0':
            break
        else:
            st.append(temp)
    return st

def Algorithm(str):
    last = len(str)
    for i in range(0, last):
        if i == last:
            return True
        elif str[i] != str[last-1]: ## 맨 끝에 NULL 값이기 때문
            return False
        last -= 1
    return True

def Output(ret):
    if ret == True:
        print("yes")
    else:
        print("no")

num = Input()
for i in num:
    ret = Algorithm(i)
    Output(ret)