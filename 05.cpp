#include<iostream>
using namespace std;

int main() {
	char arr[20];
	int age = 0;

	cin >> arr;

	if (arr[7] == '1' || arr[7] == '2') {
		age = 2019 - (1900 + ((arr[0] - 48) * 10 + arr[1] - 48));
	}
	if (arr[7] == '3' || arr[7] == '4') {
		age = 2019 - (2000 + (arr[1] - 48));
	}

	cout << age;

	if (arr[7] == '1' || arr[7] == '3') {
		cout << " M";
	}
	if (arr[7] == '2' || arr[7] == '4') {
		cout << " W";
	}

	return 0;
}