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
	int t; cin >> t;
	vector<string> v;
	for (int i = 0; i < t; i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());
	bool found = true;
	for (int i = 0; i < t - 1; i++) {
		if (v[i + 1].substr(0, v[i].size()) == v[i]) {
			found = false;
			break;
		}
	}
	if (found) cout << "28tech";
	else cout << "29tech";
}
