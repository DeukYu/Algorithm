#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
	int answer = 0;

	map<string, int> wantMap, tempMap;
	for (int i = 0; i < want.size(); ++i)
	{
		wantMap[want[i]] = number[i];
	}

	for(int i = 0; i + 10 <= discount.size(); ++i)
	{
		tempMap = wantMap;
		int t = i + 10;
		map<string, int> discountMap;
		for (int j = i; j < t; ++j)
		{
			discountMap[discount[j]]++;
		}

		for (auto iter : discountMap)
		{
			if (tempMap.find(iter.first) != tempMap.end())
			{
				int num = tempMap[iter.first] - iter.second;
				if (num <= 0)
				{
					tempMap.erase(iter.first);
				}
			}
		}

		if (tempMap.empty())
		{
			answer += 1;
		}
	}

	return answer;
}