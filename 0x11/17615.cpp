#include <stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	string s;
	cin >> n;
	cin >> s;
	int cnt1 = 0;
	for (int i = s.length() - 1; i > 0; i--) {
		if (s[i] == 'R') {
			if (s[i] != s[i - 1]) {
				cnt1++;
				for (int j = i - 1; j > 0; j--) {
					if (s[j] == s[j - 1]) {
						cnt1++;
					}
					else {
						i = j;
						break;
					}
				}

			}
		}
	}
	int cnt2 = 0;
	for (int i = s.length() - 1; i > 0; i--) {
		if (s[i] == 'B') {
			if (s[i] != s[i - 1]) {
				cnt2++;
				for (int j = i - 1; j > 0; j--) {
					if (s[j] == s[j - 1]) {
						cnt2++;
					}
					else {
						i = j;
						break;
					}
				}

			}
		}
	}
	reverse(s.begin(), s.end());

	int cnt3 = 0;
	for (int i = s.length() - 1; i > 0; i--) {
		if (s[i] == 'R') {
			if (s[i] != s[i - 1]) {
				cnt3++;
				for (int j = i - 1; j > 0; j--) {
					if (s[j] == s[j - 1]) {
						cnt3++;
					}
					else {
						i = j;
						break;
					}
				}

			}
		}
	}
	int cnt4 = 0;
	for (int i = s.length() - 1; i > 0; i--) {
		if (s[i] == 'B') {
			if (s[i] != s[i - 1]) {
				cnt4++;
				for (int j = i - 1; j > 0; j--) {
					if (s[j] == s[j - 1]) {
						cnt4++;
					}
					else {
						i = j;
						break;
					}
				}

			}
		}
	}
	cout << min({ cnt1,cnt2,cnt3,cnt4 });

	return 0;
}
