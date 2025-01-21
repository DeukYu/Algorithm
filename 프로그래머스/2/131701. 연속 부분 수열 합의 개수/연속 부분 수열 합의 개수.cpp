#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
	set<int> unique_sums;

	for (int len = 1; len <= elements.size(); ++len)
	{
		for (int i = 0; i < elements.size(); ++i)
		{
			int sum = 0;
			for (int j = i; j < i + len; ++j)
			{
				if (j >= elements.size())
					sum += elements[j - elements.size()];
				else
					sum += elements[j];
			}
			unique_sums.insert(sum);
		}
	}

	return unique_sums.size();
}