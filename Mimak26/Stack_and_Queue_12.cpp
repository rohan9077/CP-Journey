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

void solve(){

    int n,k;cin >> n >> k;
   
    vector<ll> ro;
    for(int i =0;i<n;i++){
          int x;cin >> x;
          ro.push_back(x);
    }
    
    deque<ll> mal;


    for(int i=0;i<n;i++){
        if(!mal.empty() && mal.front() <=i-k ) mal.pop_front();
        while(!mal.empty() && ro[mal.back()]<ro[i]) mal.pop_back();
        mal.push_back(i);
        if(i>=k-1) cout << ro[mal.front()] << " ";
    } 


    cout << enx;



   
    
}

int main(){

    ios::sync_with_stdio(0);cin.tie(0);
    
     int t;cin >> t;
     while(t--){
        solve();
     }
    
    return 0;
}