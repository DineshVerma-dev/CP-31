#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
     long long  n;
     cin>>n;
    long long arr[n];
       for(int i = 0; i < n; i++) {
          cin >> arr[i];
       }
      map <long long, long long> frequency;
      for(int i=0; i<n ; i++){
        frequency[arr[i]] ++ ;
        }
        if(frequency.size() >=3) cout<<"No"<<endl;
        else {
            long long freq1 = frequency.begin()->second;
            long long freq2 = frequency.rbegin()->second;
            if(freq1 == freq2) cout<<"Yes"<<endl;
            else if(n%2 == 1 && abs(freq1-freq2) == 1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
       

    }
    return 0;
}