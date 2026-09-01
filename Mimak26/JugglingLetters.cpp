/*     AUTHOR :Malik Istiak  Ahamed Rohan
       Problem Name:Juggling Letters

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


    int t;cin >> t;


    while(t--){
         int n;cin >> n;
    vector<string> roro(n);


    vector<int> arr(27,0);

    for(int i=0;i<n;i++){
        cin >> roro[i];

        for(int j=0;j<roro[i].size();j++){
            int g=roro[i][j]-'a';
            g++;
            arr[g]++;
        }

    }


    

    int mal=0;
    for(int i=1;i<27;i++){
        if(arr[i] != 0   && arr[i]%n !=0 ){
           mal=1;
           break;
        }
    }


    if(mal==0) cout << "YES" << endl;
    else cout << "NO" << end;


    
    }
     
    
    return 0;
}