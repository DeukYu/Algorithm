#include <iostream>
#include <string>

using namespace std;

string password;
int vowelCnt, consonantCnt;	// 모음 연속, 자음 연속

bool isVowel(const char& ch)
{
	return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
	while (true)
	{
		cin >> password;
		if (password == "end")
			break;

		vowelCnt = 0;
		consonantCnt = 0;
		char prev = '0';
		bool includeVowel = false;
		bool flag = false;
		for (int i = 0; i < password.size(); ++i)
		{
			if (isVowel(password[i])) {
				includeVowel = true;
				++vowelCnt;
				consonantCnt = 0;
			}
			else
			{
				vowelCnt = 0;
				++consonantCnt;
			}

			if (vowelCnt >= 3 || consonantCnt >= 3) 
			{
				flag = true;
				break;
			}

			if (i >= 1 && (prev == password[i]) && (password[i] != 'e' && password[i] != 'o'))
			{
				flag = true;
				break;
			}

			prev = password[i];
		}
		if (includeVowel == false) flag = true;
		if (flag) cout << "<" << password << ">" << " is not acceptable." << endl;
		else cout << "<" << password << ">" << " is acceptable." << endl;
	}
	return 0;
}