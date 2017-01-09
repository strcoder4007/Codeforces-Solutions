#include<bits/stdc++.h>

using namespace std;

int main()
{ 
  map<string, string> replace;
  int n,m;
  cin >> n >> m;
  string temp1, temp2;
  
  for(int i=0; i<m; i++){
    cin >> temp1 >> temp2;
    replace[temp1]=temp2;
  }
  
  for(int i=0; i<n; i++){
    cin >> temp1;
    if(replace[temp1].length()<temp1.length()){
      cout << replace[temp1] + " ";
    }
    else{
      cout << temp1 + " ";
    }
  }
}