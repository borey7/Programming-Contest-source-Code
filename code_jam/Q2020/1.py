n = int(input())
for i  in range(n):
    m = int(input())
    k = 0
    r = 0
    c = 0
    arr = [0]*m
    for j in range(m):
        a = list(map(int, input().split()))
        k += a[j]
        r += 0 if len(a) == len(set(a)) else 1
        arr[j] = a
    for ii in range(m):
        a2 = [arr[j][ii] for j in range(m)]
        # print('column', a2, len(a2), set(a2), len(set(a2)))
        c += 0 if len(a2) == len(set(a2)) else 1
    print('Case #%d: %d %d %d'%(i+1, k, r, c))