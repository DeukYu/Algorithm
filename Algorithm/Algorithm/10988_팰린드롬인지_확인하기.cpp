#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int soultion(string str) 
{
	string rev = str;
	reverse(rev.begin(), rev.end());
	if (str == rev)
		cout << "1" << endl;
	else {
		cout << "0" << endl;
	}
	return 0;
}

int main()
{
	string str;
	cin >> str;
	soultion(str);
}