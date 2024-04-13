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
#include <list>
#include <ctime>
#include <memory.h>
#include <ctime> 
 
#define y0 sdkfaslhagaklsldk
#define y1 aasdfasdfasdf
#define yn askfhwqriuperikldjk
#define j1 assdgsdgasghsf
#define tm sdfjahlfasfh
#define lr asgasgash
 
#define eps 1e-9
//#define M_PI 3.141592653589793
#define bs 1000000007
#define bsize 256

using namespace std;

int n,x[1<<20],h[1<<20],L,ans;

int main(){
//freopen("newlines.in","r",stdin);
//freopen("newlines.out","w",stdout);
//freopen("F:/input.txt","r",stdin);
//freopen("F:/output.txt","w",stdout);
ios_base::sync_with_stdio(0);
//cin.tie(0);

cin>>n;
for (int i=1;i<=n;i++)
{
    cin>>x[i]>>h[i];    
}

L=-1e9;

for (int i=1;i<=n;i++)
{
    if (L<x[i]-h[i])
    {
        ans++;
        L=x[i];
    }
    else if (i==n||x[i]+h[i]<x[i+1])
    {
        ans++;
        L=x[i]+h[i];
    }
    else L=x[i];
}
cout<<ans<<endl;

//cin.get();cin.get();
return 0;}