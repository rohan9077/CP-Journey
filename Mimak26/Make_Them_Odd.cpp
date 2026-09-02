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


         int n;
    cin >> n;

    set<int> mp;
    for(int i=0;i<n;i++){
        ll y;cin >> y;
        mp.insert(y);
    }

    int ans=0;



    // for(auto it : mp){
    //     cout << it << " ";
    // }
    // cout << enx;


    
    for(auto it=mp.rbegin();it != mp.rend();it++){      // theres two way --> one is rbegin diye str ... ans rend diye reverse access
                                                        
                                                        // another is   set<int,greater<int> > s;
                                                        // a desecding order set 
        ll x=*it;
        ll seg=x;
        
        if(x%2 != 0) continue;
        else {
            for(ll i=0;i<seg;i++){
                
               
                if(x%2 != 0) {
                    break;
                }else {
                    ans++;
                }

                x=x/2;

                 if(mp.find(x) != mp.end()){
                    mp.erase(x);
                }

                
            }
        }
    }

    
    cout << ans << enx;
    }
    
    return 0;
}