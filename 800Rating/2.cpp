#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
      int x;
      cin>>x; //number of stations
      int k;
      cin>>k; // range of the road
       
     vector<long long> arr;
     arr.push_back(0);
     for(int i=0;i<x; i++){
      long long point;
      cin>>point;
      arr.push_back(point);
     }
     arr.push_back(k);
   

     long long distance = INT_MIN;
     int n = arr.size();
     for(int i=1; i<n; i++){
        if ( i == n-1) {
            distance = max(distance, 2*(arr[i]-arr[i-1]));
        } else {
            distance = max(distance, arr[i] - arr[i-1]);
        }
     }
      
    cout<<distance<<endl;

    }
    return 0;
}
