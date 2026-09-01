/*     AUTHOR :Malik Istiak  Ahamed Rohan
       Problem Name:Problemsolving Log
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

    int t;cin >> t;

    while(t--){
         int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v(27,0);

    for(int i=0;i<n;i++){
        int n=s[i]-'A';
        
        n++;

        v[n]++;


    }

    int mal=0;

    for(int i=1;i<27;i++){
        if(v[i] >= i) {
            mal++;
        }
    }

    cout << mal << endl;

    
    }
     
    
    return 0;
}