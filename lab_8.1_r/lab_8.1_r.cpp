// lab_8.1_r.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int Count(const char* str, const char c, int k, int i)
{

	if (c == str[i])
		k++;

	if (str[i + 1] != '\0')
		Count(str, c, k, i + 1);
	else
		return k;
}


char* Change(char* dest, const char* str, char* t, int i, int len)
{
	if (i < len - 1)
	{
		if ((str[i] == ',' && str[i + 1] == ','))
		{
			strcat( t, "**");
			return Change(dest, str, t + 1, i + 1, len);
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
			return Change(dest, str, t, i, len);
		}
	}
	else
	{
		*t++ = str[i++];
		*t++ = str[i++];
		*t = '\0';
		return dest;
	}
}

int main()
{
	char str[100];
	char c = ',';

	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	size_t len = strlen(str);
	size_t maxlen = len * 1 / 2;
	char* tmp = new char[maxlen];
	tmp[0] = '\0';
	size_t i = 0;
	size_t last = strlen(tmp);

	cout << "String contains " << Count(str, c, 0, 0) << " symbols ','" << endl;

	char* dest1 = new char[110];
	dest1[0] = '/0';
	char* dest2;
	dest2 = Change(dest1, str, dest1, 0, len);
	cout << "Modified string: " << dest2 << endl;

	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
