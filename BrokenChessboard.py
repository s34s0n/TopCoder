class BrokenChessboard:
    def minimumFixes(self, tup):
        a = 0
        b = 0
        for i in range(len(tup)):
            for j in range(len(tup[0])):
                if (((i + j)%2) and tup[i][j] == 'W') or (((i + j + 1)%2) and tup[i][j] == 'B'):
                    a += 1
                else:
                    b += 1
        return min(a, b)
