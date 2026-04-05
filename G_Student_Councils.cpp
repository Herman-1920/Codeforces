#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k,n;cin>>k>>n;

    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    auto ok=[&](ll m){
        ll count=0;
        ll tt=m*k;     //total needed student
        for(int r=0;r<n;r++){
            count+=min(a[r],m);  //counting student from each group
        }
        return count>=tt;  
    };

    ll l=0,r=5e10,mid,ans;
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