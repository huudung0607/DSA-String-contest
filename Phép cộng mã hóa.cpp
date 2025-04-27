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
string convert(int n) {
    if (n == 0) return "{}";
    string res = "{";
    for (int i = 0; i < n; i++) {
        if (i > 0) res += ",";
        res += convert(i);
    }
    res += "}";
    return res;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        char c;
        cin >> a >> c >> b;
        string s1 = convert(a);
        string s2 = convert(b);
        string result = convert(a + b);
        cout << s1 << "+" << s2 << "=" << result << endl;
    }
}
