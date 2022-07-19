#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s, ret;
int cnt[200];
int flag;
char mid;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> s;
	for (char a : s) ++cnt[a];
	for (int i = 'Z'; i >= 'A'; --i)
	{
		if (cnt[i])
		{
			if (cnt[i] & 1)	// 홀수인 경우 
			{
				mid = char(i); 
				++flag;
			}
			if (flag == 2) break;
			for (int j = 0; j < cnt[i]; j += 2)
			{
				ret = char(i) + ret;
				ret += char(i);
			}
		}
	}
	if (mid) ret.insert(ret.begin() + ret.size() / 2, mid);
	if (flag == 2) cout << "I'm Sorry Hansoo" << endl;
	else cout << ret << endl;
}