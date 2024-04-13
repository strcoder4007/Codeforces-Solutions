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

string fst, sec;
char s;
map<char, int>mymap;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

mymap['6'] = 6, mymap['7'] = 7, mymap['8'] = 8, mymap['9'] = 9;
mymap['T'] = 10, mymap['J'] = 11, mymap['Q'] = 12, mymap['K'] = 13, mymap['A'] = 14;
cin>>s>>fst>>sec;
if(fst[1] != sec[1])
{
    if(fst[1] == s)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
else if((fst[1] == s && sec[1] == s) || (fst[1] != s && sec[1] != s))
{
    if(mymap[fst[0]] > mymap[sec[0]])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
else if(fst[1] == s && sec[1] != s)
    cout<<"YES"<<endl;
else if(fst[1] != s && sec[1] == s)
    cout<<"NO"<<endl;

return 0;}