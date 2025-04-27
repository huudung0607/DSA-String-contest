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
string convert1(int n) {
    if (n == 0) return "()"; 
    string result = "(";
    for (int i = 0; i < n; i++) {
        if (i > 0) result += ",";
        result += convert1(i);
    }
    result += ")";
    return result;
}
int convert2(string s) {
    if (s == "()") return 0; 
    int l = 0, r = 0;
    for (char c : s) {
        if (c == '(') l++;
        if (c == ')') l--;
        if (l == 1 && c == ',') r++;
    }
    return r + 1; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2; 
        int num1 = convert2(s1); 
        int num2 = convert2(s2); 
        int sum = num1 + num2;
        cout << convert1(sum) << endl; 
    }
}
