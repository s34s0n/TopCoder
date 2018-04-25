#include <bits/stdc++.h>

using namespace std;



class DancingSentence { 
public: 
string makeDancing (string s) {
       int flag = 0;
       for (unsigned i=0;i!=s.size();++i) {
           if (s[i] == ' ') continue;
           if (flag == 0) {
              s[i] = toupper(s[i]);
              flag = 1;
           } else {
             flag = 0;
             s[i] = tolower(s[i]);
           }
       }

       return s;

} 
