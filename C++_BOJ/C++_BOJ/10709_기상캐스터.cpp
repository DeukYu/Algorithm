#include <iostream>
#include <string>

using namespace std;

int H, W;
int map[101][101];
string temp;
int main()
{
	cin >> H >> W;
	for (int i = 0; i < H; ++i)
	{
		cin >> temp;
		for (int j = 0; j < W; ++j)
		{
			if (temp[j] == '.') map[i][j] = -1;
			else map[i][j] = 0;
		}
	}
	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j) 
		{
			if (map[i][j] == 0)
			{
				int cnt = 1;
				while (map[i][j + 1] == -1)
				{
					map[i][j + 1] = cnt++;
					++j;
				}
			}
		}
	}

	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
		{
			cout << map[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}