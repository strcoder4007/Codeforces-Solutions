#include <bits/stdc++.h>
using namespace std;
char str[1111];
int mx, k, ba[27], sum;
int main(void)
{
  //freopen("/tmp/input.txt", "r", stdin);
  //ios_base::sync_with_stdio(false);
    int i, j;
    scanf("%s %d", str, &k);
    for(i=0; i<26; i++){
        scanf("%d", &ba[i]);
        if(mx<ba[i])mx=ba[i];
    }
    for(i=0; str[i]; i++)sum += (i+1)*ba[str[i]-'a'];
    for(j=0; j<k; j++, i++)sum += (i+1)*mx;
    printf("%d", sum);
    return 0;
}