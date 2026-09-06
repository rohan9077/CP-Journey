/*     AUTHOR :Malik Istiak  Ahamed Rohan
       Problem Name:
       Problem Platform:
       Logic :              // Full concept of deque   //###@@  very imp 
       Problem  Link :
       Github : rohan9077/CP-Journey
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define enx "\n"

void solve(){
    ll x;cin >> x;

    deque<ll> roro;

    while(x--){
        ll y;cin >> y;

        if(y==0){
            ll a,b;
            cin >> a >> b;

            if(a==0) roro.push_front(b);
            else  roro.push_back(b);
        }else if(y==1){
            ll g;cin >> g;

             cout << roro[g] << enx;

        }else {
            ll mal;cin >> mal;

            if(mal==0){
                roro.pop_front();
            }else {
               roro.pop_back();
            }
        }


        
    }
    
}

int main(){

    ios::sync_with_stdio(0);cin.tie(0);
    
     
    solve();
    return 0;
}