#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <iomanip>
#include <list>
#include <ctime>
#include <memory.h>
#include <bitset>
#include <climits>
#include <iostream>
#include <stdlib.h>

#define F first
#define S second
#define endl "\n"
#define mp make_pair
#define pb push_back
#define bs 1000000007
#define pi 3.141592653589793
#define y1 kjdfshnvoavaofobiopj
using namespace std;

long long fst, sec, power, start;
vector<long long>myvec;
bool found;
string s, hashed[110];

string to_str(long long number)
{
    string result;
    stringstream convert;
    convert<<number;
    result = convert.str();
    return result;
}

long long pw(long long a, long long b)
{
     if (b==0)return 1;
     if (b&1)return (a*pw(a,b-1))%bs;
     return pw(a*a%bs,b/2);
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);
cin.tie(0);

cin>>s;
for(long long i = 0; i < s.size(); i++)
	if(s[i] == ':')
		start = i;
for(long long i = 65; i <= 90; i++)
	hashed[i] = to_str(i-55);
for(long long j = 2; j <= 120; j++)
{
	power = 0, fst = 0, sec = 0;
	for(long long i = start-1; i+1; i--)
	{
		if(s[i] >= 65)
		{
			if(atoi(hashed[s[i]].c_str()) >= j)
			{
				fst = -1;
				break;
			}
			fst += atoi(hashed[s[i]].c_str())*pw(j, power);
		}
		else
		{
			if(s[i]-48 >= j)
			{
				fst = -1;
				break;
			}
			fst += (s[i]-48)*pw(j, power);
		}
		++power;
	}
	power = 0;
	for(long long i = s.size()-1; i > start; i--)
	{
		if(s[i] >= 65)
		{
			if(atoi(hashed[s[i]].c_str()) >= j)
			{
				sec = -1;
				break;
			}
			sec += atoi(hashed[s[i]].c_str())*pw(j, power);
		}
		else
		{
			if(s[i]-48 >= j)
			{
				sec = -1;
				break;
			}
			sec += (s[i]-48)*pw(j, power);
		}
		++power;
	}
	if(fst >= 0 && fst <= 23 && sec >= 0 && sec <= 59)
		myvec.pb(j);
}
if(myvec.size() == 0)
	cout<<0<<endl;
else if(myvec.size() > 70)
	cout<<-1<<endl;
else
{
	for(long long i = 0; i < myvec.size(); i++)
		cout<<myvec[i]<<" ";
	cout<<endl;
}

return 0;}