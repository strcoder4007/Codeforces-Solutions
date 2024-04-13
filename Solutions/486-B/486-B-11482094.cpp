#include <bits/stdc++.h>
using namespace std;
typedef signed long long ll;

#undef _P
#define _P(...) (void)printf(__VA_ARGS__)
#define FOR(x,to) for(x=0;x<to;x++)

int M,N;
int A[101][101];
int B[101][101];
int C[101][101];
void solve() {
    int i,j,k,l,r,x,y; string s;    
    cin>>M>>N;
    FOR(y,M) FOR(x,N) A[y][x]=1;
    FOR(y,M) FOR(x,N) {
        cin>>B[y][x];
        if(B[y][x]==0) {
            FOR(i,N) A[y][i]=0;
            FOR(i,M) A[i][x]=0;
        }
    }
    FOR(y,M) FOR(x,N) {
        FOR(i,N) C[y][x] |= A[y][i];
        FOR(i,M) C[y][x] |= A[i][x];
        if(B[y][x]!=C[y][x]) return _P("NO\n");
    }
    _P("YES\n");
    FOR(y,M) {
        FOR(x,N) _P("%d ",A[y][x]);
        _P("\n");
    }
}
int main(void)
{
  solve();
}