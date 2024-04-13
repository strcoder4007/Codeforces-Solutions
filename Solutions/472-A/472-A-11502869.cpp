#include <bits/stdc++.h>
#define ms1(xs) memset((xs), '#', sizeof(xs))
using namespace std;
typedef unsigned long long ll;

bool isprime(int n)
{
    int flag = 0;
  for(int i=2;i<=n/2;++i)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
      return true;
  else
      return false;
}

int main(void)
{
    ios_base::sync_with_stdio(0);
    int num1, num2;
    int k;
    cin>>k;
    if(k%2 == 0)
    {
        num1 = k/2;
        num2 = k/2;
    }
    else
    {

        num1 = k/2;
        num2 = k/2+1;}
        while(true)
        {
            if(isprime(num1) || isprime(num2))
                {
                    //cout<<num1<<" "<<num2<<endl;
                    num1 += 1;
                    num2 -= 1;
                }
            if(!isprime(num1) && !isprime(num2))
                {cout<<num1<<" "<<num2<<endl;return 0;}
        }

}