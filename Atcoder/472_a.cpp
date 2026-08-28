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

int main(){

    ios::sync_with_stdio(0);cin.tie(0);
    
     string s;
     cin >> s;


     for(int i=0;i<s.size();i++){
        if(s[i] != 'A'){
            s[i]='.';
        }
     }


     cout << s ;
    
    return 0;
}