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

int main() {

    ios::sync_with_stdio(0);cin.tie(0);
    
    int t;cin >> t;
    
    
    while(t--){
        string s;cin >> s;
    int n=s.size();

    int cnt=0;

    int mal=0;
    int bro=1;
    
    int ro=1;
    while(ro==1){

        if(bro > n-1 && mal> n-1){
            cout << cnt << enx;
            ro=0;

        }else if(bro>n-1 && mal==n-1){
            if(s[mal]=='0') {
                cnt++;
                cout << cnt << enx;
                break;
            }else {
                cout << "INVALID" << enx;
                break;
            }

        }
         else if(s[mal] == '\\' && s[bro]=='\\'){
            cnt++;
            mal+=2;
            bro+=2;

        }else if(s[mal] == '\\' && s[bro]=='0'){
            
            cout << cnt << enx;
            break;
        }else if(s[mal]=='0' && s[bro]=='\\'){
            cnt++;
            mal++;
            bro++;
        }else {
            cnt++;
            mal++;
            bro++;
        }
    } 
    }
    
    return 0;
}