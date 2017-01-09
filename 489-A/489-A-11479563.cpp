#include <bits/stdc++.h>

#define PB push_back
#define SZ(c) int((c).size())
using namespace std;
typedef long long ll;

int N;
int A[3100];

int main(){
   ios_base::sync_with_stdio(0);
   cin >> N;
   for(int I=0; I<N; I++){
      cin >> A[I];
   }
   cout << N << endl;
   for(int I=0; I<N; I++){
      int K = min_element(A+I, A+N)-A;
      swap(A[I], A[K]);
      cout << I << " " << K << endl;
   }
}