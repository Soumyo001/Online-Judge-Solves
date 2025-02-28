#include<bits/stdc++.h>
using namespace std;
int main(){
   std::ios_base::sync_with_stdio(false);
   int t;
   cin>>t;
   for(int i=1;i<=t;i++){
    cout<<"Case "<<i<<":"<<endl;
    int n,q;
    cin>>n>>q;
    vector<list<int>> data;
    data.clear();
    data.resize(n);
    for(int k=1;k<=q;k++){
        string s;
        cin>>s;
        fflush(stdin);
        int i,j;
        if(s=="pop"){
            cin>>i;
            if(data[i-1].begin()!=data[i-1].end()){
                data[i-1].pop_back();
            }
        }
        else if(s=="push"){
            cin>>i>>j;
            data[i-1].push_back(j);
        }
        else if(s=="top"){
            cin>>i;
            if(data[i-1].begin()!=data[i-1].end()) cout<<data[i-1].back()<<endl;
            else cout<<"Empty!"<<endl;
        }
        else if(s=="put"){
            cin >>i>>j;
            data[i-1].splice(data[i-1].end(), data[j-1]);
        }
        else if(s=="show"){
            cin>>i;
            for(int j:data[i-1]) cout<<j<<" ";
        }
    }
   }
   return 0;
}
