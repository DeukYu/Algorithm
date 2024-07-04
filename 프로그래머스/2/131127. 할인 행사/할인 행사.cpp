#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
	int answer = 0;
	int index = 0;

	for(int i = 0; i + 10 <= discount.size(); ++i)
	{
		map<string, int> wantMap;
		for (int i = 0; i < want.size(); ++i)
		{
			wantMap[want[i]] = number[i];
		}
		int t = i + 10;
		map<string, int> discountMap;
		for (int j = i; j < t; ++j)
		{
			discountMap[discount[j]]++;
		}

		for (auto iter : discountMap)
		{
			if (wantMap.find(iter.first) != wantMap.end())
			{
				int num = wantMap[iter.first] - iter.second;
				if (num <= 0)
				{
					wantMap.erase(iter.first);
				}
			}
		}

		if (wantMap.empty())
		{
			answer += 1;
		}
	}

	return answer;
}