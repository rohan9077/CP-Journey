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
    
    int n;cin >> n;

    map<int,int> mp;
    int ans=0;
    
    while(n--){
        ll x;cin >> x;

        if(mp.find(x) != mp.end()){
            continue;
        }else {
            mp[x]=0;
            ans++;
        }

    }


    cout << ans ;
    
    return 0;
}