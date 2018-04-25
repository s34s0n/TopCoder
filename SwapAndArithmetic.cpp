#include<bits/stdc++.h>
using namespace std;


class SwapAndArithmetic {
public:
  string able(vector <int> x) {
    sort(x.begin(),x.end());
    int n=x.size();
    if(n<=2)return "Possible";
    else {
      int d=x[1]-x[0];
      bool ok=1;
      for(int i=1;ok&&i<x.size();i++){
        if(d!=x[i]-x[i-1])return "Impossible";
      }
      return "Possible";
    }
  }
};
