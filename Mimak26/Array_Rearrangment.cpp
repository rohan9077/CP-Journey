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
    
    int t;cin >> t;

    while(t--){
         int n,x;
    cin >> n >> x;
    
    vector<int> ar(n);
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }


    // sort(ar.begin(),ar.end());        --amr question pora ucit valo kore
    sort(arr.begin(),arr.end());

    reverse(arr.begin(),arr.end());           //-> IMP onee remmber



    bool cow=false;
    for(int i=0;i<n;i++){
        int mal=ar[i]+arr[i];

        if(mal>x) cow=true;
    }

    if(cow==false) cout << "Yes" << enx;
    else cout << "No" << enx;
    
    cin.ignore();
    }
    return 0;
}