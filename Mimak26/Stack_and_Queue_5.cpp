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
    
    priority_queue<int> ro;

    int ror=1;
    while(ror==1){
        string s;
        cin >> s;
        
        if(s=="end"){
            ror=0;
            break;
        }
        

        if(s =="insert" ){
            ll x;
            cin >> x;
            ro.push(x);

        }else if(s=="extract" && ro.size()!=0 ){
            cout << ro.top() << enx;
            ro.pop();

        }
    } 
}

int main(){

    ios::sync_with_stdio(0);cin.tie(0);
    
     solve();
    
    return 0;
}