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
    
    int t;
    cin >> t;

    while(t--){


         map< pair<int,int> ,int > mp;
    
    int n;
    cin >> n ;
    int molla=n;
    int kaua=0;


    while(n--){

        int x,y;
        cin >> x >> y;

        if(mp.find({y,x}) != mp.end()){
            if(mp[{y,x}] > 1 ){
                mp[{y,x}] --;
                kaua+=2;

            }else if(mp[{y,x}]==1) {
                kaua+=2;
                mp.erase({y,x});
            }

        }else {

            mp[{x,y}]++;
        }
    }


    if(kaua==molla) cout << "YES" << enx;
    else cout << "NO" << enx;
    
    }
    return 0;
}