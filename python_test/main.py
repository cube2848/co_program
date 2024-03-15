a = input()
b = list(a)
n = a.lower()

count = 0 # 중복된 수
max = []
for i in range(len(n)):
    count = 0
    for j in range(len(n)):
        if b[i] == b[j]:
            count = count + 1
    max[i] = count

maxvalue = max[0]
for k in range(1,len(max)):
    if maxvalue < max[k]:
        maxvalue = max[k]
print(maxvalue)





# for i in range(len(n)):
#     if 65 <= ord(n[i]) <= 90:
#         print(chr(ord(n[i]) + 32),end='')
#     else:
#         print(chr(ord(n[i]) - 32),end='')