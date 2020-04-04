t = int(input())
for case in range(t):
    result = ''
    # cam_free = [True]*(24*60+1) #Cameron's time slot 0 -> 1440 is free
    # jam_free = [True]*(24*60+1) #Jamie's time slot 0 -> 1440 is free
    
    n = int(input())
    acts = [ list(map(int, input().split())) for i in range(n) ]

    for i in range(pow(2, n)): #[CCCC, CCCJ, CCJC, ...]
        parents = [[True]*(24*60+1), [True]*(24*60+1)] #Cameron = 0, Jamie = 1
        possible = bin(i)[2:].zfill(n) # CCCC
        hahahaha = 0
        for index in range(n): # verify possible schedul with parents' time slot
            
            # start for first activit to the last
            s, e = acts[index]
            c_or_j = int(possible[index])
            if all(parents[c_or_j][s:e]): #if that slot really free
                #update time slot to not free
                for minute in range(s, e):
                    parents[c_or_j][minute] = False
                hahahaha += 1
            else: #if not, no need to check next activit in this possible
                continue #the CCCC is impossible, continue to next CCCJ, ...

        if hahahaha == n: #found a possible case, stop check next CCCJ, go to next use case
            result = possible
            break
    
    if result == '': # cannot find possible case
        result = 'IMPOSSIBLE'
    else:
        result = result.replace('0', 'C')
        result = result.replace('1', 'J')

    print('Case #%d: %s'%(case+1, result))