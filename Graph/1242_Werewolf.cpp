#include<bits/stdc++.h>
#include<iostream>
#include<sstream>
using namespace std;
#define VI  vector<int>
#define VB  vector<bool>
#define VVI vector< vector<int> >


void dfs(VVI adj,VB &marked,int v){
    marked[v] = true;
    //cout << v << " ";
    for(auto to: adj[v]){
        if(marked[to]==false)
            dfs(adj,marked,to);
    }
}


void read_graph(){
    int n;
    string s;
    cin >> n;
    VVI child(n),parent(n);
    getline(cin,s);

	while( getline(cin,s) ){
        if( s == "BLOOD") break;
        istringstream iss(s);
        int u,v;
		iss >> u >> v;
        u--,v--;
		parent[u].push_back(v);
		child[v].push_back(u);
	}
    vector<int> victims;
    int r;
    while( cin >> r ) victims.push_back( --r );
    vector<bool> marked(n,false);
    for(int vic: victims){
        dfs(parent,marked,vic);
        dfs(child,marked,vic);
    }
    bool empty_flag = true;
    for(int i=0;i<n;i++)
        if( marked[i] == false ){
            cout << i+1 << " ";
            empty_flag = false;
        }
    if(empty_flag) cout << "0"; 
    cout << endl;
}

int main() {
  read_graph();
  return 0;
}











