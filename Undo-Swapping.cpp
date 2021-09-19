#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

bool usedx[100009];
bool usedy[100009];

vector<int>v[100009];
bool used[100009];
int dfs(int now){
	if(used[now])return 0;
	used[now]=1;
	int res=1;
	rep(i,v[now].size()){
		res += dfs(v[now][i]);
	}
	return res;
}

signed main(){
	int n,sum=0;
	cin>>n;
	int y[n],x[n];
	rep(i,n){
		cin>>x[i]>>y[i];
		if(usedx[x[i]] || usedy[y[i]]){
			cout<<-1<<endl;
			return 0;
		}
		usedx[x[i]]=1;
		usedy[y[i]]=1;
		v[x[i]].push_back(y[i]);
		v[y[i]].push_back(x[i]);
	}

	rep(i,n){
		if(!used[i+1]){
			sum += dfs(i+1)-1;
		}
	}


	cout<<sum<<endl;

}
