#include <iostream>
using namespace std;

int main()
{
	// Вывести из строки все цифры

	string s = "2ff 4 sgf3f 6fgs 5 ftg4 gff3 2s";

	// Цикл, перебирающий символы строки
	// s.length() - функция, возвращающая количество символов строки s
	for (size_t i = 0; i < s.length(); i++)
	{
		// isdigit(s[i]) - функция, проверяющая является ли символ s[i] цифрой
		if (isdigit(s[i]))
		{
			cout << s[i];
		}
	}
}