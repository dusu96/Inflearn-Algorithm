#include<iostream>
using namespace std;

// M�� ����� ���
int main() {
	int n, m, sum = 0;
	
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		if (i % m == 0) {
			sum = sum + i;
		}
	}

	cout << sum;
	return 0;
}