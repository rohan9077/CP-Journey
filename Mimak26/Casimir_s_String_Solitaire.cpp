/*     AUTHOR :Malik Istiak  Ahamed Rohan
       Problem Name:Casimir's String Solitaire
       Problem Platform:
       Logic :
       Problem  Link :
       Github : rohan9077/CP-Journey
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define end "\n"

int main(){

    ios::sync_with_stdio(0);cin.tie(0);

    int n;
    cin >> n;
    while(n--){

        int ca=0;
        int cb=0;
        int cc=0;  
        string s;cin >> s;

        for(int i=0;i<s.size();i++){
            if(s[i]=='A') ca++;
            else if(s[i]=='B') cb++;
            else if(s[i]=='C') cc++;
            else {
                break ;
            }
        }


        if(ca+cc != cb) cout << "NO" << end;
        else cout << "YES" << end;

    }
    
     
    
    return 0;
}