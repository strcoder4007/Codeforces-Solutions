#include <bits/stdc++.h>
#define case(t) int t; cin>>t; while (t-- > 0)
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define vpii vector<pair<int,int> >
typedef long long ll;
using namespace std;
const int mod = 1e9+7;
    int l;

    int row[]={0,1,0,-1};
    int col[]={1,0,-1,0};

    int check_valid(int i,int j)
    {
    if(i<0 || j<0 || i>=l || j>=l)
        return 0;
    else
        return 1;
    }

    int main()
    {
        char arr[110][110];
        cin>>l;
        int i,j,k;
        int n=l;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>arr[i][j];
        
        int temp=0;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                {
                    int counter=0;
                    for(k=0;k<4;k++)
                    {
                        if(check_valid(i+row[k],j+col[k]))
                        {
                            if(arr[i+row[k]][j+col[k]]=='o')
                                counter++;
                        }
                    }
                    if(counter%2!=0)
                        temp=1;
                }
            }
        if(temp==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        
        return 0;
    }