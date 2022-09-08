#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <sstream>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);

    unordered_map<string, int> idx_map;
    for (int i = 0; i < id_list.size(); ++i) idx_map[id_list[i]] = i;

    unordered_map<string, set<string>> report_map;
    stringstream ss;
    for (const auto& rep : report)
    {
        ss.str(rep);
        string first, second;
        ss >> first >> second;
        report_map[second].insert(first);
        ss.clear();
    }

    for (const auto iter : report_map)
    {
        if (iter.second.size() >= k)
        {
            for (const auto& set_iter : iter.second)
            {
                int idx = idx_map[set_iter];
                ++answer[idx];
            }
        }
    }

    return answer;
}