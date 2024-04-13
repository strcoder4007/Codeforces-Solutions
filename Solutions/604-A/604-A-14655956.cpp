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

int score[5], wrong[5], h1, h2, sum;
float calc;

int main(){
//freopen("input.txt","r",stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

int maxscore[5] = {500, 1000, 1500, 2000, 2500};
for(int i = 0; i < 5; i++)
  cin>>score[i];
for(int i = 0; i < 5; i++)
  cin>>wrong[i];
cin>>h1>>h2;
for(int i = 0; i < 5; i++)
{
  calc = max(0.3*maxscore[i], ((1-score[i]/250.0)*maxscore[i])-(50*wrong[i]));
  sum += calc;
}
sum += h1*100-h2*50;
cout<<sum<<endl;

return 0;}