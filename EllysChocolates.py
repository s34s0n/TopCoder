class EllysChocolates:
    def getCount(self, P, K, N):
        eaten = N / P
        wraps = eaten
        while wraps >= K:
            c = wraps / K
            wraps -= c * K
            wraps += c
            eaten += c
        return eaten
