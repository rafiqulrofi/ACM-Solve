#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#include <assert.h>
using namespace std;

int ncc(vector <vector <int> >& B,vector <bool>& V,int u) {
    queue<int> Q;
    int c=0;
    Q.push(u);
    V[u]=1;
    c++;
    while(!Q.empty()){
        int t=Q.front();Q.pop();

        for(int i=0;i<B[t].size();i++){
            if(V[B[t][i]]!=1) {
                V[B[t][i]]=1;
                Q.push(B[t][i]);
                c++;
            }
        }
    }

    return c;
}

int main() {
  int N,M,u,v;
  long long res=0;
  cin>>N>>M;
    vector <bool> V(N,0);
    vector <vector <int> > B(N);
    for(int i=0;i<M;i++) {
        cin>>u>>v;
        B[u].push_back(v);
        B[v].push_back(u);
    }

    map <long long,long long> Z;
    vector <pair<long long,long long> > C;
    for(int i=0;i<N;i++) {
        if(V[i]!=1) {
            int m=ncc(B,V,i);
            if(m==N) {cout<<0<<endl;exit(0);}
            else Z[m]++;

        }
    }

    for(map<long long,long long>::iterator it=Z.begin();it!=Z.end();it++) C.push_back(make_pair(it->first,it->second));

    for(int i=0;i<C.size();i++) {

      res+=(C[i].second*(C[i].second-1)*C[i].first*C[i].first)/2;
    }

    for(int i=0;i<C.size();i++) {
      for(int j=i+1;j<C.size();j++) res+=(C[i].first*C[i].second*C[j].first*C[j].second);
    }
    cout<<res<<endl;
    return 0;
}
