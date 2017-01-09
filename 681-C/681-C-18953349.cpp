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

long long n;
multiset<long long>myset;
vector<pair<string, long long> >myvec;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(long long i = 0; i < n; i++)
{
    string st; long long xs;
    cin>>st;


    if(st[0] == 'i')
    {
        cin>>xs;
        myset.insert(xs);
        myvec.pb(mp("insert", xs));
    }


    else if(st[0] == 'g')
    {
        cin>>xs;
        if((*myset.begin()) != xs || myset.size() == 0)  //if first one is not xs
        {
            if(myset.find(xs) != myset.end()) //found
            {
                while((*myset.begin()) != xs && myset.size())
                {
                        myvec.pb(mp("removeMin", 1000000010));
                        myset.erase(myset.begin());
                }
                myvec.pb(mp("getMin", (*myset.begin())));
            }
            else //not found
            {
                while((*myset.begin()) < xs && myset.size())
                {
                    myvec.pb(mp("removeMin", 1000000010));
                    myset.erase(myset.begin());
                }
                myvec.pb(mp("insert", xs));
                myset.insert(xs);
                myvec.pb(mp("getMin", (*myset.begin())));
            }
        }
        else // if first one is xs
        {
            myvec.pb(mp("getMin", (*myset.begin())));
        }
    }


    else
    {
        if(myset.size() == 0)
        {
            myset.insert(1);
            myvec.pb(mp("insert", 1));
        }
        myvec.pb(mp("removeMin", 1000000010));
        myset.erase(myset.begin());
    }
}


cout<<myvec.size()<<endl;
for(long long i = 0; i < myvec.size(); i++)
{
    if(myvec[i].S == 1000000010)
        cout<<myvec[i].F<<endl;
    else
        cout<<myvec[i].F<<" "<<myvec[i].S<<endl;
}

return 0;}