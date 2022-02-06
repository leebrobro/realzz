#include<vector>
#include<cstdio>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
vector < vector<int>> a(10001);
bool check[10001];
stack<int> s;
queue<int> q;
void dfs(int node) {

	check[node] = true;

	for (int i = 0; i < a[node].size();i++) {
		if (check[a[node][i]] == false)
			dfs(a[node][i]);
	}

}
/* void bfs(int node) {

	memset(check, false, sizeof(check));
	check[node] = true;
	q.push(node);

	while(!q.empty()) {
		int node = q.front();
		q.pop();
		printf("%d", node);
		for (int i= 0; i < a[node].size(); i++) {
			int next = a[node][i];
			if (check[next] == false) {
				check[next] = true;
				q.push(next);
			}
		}
	}
} */

int main() {
	int count = 0;
	int n, m, v;
	scanf("%d %d", &n, &m);





	for (int i = 0; i < m; i++)
	{
		int u, v;
		scanf("%d %d", &u, &v);
		a[u].push_back(v);
		a[v].push_back(u);

	}
	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}

	for (int i = 1; i < n + 1; i++) {
		if (check[i] == false) {

			dfs(i);
			count++;
		}

	}

	printf("%d", count);



}
