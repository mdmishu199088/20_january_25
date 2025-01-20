#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;cin>>t;
    set<pair<int,int> >s,p;
    int x=1;
    vector<int>v;
    while(t--){
        int type;cin>>type;
        if(type==1){
            int money;cin>>money;
            s.insert(make_pair(x,money));
            p.insert(make_pair(-money,x));
            x++;
        }
        else if(type==2){
            auto it=s.begin();
            int money=it->second;int cos=it->first;
            v.push_back(cos);
            s.erase(it);
            p.erase(make_pair(-money,cos));
        }
        else if(type==3){
            auto it=p.begin();
            int cos=it->second;int money=-it->first;
            v.push_back(cos);
            p.erase(it);
            s.erase(make_pair(cos,money));
        }
    }
    for(auto m:v){
        cout<<m<<" ";
    }
    return 0;
}
