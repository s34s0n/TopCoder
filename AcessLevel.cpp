 #include <#include<bits/stdc++.h>>

 
using namespace std;
 
class AccessLevel {
  public:
  string canAccess(vector <int> rights, int minPermission) {
    string ret;
    
    ret = "";
    for(int i=0;i<rights.size();i++)
    if(rights[i]>=minPermission)
    ret+="A";
    else
    ret+="D";
    return ret;
  }
};
 
