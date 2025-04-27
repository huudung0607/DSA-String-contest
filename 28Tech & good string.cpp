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
	string s;
	cin >> s;
	map<char, int> mp;
	for (auto x : s) {
		mp[x]++;
	}
	map<int, int>mp2;
	for (auto x : mp) {
		mp2[x.second]++;
	}
	if (mp2.size() == 1) {
		cout << "28tech";
	}
	else if (mp2.size() == 2) {
		auto it = mp2.begin();
		int a = it->first;
		it++;
		int b = it->first;
		if ((a == 1 && mp2[a] == 1) || (b == 1 && mp2[b] == 1)) {
			cout << "28tech";
		}
		else if (abs(a - b) == 1 && (mp2[a] == 1 || mp2[b] == 1)) {
			cout << "28tech";
		}
		else {
			cout << "29tech";
		}
	}
	else {
		cout << "29tech";
	}
}
