/*     AUTHOR :Malik Istiak  Ahamed Rohan
       Problem Name:
       Problem Platform:
       Logic :
       Problem  Link :
       Github : rohan9077/CP-Journey
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define enx "\n"

int main(){

    ios::sync_with_stdio(0);cin.tie(0);
    
     int t;cin >> t;

     while(t--){
        ll n;cin >> n;
    vector<ll> arr(n);
    for(ll i=0;i<n;i++){
        cin >> arr[i];
    } 

    sort(arr.begin(),arr.end());

    ll tt=0;
    for(ll i=0;i<n;){
        ll mx=max(arr[i],arr[i+1]);
        tt+=mx;

        i+=2;
    }

    cout << tt << enx;
     }
    
    return 0;
}