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
    
    map<char ,int > mp;
   
    int mal=0;
    while(mal==0){
        char x;
        cin >> x;

        if(x=='}') {
            mal=1;
            continue;
        }

        if(x!=',' && x!=' ' && x!='{'){
            if(mp.find(x) != mp.end()){
                mp[x]++;
            }else {
                mp[x]++;
            }
        }else {
            continue;
        }


    }

    int xx=0;

    for(auto it=mp.begin();it!=mp.end();it++){
         xx++;
    }

    cout << xx << enx;
    
    return 0;
}