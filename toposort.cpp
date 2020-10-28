//topological sort
#include <bits/stdc++.h>

using namespace std;

int main(){
while(1){
int n,m;
cin>>n>>m;
if(n==0 && m==0)
break;
vector<vector<int>>pr(m,vector<int>(2));
for(int i=0;i<m;i++){
    for(int j=0;j<2;j++){
    int a  ;
    cin>>a;

        pr[i][j]=a-1;
    }
}

map<int,vector<int>>mp;
vector<int>degree(n);
for(int i=0;i<m;i++) mp[pr[i][0]].push_back(pr[i][1]);

for(auto x: mp){
    for(auto y: x.second){
        degree[y]++;
    }
}
//for(int i=0;i<degree.size();i++) cout<<degree[i];
cout<<endl;
queue<int>q;
for(int i=0;i<n;i++){ if(degree[i]==0) q.push(i);}
vector<int>res;
while(!q.empty()){
    int node = q.front();
    q.pop();
    res.push_back(node+1);
    for(auto it: mp[node]){
        degree[it]--;
        //cout<<it<<" ";
        if(degree[it]==0)
        q.push(it);
    }
}
if(res.size()!=n){
cout<<0;
}
for(int i=0;i<n;i++){
    cout<<res[i]<<" ";
}
cout<<endl;
}
}
