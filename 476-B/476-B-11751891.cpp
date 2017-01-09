#include <bits/stdc++.h>
using namespace std;
char s1[11],s2[11];
int th(int start,int ques,int finish)
{
    if(ques==0&&start==finish)return 1;
    if(ques==0)return 0;
    int ret=0;
    ret+=th(start+1,ques-1,finish);
    ret+=th(start-1,ques-1,finish);
    return ret;
}
int main()
{
    scanf("%s%s",s1,s2);
    int len=strlen(s1);
    int pos=0,pos2=0,ques=0;
    for(int i=0;i<len;i++)if(s1[i]=='+')pos++;else pos--;
    for(int i=0;i<len;i++)if(s2[i]=='+')pos2++;
    else if(s2[i]=='-')pos2--;
    else ques++;
    if(ques==0&&pos==pos2)printf("%.9lf\n",1.0);
    else if(ques==0)printf("%.9lf\n",0.0);
    else
    {
        int x=th(pos,ques,pos2);
        int pow2=(int)1<<ques;
        double prob=(x*1.0)/(pow2*1.0);
        printf("%.9lf\n",prob);

    }
    return 0;
}