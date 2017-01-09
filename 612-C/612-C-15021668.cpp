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

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
#define endl "\n"
#define fill2d(l, nm) fill_n(*l, sizeof l / sizeof **l, nm);
#define MOD 1000000007
using namespace std;

string s;
int n, ans;
stack<char>mystack;

int type(char s)
{
    if(s == '}' || s == ')' || s == ']' || s == '>')
        return 2;
    return 1;
}

bool same(char a, char b)
{
    if(a == '{' && b == '}')
        return true;
    else if(a == '[' && b == ']')
        return true;
        else if(a == '(' && b == ')')
            return true;
            else if(a == '<' && b == '>')
                return true;
    return false;
}

int main(){
//freopen("input.txt", "r", stdin);
ios_base::sync_with_stdio(0);

cin>>s;
n = s.size();
for(int i = 0; i < n; i++)
{
    if(type(s[i]) == 1)
    {
        mystack.push(s[i]);
        continue;
    }
    if(mystack.size() == 0)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    char xs = mystack.top();
    if(!same(xs, s[i]))
        ++ans;
    mystack.pop();
}
if(mystack.size())
    cout<<"Impossible"<<endl;
else
    cout<<ans<<endl;



return 0;}