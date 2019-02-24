#include <iostream>
using namespace std;
int main()
{
	int i=0, j=0;
	int k, l, m = 0; // for문 돌리기 위함.
	int c, r; // 총 높이, 총 가로 길이
	cin >> c; // 가로길이
	cin >> r; // 세로길이
	int arr[20][20];
	int clone_arr[20][20]; // 위에 모양 복사하기 위함.
	int max = 0; // 최대 점수값.
	int score = 0; // 열 마다의 점수
	int scorei; // 각 열마다 가장 윗변.
	int x = 0;
	int a, b;
	int distinct;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			cin >> arr[i][j];
		}
	}//값을 구했음.
    //전체를 복사하고,
	// 복제함.

	for(j=0;j<c;j++) // 열기준으로 하나씩.
	{
		i = 0;
		for (a = 0; a < r; a++)
		{
			for (b = 0; b < c; b++)
			{
				clone_arr[a][b] = arr[a][b];
			}
		}
		while(1)
		{
			if (arr[i][j] == 0)
			{
				i++;
			}
			if (arr[i][j] == 1)
				break;
			if (i == r)
			{ 
				i = r;
				break;
			}
		}
		scorei = i; // 가장 밑변 구함.
		//cout << scorei << endl;
		//if (scorei > 3) // scorei 밑변이 3보다 클때만 게임오버가 아니므로 진행한다.
		//{
			if (scorei > 3) // 게임오버가 아닐때만!
			{
				for (a = scorei - 4; a < scorei; a++)
				{
					clone_arr[a][j] = 1;
				}//위에 네개만 1로 채운다.
				/*
				for (a = 0; a < r; a++)
				{
					for (b = 0; b < c; b++)
					{
						cout << clone_arr[a][b] << " ";
					}
					cout << endl;
				}
				*/
				// 출력.
				l = scorei-1;
				score = 0; // score값 초기화
				while(1)
				{
					// 출력.
					if (l == scorei-5)
						break;
					distinct = 1;
					for (m = 0; m < c; m++)
					{
						if (clone_arr[l][m] == 0)
							distinct = 0;
					}
					if (distinct == 1)
					{
						score++;
					}

					//cout << "l : " << l << " score : " << score << endl; // 판별
					l--;
				}
			}
			if (max < score)
			{
				max = score;
				x = j+1;
			}
		//}
	}
	cout << x << " " << max;
	return 0;
}