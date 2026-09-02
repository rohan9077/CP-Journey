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

     set<int> mp;
    
    while(k--){
        int x,y;
        cin >> x ;
        cin >> y;

       
        if(x==1){
            mp.insert(y);

        }else {

            bool ro=false;
            for(auto it=mp.lower_bound(y);it!= mp.end();it++){
                int mal=*it;
                if(mal > y || mal==y) {
                    cout << mal << enx;
                    ro=true;
                    break;
                }
            }

            if(ro==false) cout << -1 << enx;


        }



        // for(auto it=mp.begin(); it != mp.end() ;it++){
        //      cout << *it << enx;
        // }
    }
}

int main(){

    ios::sync_with_stdio(0);cin.tie(0);
    
    solve();
  

    return 0;
}