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

int main()
{
	int t;
	cin >> t;
	while (t--) {
		string s; cin >> s;
		int cnt = 0;
		for (int i = 0; i < s.size(); i++) {
			int cnt8 = 0, cnt3 = 0;
			for (int j = i; j < s.size(); j++) {
				int num = s[j] - '0';
				cnt8 = (cnt8 * 10 + num) % 8;
				cnt3 = (cnt3 + num) % 3;
				if (cnt8 == 0 && cnt3 != 0) {
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
}
