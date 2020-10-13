//The program is to compute all possible substrings of a given string including all characters from the another string .
//This program will work for any string whose length is upto 10^4 in 1s.
//Time complexity is O(n^2).


#include<bits/stdc++.h>
using namespace std;
int check(char, string); 
int uniqueChar(string); 

int main() {
	string str1 = "XYYZXZYZXXYZ";
	string str2 = "XYZ";
	int len1 = str1.length();
	int len2 = str2.length();
	int n = len1 - len2 + 1;
	int flag = 1;
	int flag2 = 0;
	for (int i = 0; i < n; i++) {
		string str3;
		for (int j = 0; j < len2; j++) {
			if (check(str1[i + j], str2)) {
				flag = 1;
				continue;
			}
			else {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			for (int k = 0; k < len2; k++) {
				str3 += str1[i + k];
			}
			if (uniqueChar(str3)) {
				flag2 = 1;
				cout << "substring " << "'" << str3 << "'" << " present at index " << i << endl;
			}
		}
	}
	if (flag2 == 0) {
		cout << "No any string matched!!" << endl;
	}
	return 0;
}

//The check() function will check char from str1 is present in str2 or not 
int check(char a, string str2) {

	int flag = 1;
	for (int i = 0; i < str2.length(); i++) {

		if (a == str2[i]) {
			return 1;
		}
	}
	return 0;
}

//The uniqueChar() function will check the string has unique characters or not 
int uniqueChar(string str4) {

	map<char, int>m; //implementation of stl map for chekcing unique string 

	for (int i = 0; i < str4.length(); i++) {
		m[str4[i]]++;
		if (m[str4[i]] == 2) {
			return 0;
		}
	}
	return 1;
}