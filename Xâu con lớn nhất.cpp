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
int main() {
	string s;
	cin >> s;
	string res = "";
	char maxchar = '_';
	for (int i = s.size() - 1; i >= 0; i--) {
		if (s[i] >= maxchar) {
			maxchar = s[i];
			res += s[i];
		}
	}
	sort(res.begin(), res.end(), greater<char>());
	cout << res;
}
