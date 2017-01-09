#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#define MAXN 1005

using namespace std;

int main ()
{
    static int a[MAXN];
    int N;
    scanf("%d",&N);
    int i, j;
    for (i = 0; i < N; i++) scanf("%d",&(a[i]));
    sort(&(a[0]),&(a[N]));
    int res = 0;
    i = 0;
    while (i < N)
    {
        j = i+1;
        while ((j < N) && (a[j] == a[i])) j++;
        if (a[i] != 0)
        {
            if ((j-i) > 2)
            {
                printf("-1\n");
                return 0;
            }
            else if ((j-i) == 2) res++;
        }
        i = j;
    }
    printf("%d\n",res);
    return 0;
}