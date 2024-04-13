#include <bits/stdc++.h>
using namespace std;

const int INF=500*3;
int n,a[5],b[5];

bool check(){
    for(int i=1;i<=4;i++) b[i]=a[i];
    sort(b+1,b+1+4);
    return (b[1]+b[2]+b[3]+b[4]==2*(b[2]+b[3])&&b[2]+b[3]==2*(b[4]-b[1]));
}
void F2(){
    for(a[3]=1;a[3]<=INF;a[3]++)
    for(a[4]=1;a[4]<=INF;a[4]++){
        if(check()){
            printf("YES\n%d\n%d\n",a[3],a[4]);
            return;
        }
    }
    printf("NO\n");
}
void F3(){
    for(a[4]=1;a[4]<=INF;a[4]++){
        if(check()){
            printf("YES\n%d\n",a[4]);
            return;
        }
    }
    printf("NO\n");
}
int main()
{
    while(cin>>n){
        for(int i=1;i<=n;i++) cin>>a[i];
        if(n==0) printf("YES\n1\n1\n3\n3\n");
        else if(n==1) printf("YES\n%d\n%d\n%d\n",2*a[1],2*a[1],3*a[1]);
        else if(n==2){
            F2();
        }else if(n==3){
            F3();
        }else {
            if(check()) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}