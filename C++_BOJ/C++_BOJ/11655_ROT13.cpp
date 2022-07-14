#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	for (auto& ch : str)
	{
		if (ch >= 65 && ch < 91)
		{
			if (ch + 13 > 90)
				ch -= 13;
			else
				ch += 13;
		}
		else if (ch >= 97 && ch < 123)
		{
			if (ch + 13 > 122)
				ch -= 13;
			else
				ch += 13;
		}
		cout << ch;
	}
	return 0;
}