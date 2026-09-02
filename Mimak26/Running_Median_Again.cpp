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

    int roro=0;
    set<int> s;
    ll x;
    while(cin >> x  && x != 0){
         
        if(x==0){
            break;
        }else if(x == -1){
               int n=s.size();
               

               if(n%2 != 0){
                   n=n/2;
                   auto it=s.begin();
                   for(int i=1;i<=n;i++){
                         it++;
                   }

                   cout << *it << enx;

                   s.erase(*it);
               }else if(n==0){

               }else {
                    n=n/2;
                    auto it=s.begin();
                    for(int i=1;i<n;i++){
                         it++;
                    }

                    int mal=*it;
                    it++;
                    int bro=*it;

                    if(bro>=mal){
                        cout << mal << enx;
                        s.erase(mal);
                    }else {
                         cout << bro << enx;
                         s.erase(bro);
                    }

               }

        }else {

            s.insert(x);

        }
    }


    // for( auto it : s){
    //     cout << it << " ";
    // }

    
}

int main(){

    ios::sync_with_stdio(0);cin.tie(0);
    
     int t;cin >> t;

     while(t--){
         solve();
     }
    
    return 0;
}