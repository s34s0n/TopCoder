class HillClimber():
 
    def longest(self, height):
        result = [0]
        for i in range(1, len(height)):
            if height[i] > height[i - 1]:
                result.append(result[i - 1] + 1)
            else:
                result.append(0)
        return max(result)
