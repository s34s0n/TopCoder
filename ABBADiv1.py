
def rl(s): return xrange(len(s))
 
 
 
INF = 2147483647
 
class ABBADiv1:
    def canObtain(self, initial, target):
        
        initial = list(initial)
        target = list(target)
        initlen = len(initial)
        for offset in range(50):
            if target[offset:offset+initlen] == initial:
                front = target[:offset]
                tail = target[offset+initlen:]
                while len(tail) >= 1 and tail[-1] == 'A':
                    tail.pop()
                if len(front) == 0:
                    if len(tail) == 0:
                        return "Possible"
                elif front[0] == 'B' and front.count('B') == tail.count('B'):
                    return "Possible"
 
        initial.reverse()
        for offset in range(50):
            if target[offset:offset+initlen] == initial:
                front = target[:offset]
                tail = target[offset+initlen:]
                while len(tail) >= 1 and tail[-1] == 'A':
                    tail.pop()
                if (len(front) >= 1 and front[0] == 'B' 
                and front.count('B') == tail.count('B')+1):
                    return "Possible"
 
        return "Impossible"
