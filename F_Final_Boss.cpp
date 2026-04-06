#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        ll h,n;
        cin>>h>>n;

        vector<ll>a(n);
        for(int i=0;i<n;i++)cin>>a[i];

        vector<ll>c(n);
        for(int i=0;i<n;i++)cin>>c[i];

        auto ok=[&](ll m){
            ll count=0;
            for(int i=0;i<n;i++){
                ll hit=1+(m-1)/c[i];  // how many turns needed using c[i]
                count+= hit*a[i];     // total damage using total (hit) turn

                if(count>=h)return true;
            }

            return count>=h;
        };

        ll l=1,r=4e10,mid,ans=r;
        while(l<=r){
            mid=l+(r-l)/2;
            if(ok(mid)){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
        }
        cout<<ans<<"\n";
    }

}