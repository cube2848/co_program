N = int(input())
st = []

for i in range(N):
    st.append((input()))


for j in range(0, len(st)):
    a = len(j)
    b = (len(j) // 2) + 1
    for k in range(0, len(st[j])):
        if len(j) != 0:
            if j[k] == j[-k]:






# a = input().split()
# b = len(a)
# c = (b // 2) + 1
# count = 0
#
# for i in range(0, b):
#     for j in range(0, c):
#         if b % 2 != 0:
#             if a[i] == a[-j]:
#                 count += 1
#                 if count // 2 == 0:
#                     print('yes')
#
#         elif b % 2 == 0:
#             print('no')