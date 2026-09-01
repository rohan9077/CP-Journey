/*     AUTHOR :Malik Istiak  Ahamed Rohan
       Problem Name: Pairs of satisfying an equality
       Problem Platform:
       Logic:
       Problem Link:
       Github : rohan9077/CP-Journey
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define dd double
#define enx "\n"

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<ll> arr(n + 1);

        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        ll ans = 0;
        vector<int> roro;

        for(int i=1;i<=n;i++){

            if(arr[i]>=i){
                continue;
            }

            
            ans +=lower_bound(roro.begin(), roro.end(), arr[i])-roro.begin();
                   

            
            roro.push_back(i);
        }

        cout << ans << enx;
    }

    return 0;
}
