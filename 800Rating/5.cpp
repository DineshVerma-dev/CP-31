#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
     int n;
     cin>>n;
    
     long long s[n];
     for(int i = 0; i < n; i++){
        cin>>s[i];
     }
 
     
     if(s[0] == 1){
        cout<<"YES"<<endl;
     } else cout<<"NO"<<endl;

    }
    return 0;
}
