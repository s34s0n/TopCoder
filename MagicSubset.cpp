#include <bits/stdc++.h>
 
using namespace std;
 
class MagicSubset {
public:
int findBest(vector <int> values) {
    int maxPos = 0;
    int maxNeg = 0;
    for(int i=1;i<values.size();i++)
    {
        if(values[i]<0)
            maxNeg+=-values[i];
        else
            maxPos+=values[i];
    }
    maxNeg+=-values[0];
    int res = max(maxNeg,0);
    return max(res,maxPos);
}
};
