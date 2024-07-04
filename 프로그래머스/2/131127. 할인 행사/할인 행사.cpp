#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
	int answer = 0;
	int discountPeriod = 10;

	map<string, int> wantMap, tempMap;
	for (int i = 0; i < want.size(); ++i)
	{
		wantMap[want[i]] = number[i];
	}

	for(int i = 0; i <= discount.size() - discountPeriod; ++i)
	{
		tempMap = wantMap;
		map<string, int> discountMap;
		for (int j = i; j < i + discountPeriod; ++j)
		{
			if (tempMap.find(discount[j]) != tempMap.end())
			{
				tempMap[discount[j]]--;
				if (tempMap[discount[j]] <= 0)
				{
					tempMap.erase(discount[j]);
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