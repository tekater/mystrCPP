#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;
int mystrcmp(const char* str1, const char* str2) {
	if (*str1 == *str2) {
		return 1;
	}
	else {
		return 0;
	}

}
int StringToNumber(char* str) {
	char a = *str;
	return (int)a;
}

char* NumberToString(int number) {
	char a = number;
	return &a;
}
char* Uppercase(char* str1) {
	int asc1 = 0;
	int asc2 = 0;
	for (int i = 0; i < strlen(str1); i++)
	{
		if (int(str1[i]) >= 97 && int(str1[i]) <= 122) {
			asc1 = int(str1[i]);
			asc2 = asc1 - 32;
			str1[i] = char(asc2);
		}
	}
	return str1;
}

char* Lowercase(char* str1) {
	int asc1 = 0;
	int asc2 = 0;
	for (int i = 0; i < strlen(str1); i++)
	{
		if (int(str1[i]) >= 65 && int(str1[i]) <= 90) {
			asc1 = int(str1[i]);
			asc2 = asc1 + 32;
			str1[i] = char(asc2);
		}
	}
	return str1;
}
char* mystrrev(char* str) {
	char a[127] = {" "};
	/*for (int i = strlen(str) - 1,j = 0; i > 0; i--,j++) {
		a[j] = str[i];
	}*/
	for (int i = 0, j = strlen(str) - 1; i < j; ++i, --j) {
		swap(str[i], str[j]);
	}

	return str;
}
int main()
{
	setlocale(0, "");
	srand(time(NULL));
	cout << "Задание 1\n";
	const char A[127] = { "Hello World!" };
	const char B[127] = { "Hello World!" };

	cout << "Сравнение: " << mystrcmp(A, B) << endl;

	cout << "\n\nЗадание 2\n";
	char strToNum = 'a';
	cout << "String to Number: a > " << StringToNumber(&strToNum) << endl;

	
	cout << "\n\nЗадание 3\n";
	int numToStr = 97;
	cout << "Number to String: 97 > "; cout << *NumberToString(numToStr) << endl;


	cout << "\n\nЗадание 4\n";
	char lower[127] = { "hello world!" };
	cout << "UpperCase: " << lower << " -> ";cout << Uppercase(lower) << endl;


	cout << "\n\nЗадание 5\n";
	char upper[127] = { "HELLO WORLD!" };
	cout << "LowerCase: " << upper << " -> "; cout << Lowercase(upper) << endl;


	cout << "\n\nЗадание 5\n";
	char rev[127] = { "em sreveR" };
	cout << "Reverser: " << rev << " -> "; cout << mystrrev(rev) << endl;
}
