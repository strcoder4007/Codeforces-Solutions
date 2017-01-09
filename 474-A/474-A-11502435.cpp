#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main(void)
{
	//ios_base::sync_with_stdio(0);
	int ary[3][10] = {{'q','w','e','r','t','y','u','i','o','p'}
	                , {'a','s','d','f','g','h','j','k','l',';'}
					, {'z','x','c','v','b','n','m',',','.','/'}};
    char s; string st;
	cin>>s;
	cin>>st;
	int limit = st.size();
	for(int k = 0; k < limit; k++)
	{
		for(int i = 0; i < 3; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				if(st[k] == ary[i][j])
				{
				if(s == 'R')
				  printf("%c", ary[i][j-1]);
				if(s == 'L')
				  printf("%c", ary[i][j+1]);
				}
			}
		}
	}
}