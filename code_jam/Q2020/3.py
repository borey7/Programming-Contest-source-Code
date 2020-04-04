t = int(input())
for case in range(t):
    result = ''
    cam_free = [True]*(24*60+1) #Cameron's time slot 0 -> 1440 is free
    jam_free = [True]*(24*60+1) #Jamie's time slot 0 -> 1440 is free

    for i in range(int(input())):
        s, e = map(int, input().split())
        
        if not result == 'IMPOSSIBLE':    
            if all(jam_free[s:e]): #assign to Cameron
                for minute in range(s, e):
                    jam_free[minute] = False
                result += 'J'
            elif all(cam_free[s:e]): #assign to Jamie
                for minute in range(s, e):
                    cam_free[minute] = False
                result += 'C'
            else:
                result = 'IMPOSSIBLE'

    print('Case #%d: %s'%(case+1, result))