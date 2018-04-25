class EllysBottles(object):
 
    def getVolume(self, bottles, k):
        bottles = list(bottles)
        bottles.sort()
        while bottles[0] != bottles[-1] and k:
            k -= 1
            now = float(bottles[0] + bottles[-1]) / 2
            bottles[0] = now
            bottles[-1] = now
            bottles.sort()
 
        return bottles[0]
