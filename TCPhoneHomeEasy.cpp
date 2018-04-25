#include "bits/stdc++.h"
 
using namespace std;
 
 
class TCPhoneHomeEasy {
public:
   int validNumbers(int digits, vector <string> specialPrefixes) {
      int ans = 1;
      for(int i = 0; i < digits; i++) {
         ans *= 10;
      }
      for(int i = 0; i < specialPrefixes.size(); i++) {
         int temp = 1;
         for(int j = specialPrefixes[i].length() ; j < digits; j++) {
            temp *= 10;
         }
         ans -= temp;
      }
      return ans;
   }
};
