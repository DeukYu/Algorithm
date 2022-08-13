#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<string> num;
string str;
string temp;

bool pred(string a, string b) {
	if (a.size() == b.size()) return a < b;
	return a.size() < b.size();
}
int main()
{
	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> str;
		temp.clear();
		for (int j = 0; j < str.size(); ++j)
		{
			if (isdigit(str[j]))
			{
				temp += str[j];
			}	
			else
			{
				if (false == temp.empty())
				{
					while (temp.length() >= 2 && temp[0] == '0')
						temp.erase(0, 1);
					num.emplace_back(temp);
					temp.clear();
				}
			}
		}

		if (false == temp.empty())
		{
			while (temp.length() >= 2 && temp[0] == '0')
				temp.erase(0, 1);
			num.emplace_back(temp);
			temp.clear();
		}

		str.clear();
	}
	sort(num.begin(), num.end(), pred);

	for (const auto& iter : num)
		cout << iter << endl;
	return 0;
}