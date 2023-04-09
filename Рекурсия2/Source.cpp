#include <iostream>
using namespace std;

string palindrom(string word, int i);

int main()
{
	system("chcp 1251");
	system("cls");

	string word;
	cout << "Введите слово строчными буквами: ";
	cin >> word;

	cout << palindrom(word, 0);

	system("pause");
	return 0;
}

string palindrom(string word, int i)
{
	if (i == floor(word.length() / 2)) return "YES";
	if (word[i] != word[word.length() - 1 - i]) return "NO";
	return palindrom(word, ++i);
}
