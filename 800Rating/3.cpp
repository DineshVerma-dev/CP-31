#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
     int x;
     cin>>x;
     string s;
     cin>>s;
     bool flag = false;
     int countofwater = 0;
     for(int i=0; i<x; i++){
      if(s[i] == '.' && i+1 < x && s[i+1] == '.' && i+2 < x && s[i+2] == '.' ){
        flag = true;
        break;
      }
     if(s[i] == '.'){
      countofwater++;
    }
     }
    if(flag == false) cout<<countofwater<<endl;
    else  cout<<2<<endl;

    }
    return 0;
}
