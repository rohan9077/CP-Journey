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

         int n,m;
    cin >> n >> m ;

    int ans=0;

    map<int,int> mp;
    
    for(int i=0;i<n;i++){
        int x;cin >> x;
        mp[x]=0;

    }


    for(int i=0;i<m;i++){
        int y;cin >> y;

        if(mp.find(y) != mp.end()) {
            ans++;
        }
    }

    cout << ans << enx;
    }
    
    return 0;
}