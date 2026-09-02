// /*     AUTHOR :Malik Istiak  Ahamed Rohan
//        Problem Name:
//        Problem Platform:
//        Logic :
//        Problem  Link :
//        Github : rohan9077/CP-Journey
// */
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define dd double
// #define enx "\n"

// int main(){

//     ios::sync_with_stdio(0);cin.tie(0);
    
//     int n,k;
//     cin >> n >> k;
    
//     map<int,int> mp;
    
//     for(int i=0;i<n;i++){
//         int x;cin >> x;
//         mp[x]=0;
//     }


//     int ans=0;
//     for(auto it=mp.begin();it != mp.end() ;it++){
//           if(mp.find(it->first +k) != mp.end()){
//               ans++;
//           }

//     }

//     cout << ans;


    
//     return 0;
// }











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
    
    int n,k;
    cin >> n >> k;
    
    

    set<int> s;
    for(int i=0;i<n;i++){
        int x;cin >> x;
        s.insert(x);
    }


    int ans=0;
    for(auto it=s.begin();it!= s.end() ;it++){
         if(s.find(*it+k) != s.end()){
            ans++;
         }
    }


    cout << ans;
    
    return 0;
}