#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

long long giaithua(int n) {
	long long ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= i;
	}
	return ans;
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, b, t, c;
		cin >> n >> b >> t >> c;
		long long ans = 0;
		for (int i = b; i <= n; i++) {
			for (int j = t; j <= n; j++) {
				for (int k = c; k <= n; k++) {
					if (i + j + k == n) {
						ans += giaithua(n) / (giaithua(i) * giaithua(j) * giaithua(k));
					}
				}
			}
		}
		cout << ans << endl;
	}
}
