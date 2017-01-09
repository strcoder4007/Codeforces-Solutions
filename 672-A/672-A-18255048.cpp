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

int n;
string ts;



int main(){
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
ios_base::sync_with_stdio(0);
cin.tie(0);

for(int i = 1; i <= 1000; i++)
{
    string result;
    stringstream convert;
    convert<<i;
    result = convert.str();
    ts += result;
}
cin>>n;
//cout<<ts.size()<<endl;
cout<<ts[n-1]<<endl;


return 0;}