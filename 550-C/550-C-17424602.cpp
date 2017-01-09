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

int n, num;
string st;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
for(int i = 0; i < n; i++)
{
    num = st[i]-48;
    if(num%8 == 0)
    {
        cout<<"YES"<<endl<<num<<endl;
        return 0;
    }
}
for(int i = 0; i < n; i++)
    for(int j =  i+1; j < n; j++)
    {
        num = (st[i]-48)*10+(st[j]-48);
        if(num%8 == 0)
        {
            cout<<"YES"<<endl<<num<<endl;
            return 0;
        }
    }
for(int i = 0;  i < n; i++)
    for(int j = i+1; j < n; j++)
        for(int k = j+1; k < n; k++)
        {
            num = (st[i]-48)*100+(st[j]-48)*10+(st[k]-48);
            if(num%8 == 0)
            {
                cout<<"YES"<<endl<<num<<endl;
                return 0;
            }
        }
cout<<"NO"<<endl;

return 0;}