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
    
    int k;
    cin >>k;

    string s;
    cin >>s;

    int n=s.size();

    vector<long long> freq(n+1,0);

    long long ans=0;
    int sum=0;

    freq[0]=1;

    for (int i=0;i<n;i++) {
        if (s[i] =='1')
            sum++;

        if (sum >=k)
            ans +=freq[sum-k];

        freq[sum]++;
    }

    cout << ans << endl; 
    
    return 0;
}