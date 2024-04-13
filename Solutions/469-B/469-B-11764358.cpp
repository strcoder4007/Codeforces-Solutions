#include <bits/stdc++.h>


using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
int p,q,l,r;
int a[51];
int b[51];
int c[51];
int d[51];
int main()
{

cin>>p>>q>>l>>r;
for(int i=0;i<p;i++)
{
  cin>>a[i]>>b[i];
}
for(int j=0;j<q;j++)
{
    cin>>c[j]>>d[j];
}
int an = 0;
for(int i=l;i<=r;i++)
{
    int f=0;
    for(int j=0;j<p;j++)
    {
        for(int k=0;k<q;k++)
        {
            int x,y;
            int m,n;
            x = a[j];
            y = b[j];
            m = c[k]+i;
            n = d[k]+i;
            if(y<m || x>n) continue;
            f=1;
        }
    }
    an+=f;
}
cout<<an<<endl;
    return 0;
}