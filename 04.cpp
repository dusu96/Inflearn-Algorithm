#include<iostream>
using namespace std;

int main() {
	int n, m, i;
	int min = 2147000000, max = -2147000000;

	cin >> n;

	for (i = 1; i <= n; i++) {
		cin >> m; // n���� �ڿ��� �Է�

		if (m > max) {
			max = m;
		} // ���� ū ��

		if (m < min) {
			min = m;
		} // ���� ���� ��
	}

	cout << max - min;
	return 0;
}