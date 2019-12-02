#include <iostream>
using namespace std;

const int MAX_LENGTH = 50;

int getLength(const char* str) {
	int length = 0;
	int idx = 0;
	while (str[idx] != '\0') {
		length++;
		idx++;
	}
	return length;
}

bool checkIsPalindrome(const char* str) {
	int start = 0;
	int end = getLength(str) - 1;
	while (start < end) {
		if (str[start] != str[end]) {
			return false;
		}
		start++;
		end--;
	}
	return true;
}

int compareStrings(const char* str1, const char* str2) {
	for (int i = 0; str1[i] != '\0'; i++) {
		if (str1[i] != str2[i]) {
			return str1[i] - str2[i];
		}
	}
	return 0;
}

int main() {
	//char str1[] = "Hello, world!";
	//int lengthStr1 = getLength(str1);
	//cout << lengthStr1 << endl;

	//char str2[] = "abcd";
	//char str3[] = "abccde";
	//char str4[] = "abe";
	//char str5[] = "abcd";

	//cout << compareStrings(str2, str3) << endl;
	//cout << compareStrings(str2, str4) << endl;
	//cout << compareStrings(str2, str5) << endl;

	char myStr[MAX_LENGTH];
	cout << "Enter a string with maximal length 50: " << endl;
	cin.getline(myStr, MAX_LENGTH);
	if (checkIsPalindrome(myStr)) {
		cout << "Yes, the string is a palindrome." << endl;
	}
	else {
		cout << "No, the string is not a palindrome." << endl;
	}
	system("pause");
	return 0;
}