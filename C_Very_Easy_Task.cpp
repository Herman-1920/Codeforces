#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x,y;
    cin>>n>>x>>y;

    auto ok=[&](int time){

        if(time<min(x,y))return false;

        ll rt=time-min(x,y);
        ll a=1+ rt/x +rt/y;
        
        return a>=n;
    };
    
    ll l=1,r=2e9,ans,mid;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
    }

    cout<<ans;

}