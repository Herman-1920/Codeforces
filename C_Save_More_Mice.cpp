#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;

        vector<ll>a(k);
        for(int i=0;i<k;i++)cin>>a[i];
        sort(a.rbegin(),a.rend());

        auto ok=[&](ll m){
            ll count=0;
            for(int i=0;i<m;i++){
                count+=n-a[i];
            }
            return count<n;
        };

        ll l=0,r=k,mid,ans=0;
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