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
#define mp make_pair
#define pb push_back
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

int n, cnt, save;
string st;
char ch;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>st;
st = '*'+st+'*';
n = st.size()-1;
for(int i = 1; i < n; i++)
{
	save = i+1;
	cnt = 1;
	for(char j = 'a'; j <= 'z'; j++)
		if(j != st[i-1] && j != st[i+1])
		{
			ch = j;
			break;
		}
	while(st[save] == st[i] && save < n)
		++save, ++cnt;
	if(cnt > 1 && cnt&1)
		for(int j = i+1; j < save; j+=2)
			st[j] = ch;
	else if(cnt%2 == 0)
		for(int j = i; j < save; j+=2)
			st[j] = ch;
	i = save-1;
}
for(int i = 1; i < n; i++)
	cout<<st[i];
cout<<endl;


return 0;}