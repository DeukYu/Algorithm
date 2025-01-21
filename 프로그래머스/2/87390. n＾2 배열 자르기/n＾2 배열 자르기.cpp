#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
	vector<int> answer;
	answer.reserve(right - left + 1);


	for (long long idx = left; idx <= right; ++idx)
	{
		long long row = idx / n;
		long long col = idx % n;

		answer.emplace_back(max(row + 1, col + 1));
	}

    return answer;
}