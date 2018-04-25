#include<bits/stdc++.h>
using namespace std;
 
 
class SafeBetting {
public:
  int minRounds(int a, int b, int c) {
        int res = 0;
 
        while (b < c) {
            b += (b-a);
            res++;
        }
        return res;
  }
};
 
