#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;

        auto ok=[&](int test){
            ll a=n*(m- m/(test+1));  
            return a>=k;
        };

        ll l=1,r=m,mid,ans;
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