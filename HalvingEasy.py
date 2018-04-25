class HalvingEasy:
  def count(self, S, T):
    ans = 0
    for y in S:
      x = y
      while x != T and x:
        x //= 2
      if x == T:
        ans += 1
    return ans
