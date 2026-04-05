#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        ll x,n;
        cin>>n>>x;

        vector<ll>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        auto ok=[&](int m){
            ll count=0;
            for(int i=0;i<n;i++){
                if(a[i]<=m){
                    count+=(m-a[i]);
                }
            }
            return count<=x;
        };

        ll l=1,r=2e9,mid,ans=0;
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