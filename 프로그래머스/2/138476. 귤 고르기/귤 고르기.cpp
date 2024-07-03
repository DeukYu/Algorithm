#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
	map<int, int> count;
	for (auto t : tangerine) {
		count[t]++;
	}

    vector<int> frequencies;
    for (auto& p : count) {
        frequencies.emplace_back(p.second);
    }

    sort(frequencies.rbegin(), frequencies.rend());

    int total = 0, answer = 0;
    for (auto freq : frequencies) {
        total += freq;
        answer++;
        if (total >= k) {
            break;
        }
    }

    return answer;
}