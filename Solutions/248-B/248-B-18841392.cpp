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

#define left sfjslfkjperihj
int n, num, left;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n;
if(n <= 2)
{
    cout<<-1<<endl;
    return 0;
}
if(n == 3)
{
    cout<<210<<endl;
    return 0;
}
num = 1;
for(int i = 2; i <= n; i++)
    num *= 10, num %= 210;
if(num != 0)
    left = 210-num;
else
    left = num;
cout<<1;
for(int i = 2; i < n-2; i++)
    cout<<0;
cout<<left/100;
left %= 100;
cout<<left/10;
left %= 10;
cout<<left<<endl;


return 0;}