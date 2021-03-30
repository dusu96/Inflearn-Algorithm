#include<iostream>
#include<string>
#include<stack>
using namespace std;

// 괄호가 입력되면 올바른 괄호이면 "YES"
// 올바르지 않으면 "NO"

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (true) {
		string a;
		getline(cin, a);

		stack<char> s;
		bool isValid = true;

		for (auto c : a) {
			if (c == '(') {
				s.push(c);
			}
			else if (c == ')') {
				if (s.empty() || s.top() != '(') {
					isValid = false;
					break;
				}
				s.pop();
			}
		}
		if (!s.empty()) {
			isValid = false;
		}
		if (isValid) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}