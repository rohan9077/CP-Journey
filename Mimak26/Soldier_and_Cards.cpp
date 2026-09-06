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
int cnt =0;
ll frog=1;

int  rohan=0;
vector<int> mist;
vector<int> mcc;

void solve(){

   int n;cin >> n;
   for(int i=n;i>=1;i--){
      frog*=i;
   }
   
   deque<int> p1;
   deque<int> p2;

   int x;cin >> x;
   for(int i=0;i<x;i++){
      int mal;cin >> mal;
      p1.push_back(mal);
   }


   int y;cin >> y;
   for(int i=0;i<y;i++){
       int bro;cin >> bro;
       p2.push_back(bro);
   }


  while(rohan==0){

    if(cnt>=frog){
        cout << -1 << enx;
        return;
    }

    if(p1.size()==0){
        rohan=2;
        continue;
    }

    if(p2.size()==0){
        rohan=1;
        continue;
    }

    int ro=p1.front();
    int ri=p2.front();

    if(ro>ri){
        p2.pop_front();
        p1.pop_front();

        p1.push_back(ri);
        p1.push_back(ro);

        mist.push_back(1);
        mcc.push_back(ro);
        cnt++;

    }else if(ri>ro){

        p1.pop_front();   // FIX
        p2.pop_front();

        p2.push_back(ro);
        p2.push_back(ri);

        mist.push_back(2);
        mcc.push_back(ri);
        cnt++;
    }
}


cout << cnt << " " << rohan << enx;



}

int main(){

    ios::sync_with_stdio(0);cin.tie(0);
    
     solve();
    
    return 0;
}