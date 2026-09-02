/*     AUTHOR :Malik Istiak  Ahamed Rohan
       Problem Name:
       Problem Platform:
       Logic :
       Problem  Link :
       Github : rohan9077/CP-Journey
*/
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define ll long long int
#define dd double
#define enx "\n"

int main(){

    ios::sync_with_stdio(0);cin.tie(0);
    
    int n,m;cin >> n >> m;
    
    map<string,string> mp;

    while(m--){
        string x,y;
        cin >> x >> y;

        mp[x]=y;
    }


   
    while(n--){
        string s;
        cin >> s;
        cin.ignore();

        int i=s.size();
        string k=mp[s];
        int j=k.size();
        if( i <= j ){
            cout << s << " ";
        }else {
            cout << mp[s] << " ";
        }
    }

    
    return 0;
}