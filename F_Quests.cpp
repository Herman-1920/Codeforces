#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        ll n,c,d;
        cin>>n>>c>>d;

        vector<ll>a(n);
        for(ll i=0;i<n;i++)cin>>a[i];

        sort(a.rbegin(),a.rend());

        ll x=min(n,d);
        ll count=0;
        for(ll i=0;i<x;i++){
            count+=a[i];
        }
        if(count>=c){
            cout<<"Infinity\n";
            continue;
        }

        if(a[0]*d<c){
            cout<<"Impossible\n";
            continue;
        }

        auto ok=[&](ll m){
            ll count=0;
            ll cycle=m+1;

            for(ll i=0;i<d;i++){
                if(i%cycle<n)count+=a[i%cycle];
                if(count>=c)return true;
            }
            return count>=c;
        };

        ll l=0,r=d,ans,mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(ok(mid)){
                ans=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        cout<<ans<<"\n";
    }

}