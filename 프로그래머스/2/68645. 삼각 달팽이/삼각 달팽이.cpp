#include <string>
#include <vector>
#include <iostream>
#include <tuple>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<vector<int>> arr(n, vector<int>(n, 0)); // n x n 배열을 0으로 초기화

    int number = 1;
    pair<int, int> currPos = { 0, 0 };
    int direction = 0; // 방향을 나타내는 변수

    // 방향: 0 - 아래로, 1 - 오른쪽으로, 2 - 위로
    int dr[3] = { 1, 0, -1 };
    int dc[3] = { 0, 1, -1 };

    while (number <= n * (n + 1) / 2) { // 숫자가 n * (n + 1) / 2까지 채워질 때까지 반복
        arr[currPos.first][currPos.second] = number++;

        int nextRow = currPos.first + dr[direction];
        int nextCol = currPos.second + dc[direction];

        // 다음 위치가 유효한지 체크
        if (nextRow < 0 || nextRow >= n || nextCol < 0 || nextCol >= n || arr[nextRow][nextCol] != 0) {
            // 방향을 전환
            direction = (direction + 1) % 3;
        }

        currPos.first += dr[direction];
        currPos.second += dc[direction];
    }

    // 배열을 일차원 배열로 변환하여 answer에 저장
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            answer.push_back(arr[i][j]);
        }
    }

    return answer;
}