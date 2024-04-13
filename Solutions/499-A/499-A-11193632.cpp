#include<bits/stdc++.h>

using namespace std;

int main (void)
{
    int n, x, a, b;
    scanf("%d %d", &n, &x);
    int init = 1;
    int sum = 0;
    for(int i = 0; i < n; i++)
      {
            scanf("%d %d", &a, &b);
            sum += (a-init)%x;
            sum += b-a+1;
            init = b+1;
        }
    printf("%d", sum);
}