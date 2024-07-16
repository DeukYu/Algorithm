#include <string>
#include <vector>

using namespace std;

bool isZip(vector<vector<int>>& arr, int x, int y, int size) {
    for (int i = x; i < x + size; ++i)
    {
        for (int j = y; j < y + size; ++j)
        {
            if(arr[i][j] != arr[x][y])
				return false;
        }
    }
    return true;
}

void quad(vector<vector<int>>& arr, int x, int y, int size, vector<int>& answer) {
    if (isZip(arr, x, y, size))
    {
        ++answer[arr[x][y]];
        return;
    }
 
    int n = size / 2;
    quad(arr, x, y, n, answer);
    quad(arr, x, y + n , n, answer);
    quad(arr, x + n, y, n, answer);
    quad(arr, x + n, y + n, n, answer);
}

vector<int> solution(vector<vector<int>> arr) {
    vector<int> answer(2, 0);

    quad(arr, 0, 0, arr.size(), answer);

    return answer;
}