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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
#define LL long long
using namespace std;


int r1, r2, c1, c2, d1, d2, a1, a2, b1, b2;

int main(){
//freopen("in.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    int s1 = r1+r2;
    int s2 = c1+c2;
    int s3 = d1+d2;
    if(s1!=s2 || s1!=s3 || s2!=s3)
    {
        cout<<-1<<endl;
        return 0;
    }

    for(a1 = 1;a1<=9;a1++)
    {
        for(b1 = 1;b1<=9;b1++)
        {
            for(a2=1;a2<=9;a2++)
            {
                for(b2 = 1;b2<=9;b2++)
                {
                    if(a1 == b1 || a1 == b2 || a1 == a2 ||a2 == b1 || a2 == b2 || b1 ==b2 )continue;
                    int s1 = a1+a2;
                    int s2 = b1 + b2;
                    int s3 = a1+b1;
                    int s4 = a2+b2;
                    int s5 = a1+b2;
                    int s6 = a2+b1;
                    if(s1 == r1 && s2 == r2 && s3 == c1 && s4 == c2 && s5 == d1 && s6 == d2 )
                    {
                        cout<<a1<<" "<<a2<<endl;
                        cout<<b1<<" "<<b2<<endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout<<-1<<endl;

return 0;}