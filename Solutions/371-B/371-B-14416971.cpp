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

int a, b, fst, sec, ans;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>a>>b;
fst=sec=0;
while (a%2==0){fst++;a/=2;}
while (b%2==0){sec++;b/=2;}
ans+=abs(fst-sec);
fst=sec=0;
while (a%3==0){fst++;a/=3;}
while (b%3==0){sec++;b/=3;}
ans+=abs(fst-sec);
fst=sec=0;
while (a%5==0){fst++;a/=5;}
while (b%5==0){sec++;b/=5;}
ans+=abs(fst-sec);
if (a-b)
  cout<<-1<<endl;
else
  cout<<ans<<endl;

return 0;}