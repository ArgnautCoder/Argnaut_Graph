#include<bits/stdc++.h>
using namespace std;

bool checkbfs(int start,int end,vector<int> a[],vector<int> &vis){
	queue<pair<int,int>> qt;
	vis[start]=1;
	qt.push({start,-1});
	while (!qt.empty())
	{
		int node=qt.front().first;
		int par=qt.front().second;
		qt.pop();
		for (int i = 0; i < a[node].size(); i++)
		{
			if (vis[a[node][i]]==0)
			{
				qt.push({a[node][i],node});
				vis[a[node][i]]=1;
			}else if(a[node][i]!=par){
				return true;
			}
			
		}
		
	}
	return false;
}
bool bfs(vector<int> a[],int n){
	vector<int> vis(n,0);
	for (int i = 1; i <= n; i++)
	{
		if(vis[i]==0){
			if(checkbfs(i,n,a,vis)){
				return true;
			}
		}
	}
	return false;
}

int main(){
	int n,e;
	cin>>n>>e;
	vector<int> vt[n];
	for (int i = 0; i < e; i++)
	{
		int con1,con2;
		cin>>con1>>con2;
		vt[con1].push_back(con2);
		vt[con2].push_back(con1);

	}
	cout<<bfs(vt,n);
}
