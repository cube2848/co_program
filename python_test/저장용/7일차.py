a = input()
n = a.upper()
b = list(n)


count = 0 # 중복된 수
max = []
max_arr = []
for i in range(0, len(b)):
    count = 0
    if b[i] in max_arr:
        continue
    for j in range(0, len(b)):
        if b[i] == b[j]:
            count = count + 1
    max.append(count)
    max_arr.append(b[i])


maxvalue = max[0]
for k in range(1, len(max)):
    if maxvalue < max[k]:
        maxvalue = max[k]

same = 0
for m in range(0, len(max)):
    if maxvalue == max[m]:
        same = same + 1
if same != 1:
    print("?")
else:
    print(max_arr[max.index(maxvalue)])