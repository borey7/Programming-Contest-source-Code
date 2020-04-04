t = int(input())
for case in range(t):
    s = list(map(int, input()))
    ss = ''
    l = len(s)
    for i in range(l):
        n = s[i]
        left = 0 if i-1 < 0 else s[i-1]
        right = 0 if i+1 >= l else s[i+1]
        ss += '('*(n-left if n-left > 0 else 0)
        ss += str(n)
        ss += ')'*(n-right if n-right > 0 else 0)

    print('Case #%d: %s'%(case+1, ss))