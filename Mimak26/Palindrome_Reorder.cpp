/*     AUTHOR :Malik Istiak  Ahamed Rohan
       Problem Name:Palindrome reader ... 
       Problem Platform:
       Logic : There can't be 2 odd number of character
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

    string s;cin >> s;
    ll n=s.size();
    char arr[n+1];

    vector<int> roro(27,0);;
    for(ll i=0;i<n;i++){
        int x=s[i]-'A';
        x++;
        roro[x]++;

    }

    int od_index=0;
    int rohan=-1;

    for(int i=1;i<27;i++){
        if(roro[i]%2!=0) {
            od_index++;
            if(od_index>1) break;
            rohan=i;
        }
    }

    ll mal=n-1;
    ll dal=0;
    if(od_index>1) cout << "NO SOLUTION" << end;
    else {
        for(int i=1;i<27;i++){
           if(i!=rohan){
               for(ll j=0;j<roro[i] / 2 ;j++){
                     arr[dal]='A' + i -1;
                     arr[mal]='A' + i -1;

                     mal--;
                     dal++;
                }
           }else {
                if(roro[i]==1){
                    int mid=n/2;
                    arr[mid]='A'+i -1 ;
                }else {

                    int seg=roro[i] / 2;

                    int l=(n/2)-seg;
                    int r=(n/2)+seg;
                    char dj='A'+i-1;
                    for(int i=l;i<=r;i++){
                        arr[i]=dj;
                    }

                }

           }
        }


        for(ll i=0;i<n;i++){
            cout << arr[i] ;
        }
    }
     
    
    return 0;
}