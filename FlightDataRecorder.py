import math
class FlightDataRecorder:
    def getDistance(self, heading, distance):
        total_x, total_y = 0,0
        for i in range(len(heading)):
            r = distance[i]
            deg = heading[i]
            total_x += r*math.cos(math.pi*deg/180)
            total_y += r*math.sin(math.pi*deg/180)
        return math.sqrt(total_x**2 + total_y**2)
