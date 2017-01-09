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
#include <iostream>
#include <stdlib.h>

#define F first
#define S second
#define endl "\n"
#define pb push_back
#define mp make_pair
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

string st;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
if(st[0] == 'a' && st[1] == '8')
	cout<<3<<endl;
else if(st[0] == 'a' && st[1] == '1')
	cout<<3<<endl;
else if(st[0] == 'h' && st[1] == '8')
	cout<<3<<endl;
else if(st[0] == 'h' && st[1] == '1')
	cout<<3<<endl;
else if(st[0] == 'a' && (st[1] != '8' && st[1] != '1'))
	cout<<5<<endl;
else if(st[0] == 'h' && (st[1] != '8' && st[1] != '1'))
	cout<<5<<endl;
else if(st[1] == '1' &&(st[0] != 'a' && st[0] != 'h'))
	cout<<5<<endl;
else if(st[1] == '8' &&(st[0] != 'a' && st[0] != 'h'))
	cout<<5<<endl;
else
	cout<<8<<endl;

return 0;}