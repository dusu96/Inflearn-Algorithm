#include<iostream>
using namespace std;

int main() {
	int a, b, i, sum = 0;

	cin >> a >> b;

	for (i = a; i < b; i++) {
		sum += i;
		cout << i << " + ";
	}

	cout << b << " = "; // "=" 을 붙히기 위해 마지막 값을 따로 가져옴
	cout << sum + b;

	return 0;
}