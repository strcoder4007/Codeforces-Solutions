#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <map>
#include <deque>
#include <bitset>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <algorithm>
#include <iomanip>
#include <cctype>
#include <ctime>
using namespace std;

#define Inf 0x3f3f3f3f
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define PI pair<int, int>

int N, M, Ans, Used[15][15];
char Mat[15][15];

int main()
{
   // freopen("a.in", "r", stdin);
   // freopen("a.out", "w", stdout);

    scanf("%i %i\n", &N, &M);
    for(int i = 1; i <= N; ++ i)
    {
        gets(Mat[i] + 1);
        bool OK = 1;
        for(int j = 1; j <= M; ++ j)
            if(Mat[i][j] == 'S')
                OK = 0;
        if(OK)
            for(int j = 1; j <= M; ++ j)
                Used[i][j] = 1;
    }
    for(int i = 1; i <= M; ++ i)
    {
        bool OK = 1;
        for(int j = 1; j <= N; ++ j)
            if(Mat[j][i] == 'S')
                OK = 0;
        if(OK)
            for(int j = 1; j <= N; ++ j)
                Used[j][i] = 1;
    }

    for(int i = 1; i <= N; ++ i)
        for(int j = 1; j <= M; ++ j)
            Ans += Used[i][j];
    printf("%i\n", Ans);
    return 0;
}