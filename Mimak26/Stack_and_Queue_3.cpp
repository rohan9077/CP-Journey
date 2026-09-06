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

     ll n,q;
     cin >> n >> q;

     map<int,priority_queue<int> >mp;


     //for smaller pop
     //map<int, priority_queue<int, vector<int>, greater<int>>> mp;

     while(q--){
        ll x;cin >> x;

        if(x==0){
            ll y,z;
            cin >> y >> z;

            mp[y].push(z);


        }else if(x==1){

            ll y;cin >> y;
            
            if(!mp[y].empty()){
                cout <<  mp[y].top() << enx;
            }

        }else {
            ll y;cin >> y ;

            if(!mp[y].empty()){
                 mp[y].pop();
            }
   
        }
     }

}

int main(){

    ios::sync_with_stdio(0);cin.tie(0);
    
     solve();
    
    return 0;
}