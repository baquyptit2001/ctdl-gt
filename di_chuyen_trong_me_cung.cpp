#include<bits/stdc++.h>

using namespace std;

int a[15][15], n;
bool check = true;
char result[105];

void out(int index) {
	for (int i = 0; i < index; i++) {
		cout << result[i];
	}
	cout << ' ';
}

void Try(int i, int j, int index) {
	if (i == n - 1 and j == n - 1) {
		out(index);
		check = false;
		return;
	}
	if (i < n - 1 and a[i + 1][j] == 1) {
		result[index] = 'D';
		Try(i + 1, j, index + 1);
	}
	if (j < n - 1 and a[i][j + 1] == 1) {
		result[index] = 'R';
		Try(i, j + 1, index + 1);
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		check=true;
		cin >> n;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> a[i][j];
		if (a[0][0] == 0){
			cout << "-1" << endl;
			continue;
		}
		Try(0, 0, 0);
		if (check) {
			cout << "-1" << endl;
			continue;
		}
		cout << endl;
	}
	return 0;
}