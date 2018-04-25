#include <#include<bits/stdc++.h>
 
using namespace std;
 
class ATaleOfThreeCities {
  public:
      double minDst(vector <int> ax, vector <int> ay, vector <int> bx, vector <int> by) {
         double mn = 99999999999;
         for (int i =0; i<ax.size(); ++i)
            for (int j =0; j<bx.size(); ++j)
            {
               double dst = sqrt(pow(ax[i] - bx[j], 2) + pow(ay[i] - by[j], 2));
               if (dst < mn)
                  mn = dst;
            }
         return mn;
      }
 
  double connect(vector <int> ax, vector <int> ay, vector <int> bx, vector <int> by, vector <int> cx, vector <int> cy) {
 
       double d1(minDst(ax, ay, bx, by));
       double d2(minDst(ax, ay, cx, cy));
       double d3(minDst(bx, by, cx, cy));
       return d1+d2+d3 - max(d1, max(d2, d3));
  }
};
