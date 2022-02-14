#include<cstdio>
#include<queue>
#include<iostream>
using namespace std;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int list[101][101];
int check[101][101];

void bfs(int x, int y, int n, int m) {
	queue<pair<int, int>> q;
	int changedx, changedy;


	q.push(make_pair(x, y));
	int presentx, presenty;
	check[x][y] = true;
	list[x][y] = 1;
	while (!q.empty()) {

		presentx = q.front().first;
		presenty = q.front().second;
		q.pop();


		for (int k = 0; k < 4; k++) {

			changedx = presentx + dx[k];
			changedy = presenty + dy[k];

			if (changedx >= 0 && changedx < n && changedy >= 0 && changedy < m)
			{
				if (check[changedx][changedy] == false && list[changedx][changedy] == 1) {
					q.push(make_pair(changedx, changedy));
					list[changedx][changedy] = list[presentx][presenty] + 1;
					check[changedx][changedy] = true;

				}

			}





		}



	}



}
int main() {

	int row, col, num;
	scanf("%d %d", &row, &col);
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++) {

			scanf("%1d", &list[i][j]);

		}
	}
	int n = row;
	int m = col;

	bfs(0, 0, n, m);


	printf("%d ", list[n - 1][m - 1]);





}