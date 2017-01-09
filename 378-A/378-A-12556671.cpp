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
#include <list>
#include <ctime>
#include <memory.h>

#define F first
#define S second
#define mp make_pair
#define pb push_back
#define pi 3.141592653589793
typedef long long LL;

using namespace std;


int main()
{
  //freopen("input.txt","r", stdin);
  ios_base::sync_with_stdio(false);

  int a, b;

    cin >> a >> b;

    int w[3] = {0,0,0};

    for(int i = 1; i <= 6; i++)
    {
        if (abs(i-a)==abs(i-b)) w[2]++;
        else if(abs(i-a)<abs(i-b)) w[0]++;
             else w[1]++;
           }

    cout << w[0] << " " << w[2] << " " << w[1] << endl;

  return 0;
}