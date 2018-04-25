class AddMultiply:
    def makeExpression(self, y):
        for i in range(2, 1000):
            a = y - (i*i)
            if a >= -1000 and a <= 1000 and a != 0 and a != 1:
                return (i, i, a)
