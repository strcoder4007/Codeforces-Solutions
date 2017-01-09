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

int n, m, board[510][510], hori[510][510], verti[510][510], ans, q;

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>m;
for(int i = 1; i <= n; i++)
{
	string st; cin>>st;
	for(int j = 1; j <= m; j++)
		if(st[j-1] == '.')
			board[i][j] = 1;
}

for(int i = 1; i <= n; i++)
	for(int j = 1; j <= m; j++)
	{
		hori[i][j] = hori[i][j-1];
		if(board[i][j] == 1 && board[i][j-1] == 1)
			++hori[i][j];
	}
for(int j = 1; j <=m; j++)
	for(int i = 1; i <= n; i++)
	{
		verti[i][j] = verti[i-1][j];
		if(board[i][j] == 1 && board[i-1][j] == 1)
			++verti[i][j];
	}


cin>>q;
while(q--)
{
	int x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	ans = 0;
	for(int i = x1; i <= x2; i++)
		ans += (hori[i][y2]-hori[i][y1]);
	for(int j = y1; j <= y2; j++)
		ans += (verti[x2][j]-verti[x1][j]);
	cout<<ans<<endl;
}

return 0;}