#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <iomanip>
#include <list>
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n, yes, no;
bool ary[110];
vector<int>myvec, vec1, newvec;
string st;

void esieve(int num)
{
    for(int i = 2; i < num; i++)
        if(ary[i] == false)
        {
            int ii = 2;
            myvec.pb(i);
            while(i*ii <= num)
                ary[i*ii] = true, ++ii;
        }
}

int main(){
//freopen("input.txt", "r", stdin);

newvec.pb(4), newvec.pb(9), newvec.pb(25), newvec.pb(49);
for(int i = 0; i < newvec.size(); i++)
{
    cout<<newvec[i]<<endl;
    fflush(stdout);
    cin>>st;
    if(st == "yes")
    {
        cout<<"composite"<<endl;
        return 0;
    }
}
esieve(100);
for(int i = 0; i < 16; i++)
{
    cout<<myvec[i]<<endl;
    fflush(stdout);
    cin>>st;
    //vec1.pb(myvec[i]);
    if(st == "yes")
        ++yes;
    else
        ++no;
    //newvec.pb(st);
}
if(yes >= 2)
{
    cout<<"composite"<<endl;
    //fflush(stdout);
}
else
{
    cout<<"prime"<<endl;
    //fflush(stdout);
}
/*
for(int i = 0; i < vec1.size(); i++)
    cout<<vec1[i]<<" ";
cout<<endl;
*/

return 0;}