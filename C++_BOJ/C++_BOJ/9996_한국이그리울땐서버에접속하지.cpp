#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N = 0;
	string str = "";

	cin >> N;
	cin >> str;
	int pos = str.find("*");
	string pre = str.substr(0, pos);
	string suf = str.substr(pos + 1);

	for (int i = 0; i < N; ++i)
	{
		string temp;
		cin >> temp;
		if (pre.size() + suf.size() > temp.size())
		{
			cout << "NE" << endl;
		}
		else
		{
			if (pre == temp.substr(0, pre.size()) && suf == temp.substr(temp.size() - suf.size()))
			{
				cout << "DA" << endl;
			}
			else
			{
				cout << "NE" << endl;
			}
		}
	}
	return 0;
}