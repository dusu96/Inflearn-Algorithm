#include<iostream>
using namespace std;

int main() {
	int n, m, i;
	int min = 2147000000, max = -2147000000;

	cin >> n;

	for (i = 1; i <= n; i++) {
		cin >> m; // n개의 자연수 입력

		if (m > max) {
			max = m;
		} // 가장 큰 수

		if (m < min) {
			min = m;
		} // 가장 작은 수
	}

	cout << max - min;
	return 0;
}