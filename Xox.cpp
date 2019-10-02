#include<bits/stdc++.h>
using namespace std;
class Xox {
public:
    int count( string text ) {
        string S = text;
        int l = S.size();

        int sol[ 100 ];
        memset( sol, 0, sizeof sol );

        for( int i = 0; i < l; ++i )
            if( S.substr( i, 3 ) == "xox" )
                sol[i] = sol[i+1] = sol[i+2] = 1;

        int sum = 0;
        for( int i = 0; i < l; ++i )
            sum += sol[i];

        return sum;
    }
};

int main(){
    return 0;
}
