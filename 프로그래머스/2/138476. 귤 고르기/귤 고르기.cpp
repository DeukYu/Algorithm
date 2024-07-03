#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
	map<int, int> count;
	for (auto t : tangerine) {
		count[t]++;
	}

    // 빈도수를 모으는 벡터
    vector<pair<int, int>> frequency(count.begin(), count.end());

    // 빈도수를 기준으로 내림차순 정렬
    sort(frequency.begin(), frequency.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return b.second < a.second;
        });

    int total = 0;

    // 빈도수가 높은 것부터 더해서 k를 넘을 때까지
    for (const auto& p : frequency) {
        total += p.second;
        answer++;
        if (total >= k) {
            break;
        }
    }

    return answer;
}