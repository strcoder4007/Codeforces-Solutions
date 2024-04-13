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

int n, found[30];
string ary[35];
bool error;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
for(int i = 0; i < n; i++)
{
    cin>>ary[i];
    for(int j = 0; j < ary[i].size(); j++)
        ++found[ary[i][j]-96];
}
for(int i = 1; i <= 26; i++)
    if(!found[i])
    {
        char num = 'a'+i-1;
        cout<<num<<endl;
        return 0;
    }
for(char a = 'a'; a <= 'z'; a++)
    for(char b = 'a'; b <= 'z'; b++)
    {
        error = false;
        for(int i = 0; i < n; i++)
            for(int j = 1; j < ary[i].size(); j++)
                if(ary[i][j-1] == a && ary[i][j] == b)
                    error = true;
        if(!error)
        {
            cout<<a<<b<<endl;
            return 0;
        }
    }


return 0;}