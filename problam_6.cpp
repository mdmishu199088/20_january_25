#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            cin>>v[i];
        }
        int l=1,r=n,val=1,mx=n;
        bool flag=false,flog=false;
        while( l<r){
            // if(v[l]!=val && v[r]!=mx) break;
            // if(v[l]!=mx && v[r]!=val)break;
            if(flag && flog) break;
            if(v[l]==val){
                l++;
                val++;
                flag=false;
            }
            else if(v[l]==mx){
                l++;
                mx--;
                flag=false;
            }
            else{
                flag=true;
            }
            if(v[r]==mx){
                mx--;
                r--;
                flog=false;
            }
            else if(v[r]==val){
                r--;
                val++;
                flog=false;
            }
            else{
                flog=true;
            }
        }
        if(l>=r)cout<<-1<<endl;
        else{
              cout<<l<<" "<<r<<endl;
        }
    }
    return 0;
}
