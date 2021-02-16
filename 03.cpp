#include<iostream>
using namespace std;

int main() {
	int n, i = 1, sum = 0;

	cin >> n;
	cout << i; // 모든 약수는 1을 포함

	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			cout << " + " << i;
			sum += i;
		}
	}

	cout << " = " << sum + 1;
	return 0;
}