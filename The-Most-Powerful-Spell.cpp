#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;
const int inf = 1e9;
string maxstr = string(500, 'z');

struct info{
	int pos;
	string str;
	info(int pos, string str):pos(pos),str(str){}
	info(){}
	bool operator<(const info &a) const{
		return (str.length()==a.str.length())? str>a.str: str.length()>a.str.length();
	}
};

int main(){
	while(1){
		int n,a,s,g;
		cin >> n >> a >> s >> g;
		if(n==0) break;
		
		vector<vector<pair<int, string> > > adj(n);
		for(int i=0; i<a; i++){
			int x,y;
			string lab;
			cin >> x >> y >> lab;
			adj[x].push_back(make_pair(y, lab));
		}
		
		priority_queue<info> wait;
		wait.push(info(s, ""));
		vector<vector<string> > minstr(n, vector<string>(6*2*n, maxstr));
		minstr[s][0] = "";
		while(!wait.empty()){
			int pos = wait.top().pos;
			string str = wait.top().str;
			int len = str.length();
			wait.pop();
			if(str > minstr[pos][len]) continue;
			
			for(int i=0; i<(int)adj[pos].size(); i++){
				int npos = adj[pos][i].first;
				string nstr = str +adj[pos][i].second;
				int nlen = nstr.length();
				if(nlen < 6*2*n && nstr < minstr[npos][nlen]){
					minstr[npos][nlen] = nstr;
					wait.push(info(npos, nstr));
				}
			}
		}
		
		string ansf = maxstr;
		for(int i=0; i<=(n-1)*6; i++){
			ansf = min(ansf, minstr[g][i]);
		}
		string anss = ansf;
		for(int i=(n-1)*6+1; i<6*2*n; i++){
			anss = min(anss, minstr[g][i]);
		}
		if(ansf != anss || ansf == maxstr){
			cout << "NO" << endl;
		}else{
			cout << ansf << endl;
		}
	}
	return 0;
}