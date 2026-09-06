#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define dd double
#define enx "\n"

void solve(){

    multiset<ll> s;
    multiset<ll> s2;

    ll f;cin >> f;
    if(f==0 || f==-1)return;

    s.insert(f);

    ll x;
    while(cin >> x && x!=0){

        if(x!=-1){
            if(s.empty() || x<=*s.rbegin())
                s.insert(x);
            else
                s2.insert(x);
            continue;
        }

        while(s.size()>s2.size()+1){
            auto it=s.rbegin();
            ll val=*it;
            s2.insert(val);
            s.erase(s.find(val));
        }

        while(s2.size()>s.size()){
            auto it=s2.begin();
            ll val=*it;
            s.insert(val);
            s2.erase(s2.find(val));
        }

        if(s.size()>s2.size()){
            auto it=s.rbegin();
            ll val=*it;
            cout<<val<<enx;
            s.erase(s.find(val));
        }else{
            auto x=s.rbegin();
            auto y=s2.begin();

            if(*x<=*y){
                ll val=*x;
                cout<<val<<enx;
                s.erase(s.find(val));
            }else{
                ll val=*y;
                cout<<val<<enx;
                s2.erase(s2.find(val));
            }
        }
    }
}

int main(){

    ios::sync_with_stdio(0);cin.tie(0);

    int t;cin>>t;

    
    while(t--){
        solve();
    }

    return 0;
}