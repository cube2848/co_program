def Input():
    N = int(input())
    val_st = []
    unit_st = []
    temp = None
    for i in range(N):
        temp = input().split(' ')
        val_st.append(float(temp[0]))
        unit_st.append((temp[1]))
    return val_st, unit_st

def Output(Al_val, Al_unit):
    print("{:.4f}".format(Al_val), Al_unit)

def Algorithm(val, unit):
    if unit == 'kg':
        val = val * 2.2046
        unit = 'lb'
    elif unit == 'l':
        val = val * 0.2642
        unit = 'g'
    elif unit == 'lb':
        val = val * 0.4536
        unit = 'kg'
    elif unit == 'g':
        val = val * 3.7854
        unit = 'l'
    return val, unit

Val, Unit = Input()
for i in range(0, len(Val)):
    chan_val, chan_unit = Algorithm(Val[i], Unit[i])
    Output(chan_val, chan_unit)

# 1. 리스트에 추가할 때는 list이름.append 사용
# 2. return 값이 여러 개일 경우 메인함수에서 변수를 똑같은 개수로 선언한다.
# 3. 오류 발생을 무서워 하지 말고 일단 실행해보기