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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l,nm) fill_n(*l, sizeof l/sizeof **l,nm);
#define MOD 1000000007
using namespace std;

long long n,q,k,s[200010],bst,bp;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>k;
for(int i=0;i<n;i++)
{
 cin>>q;
 s[i%k]+=q;
}
bst=1e9;
bp=0;
for(int i = 0; i < k; i++)
  if(s[i] < bst)
    bst=s[i],bp=i;
cout<<bp+1<<endl;

return 0;}