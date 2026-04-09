#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--){
        int n;cin>>n;

        vector<int>a(n),pos(n+1);

        for(int i=0;i<n;i++){
            cin>>a[i];
            pos[a[i]]=i;
        }
        bool ok=true;
        for(int i=1;i<n;i++){
            if(abs(pos[i]-pos[i+1])%2==0){
                ok=false;
                break;
            }
        }

        if(ok)cout<<"YES\n";
        else cout<<"NO\n";
    }

}