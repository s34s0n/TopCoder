#include <bits/stdc++.h>
 
using namespace std;
 
class ILike5 {
public:
  int transformTheSequence(vector <int> X) {
    int five = 0, two = 0;
    for (int i = 0; i < X.size(); ++i) {
      if (X[i] % 2 == 0) two++;
      if (X[i] % 10 == 5) five++;
    }
    int ret = two;
    if (ret == 0 && five == 0) return 1;
    else return ret;
  }
};
