#include<bits/stdc++.h>
using namespace std;
int main() {

	for (int i = 1; i <= 7; i++) {
		for (int j = 1; j < i; j++) {
			cout << " ";
		}
		for (int m = i; m <= 7; m++) {
			cout << m << " ";
		}
		cout << endl;
	}
	for (int i = 7 - 1; i >= 1; i--) {
		for (int j = i - 1; j >= 1; j--) {
			cout << " ";
		}
		for (int k = i; k <= 7; k++) {
			cout << k << " ";
		}
		cout << endl;
	}
	return 0;
}