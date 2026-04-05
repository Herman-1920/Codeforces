#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;

    ll nb,ns,nc;
    cin>>nb>>ns>>nc;

    ll pb,ps,pc;
    cin>>pb>>ps>>pc;

    ll ru;
    cin>>ru;

    ll needb=0,needs=0,needc=0;
    for(char c:s){
        if(c=='B')needb++;
        else if(c=='S')needs++;
        else if(c=='C')needc++;
    }

    auto ok=[&](ll m){
        ll exb=max(0LL, m*needb-nb);
        ll exs=max(0LL, m*needs-ns);
        ll exc=max(0LL, m*needc-nc);

        ll totalcost=exb*pb+exs*ps+exc*pc;

        return totalcost<=ru;
    };

    ll l=0,r=2e12,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }

    cout<<ans;

}