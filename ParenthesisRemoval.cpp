#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
class ParenthesisRemoval {
  public:
  int countWays(string s) {
    long long int res = 1, cnt  =0;
    for(int i=((int)s.size())-1; i>=0; i--)
      if(s[i] == ')')
        cnt++;
      else{
        res = res * cnt % mod;
        cnt--;
      }
    return res;
  }
  

};
