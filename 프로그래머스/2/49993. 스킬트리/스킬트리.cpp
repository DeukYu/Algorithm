#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;

	for (int i = 0; i < skill_trees.size(); ++i) {
		string temp = "";
		for (int j = 0; j < skill_trees[i].size(); ++j) {
			for(int k = 0; k < skill.size(); ++k) {
				if (skill_trees[i][j] == skill[k]) {
					temp += skill_trees[i][j];
				}
			}
		}

		bool flag = true;
		for (int j = 0; j < temp.size(); ++j) {
			if (skill[j] != temp[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			answer++;
		}
	}

    return answer;
}