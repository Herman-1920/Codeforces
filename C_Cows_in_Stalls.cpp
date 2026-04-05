#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    auto ok=[&](ll mid){
        int count=1;
        int last=a[0];
        for(int i=1;i<n;i++){
            if((a[i]-last)>=mid){
                count++;
                last=a[i];
            }
        }
        return count>=k;
    };

    ll l=0,r=1e9,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(ok(mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<"\n";

}