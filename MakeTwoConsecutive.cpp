#include<bits/stdc++.h>
using namespace std;
class MakeTwoConsecutive {
    public :
      string solve(string S) {
        if (S.size() < 3) {
            return"Impossible";
        }
        int ret =0;
        for(int i=0; i<S.size(); ++i) {
            if(i>0 && S[i]==S[i-1]) {
                ret =1;
            }
            else if(i>1&&S[i]==S[i-2]) {
                ret=1;
            }
        }
        return ret ? "Possible" : "Impossible";
      }
};
