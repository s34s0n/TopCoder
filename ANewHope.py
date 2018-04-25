class ANewHope:
  def count(self, A, B, D):
    N = len(A)
    X = [0] * N
    Y = [0] * N
    for i in range(N):
      X[A[i]-1] = i
      Y[B[i]-1] = i
    mx = max(X[i] - Y[i] for i in range(N))
    can = N - D
    ans = (mx + can - 1) / can + 1 
    return ans
