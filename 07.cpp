#include<iostream>
using namespace std;

int main() {
	char a[101], b[101];
	int i, k = 0;

	gets_s(a); // 입력(공백까지 포함)

	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] != ' ') { // 공백이 아닌 경우
			if (a[i] >= 65 && a[i] <= 90) {
				b[k++] = a[i] + 32;
			} // 대문자인 경우 -> 소문자로 변환
			else {
				b[k++] = a[i];
			} // 소문자인 경우 -> 그대로 배열에 삽입
		}
	}
	b[k] = '\0'; // 반드시 넣어줘야 함 -> \0은 문자열의 마지막을 알림

	cout << b;
	return 0;
}