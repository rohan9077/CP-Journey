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
    
    map<string,int> mp;
    
    int n;
    cin >> n;

    while(n--){
        string s;cin >> s;

        if(mp.find(s) != mp.end()){
              cout << "YES" << enx;
        }else {
            mp[s]=1;
            cout << "NO" << enx;
        }
    }
    
    return 0;
}