#include<iostream>
#include<string>
#include<map>
#include<list>
#include<vector>
using namespace std;


void dfsHelper(map<int,list<int> > adjList, int user, int&ans,map<int,bool>&visited){
	ans++;
	for(int next: adjList[user]){
		if(visited[next]==false){
			visited[next]=true;
			dfsHelper(adjList,next,ans,visited);
		}
	}
	return ;

}

int	dfs(map<int,list<int> > adjList,int user){
	map<int,bool>visited;
	for(auto node:adjList){
		visited[node.first]=false;
	}
	visited[user]=true;
	int ans=1;
	for(int next:adjList[user]){
		if(visited[next]==false){
			//cout<<user<<ans<<endl;
			visited[next]=true;
			dfsHelper(adjList,next,ans,visited);
		}

	}
	return ans;

}




int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;

	map<int, list<int> > adjList;

	vector<int> v;
	for(int i=0;i<m;i++){
		int k;
		cin>>k;
		for(int j=0;j<k;j++){
			int data;
			cin>>data;
			v.push_back(data);
		}
		int a,b;
		for(int j=1;j<k;j++){

				a=v[j];
				b=v[0];
				adjList[a].push_back(b);
				adjList[b].push_back(a);

		}
		v.clear();
	}



	for(int i=1;i<=n;i++){
		int user=i;
		int ans=dfs(adjList,user);
		cout<<ans<<" ";

	}


	return 0;
}
