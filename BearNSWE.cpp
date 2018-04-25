#include<iostream>
#include<cmath>
#include<iomanip>
#include<vector>
using namespace std;
class BearNSWE
{
public:
    double totalDistance(vector <int> a, string dir)
    {
       double brojac=0;
       int x1=0,y1=0;
       int x=x1;
       int y=y1;
       for(int i=0;i<a.size();i++)
       {
       if(dir[i]=='N')
       {
        y+=a[i];
       }
       if(dir[i]=='E')
       {
         x+=a[i];
       }
       if(dir[i]=='S')
       {
       y-=a[i];
       }
       if(dir[i]=='W')
       {
       x-=a[i];
       }
       brojac+=(double)a[i];
       }
       double dis=((abs(x-x1)*abs(x-x1))+(abs(y-y1)*abs(y-y1)));
       brojac+=sqrt((double)dis);
       return brojac;
       
    }
};
