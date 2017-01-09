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

int n, start, cnt;
bool error;
string st;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>st;
for(int start = 0; start < n; start++)
{
    for(int i = 1; i < n; i++)
    {
        error = false; cnt = 0;
        for(int j = start; j < n; j+=i)
        {
            if(cnt >= 5)
                break;
            if(st[j] == '.')
                error = true, cnt = 0;
            else
                ++cnt;
        }
        if(!error && cnt >= 5)
        {
            cout<<"yes"<<endl;
            return 0;
        }
    }
}
cout<<"no"<<endl;

return 0;}