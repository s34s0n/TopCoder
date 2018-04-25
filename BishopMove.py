class BishopMove:
    def howManyMoves(self, r1, c1, r2, c2):
        if (r2-r1) %2 != (c2-c1) %2:
            return -1
        else:
            if r2==r1 and c2==c1:
                return 0
            elif abs(r2-r1) == abs(c2-c1):
                return 1
            else:
                return 2
