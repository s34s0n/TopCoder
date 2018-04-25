class MakingPairs:
    def get(self, card):
        ans = 0
        for s in card:
            ans += s/2
        return ans
