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

int n, maxx;
string st, ans;
map<string, int>mymap;
int months [] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool check(char xs)
{
    if(xs >= 48 && xs <= 57)
        return true;
    return false;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
n = st.size();
for(int i = 9; i < n; i++)
    if(check(st[i-9]) && check(st[i-8]) && st[i-7] == '-' && check(st[i-6]) && check(st[i-5]) && st[i-4] == '-' && check(st[i-3]) && check(st[i-2]) && check(st[i-1]) && check(st[i]))
    {
        string str_date = st.substr(i-9, 2), str_month = st.substr(i-6, 2), str_year = st.substr(i-3, 4);
        int date = atoi(str_date.c_str()), month = atoi(str_month.c_str()), year = atoi(str_year.c_str());
        if(year >= 2013 && year <= 2015 && month > 0 && month <= 12 && (date > 0 && date <= months[month]))
            ++mymap[str_date+"-"+str_month+"-"+str_year];
    }
for(map<string, int>::iterator ii = mymap.begin(); ii != mymap.end(); ii++)
    if(maxx < (*ii).S)
        maxx = (*ii).S, ans = (*ii).F;
cout<<ans<<endl;


return 0;}