#include<iostream>

#include<cstring>

using namespace std;
int main() {
	int t;
	cin >> t;
	while (t > 0) {
		string s;
		int n, i, k;
		cin >> n >> k;
		for (i = 0; i < n; i++) s[i] = 'A';
		for (i = n - 1; i >= 0; i--) {
			if (s[i] == 'A') {
				s[i] = 'B';
				for (int j = i + 1; j < n; j++) {
					s[j] = 'A';
				}
				int count = 1;
				for (int j = 0; j < n - 1; j++) {
					if (s[j] == 'A' && s[j] == s[j + 1]) count++;
				}
				if (count == k) {
					for (int j = 0; j < n; j++) {
						cout << s[j];
					}
					cout << endl;
				}
				i = n;
			}
		}
		t--;
	}
	return 0;
}