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
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>
#include <iomanip>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n, save, cnt, ans;
string st;
bool found;

bool check(char ch)
{
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        return true;
    return false;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>st;
for(int i = 0; i < n; i++)
{
    if(st[i] == '(')
        found = true;
    else if(st[i] == ')')
        found = false;
    if(check(st[i]))
    {
        if(i == 0)
        {
            save = i+1;
            while(check(st[save]))
                ++save;
            if(st[save] == '_' || st[save] == ')' || st[save] == '(' || save == n)
                if(!found)
                    cnt = max(cnt, save-i);
            i = save-1;
        }
        else if(i == n-1)
        {
            save = i-1;
            if(st[save] == '_' || st[save] == ')')
                if(!found)
                    cnt = max(cnt, abs(save-i));
        }
        else
        {
            save = i+1;
            while(check(st[save]))
                ++save;
            if(st[save] == '_' || st[save] == ')' || st[save] == '(' || save == n)
            {
                if(!found)
                    cnt = max(cnt, save-i);
                if(found)
                    ++ans;
            }
            i = save-1;
        }
    }
}
cout<<cnt<<" "<<ans<<endl;


return 0;}