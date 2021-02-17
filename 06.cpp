#include<iostream>
using namespace std;

int main() {
	char arr[50];
	int i, a, num = 0, cnt = 0; // num: 자연수, cnt: 약수의 개수

	cin >> arr;

	for (i = 0; i < strlen(arr); i++) { // 문자열 배열 길이 구하는 함수 strlen(arr)
		if (arr[i] >= 48 && arr[i] <= 57) {
			num = num * 10 + (arr[i] - 48);
		}
	}
	
	for (i = 1; i <= num; i++) {
		if (num % i == 0) {
			cnt++;
		}
	}

	cout << num << "\n" << cnt;
	return 0;
}