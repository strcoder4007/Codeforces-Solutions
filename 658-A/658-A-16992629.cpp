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
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

int n, c, score[55], tyme[50], fst, sec, fstt[55], secc[55];
int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>n>>c;
for(int i = 1; i <= n; i++)
    cin>>score[i];
for(int i = 1; i <= n; i++)
    cin>>tyme[i];
fstt[1] = tyme[1];
secc[n] = tyme[n];
for(int i = 2; i <= n; i++)
    fstt[i] = fstt[i-1]+tyme[i];
for(int i = n-1; i; i--)
    secc[i] = secc[i+1]+tyme[i];
for(int i = 1; i <= n; i++)
    fst += max(0, score[i]-(c*fstt[i]));
for(int i = n; i; i--)
    sec += max(0, score[i]-(c*secc[i]));

if(fst > sec)
    cout<<"Limak"<<endl;
else if(fst < sec)
    cout<<"Radewoosh"<<endl;
else
    cout<<"Tie"<<endl;

return 0;}