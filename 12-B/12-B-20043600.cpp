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

string st1, st2;
char ch = '*';
int found;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st1>>st2;
sort(st1.begin(), st1.end());
for(int i = 0; i < st1.size(); i++)
	if(st1[i] != '0')
	{
		ch = st1[i];
		found = i;
		break;
	}
if(st1[0] == '0' && ch != '*')
	swap(st1[0], st1[found]);
if(st1 == st2)
	cout<<"OK"<<endl;
else
	cout<<"WRONG_ANSWER"<<endl;

return 0;}