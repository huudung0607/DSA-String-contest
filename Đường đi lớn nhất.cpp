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

string convert(string s) {
    string res = "";
    int ans = (4 - s.size() % 4) % 4;
    string tmp = string(ans, '0') + s;
    for (int i = 0; i < tmp.size(); i += 4) {
        string sub = tmp.substr(i, 4);
        int value = stoi(sub, nullptr, 2);
        res += "0123456789ABCDEF"[value];
    }
    while (res.size() > 1 && res[0] == '0') {
        res.erase(0, 1);
    }
    return res;
}
string a[505][505];
string F[505][505];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    F[1][1] = a[1][1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            F[i][j] = max(F[i][j - 1], F[i - 1][j]) + a[i][j];
        }
    }
    string res = convert(F[n][n]);
    cout << res << endl;
}
