#include <iostream>
using namespace std;
int seat[1000][1000]; //seat ���� ��ȣ //seat ���� ��ȣ  // �뷫 10���� �̻���� ���������Ҵ�
int main(void)
{
	int c, r;
	int k,l;
	int result;
	int x, y;
	cin >> c; // ���α���
	cin >> r; // ���α���
	cin >> result;
	int i = r, j = 0;
	int direct = -1;
	int num = 1;
	int limitx = c-1; //������ ��谪
	int limity = r;// ������ ��谪.

	while (1)
	{

		//cout << i << " " << j << endl;
		for(k=0;k<limity;k++) //limity ��ŭ�� ���η� �̵�.
		{
			i = i + direct;
			//cout << i << " " << j << endl; // Ȯ��
			seat[i][j] = num;
			num++;
		}
		limity--;
		direct = -direct;// ���Ʒ� �¿� ���� ����
		if (limitx == 0)
			break;
		for (k = 0; k < limitx; k++) // �������
		{
			j = j + direct;
			//cout << i << " " << j << endl; // Ȯ��
			seat[i][j] = num;
			num++;
		}
		limitx--;
		//direct = -direct;// ���Ʒ� �¿� ���� ����
		if (limity == 0)
			break;
	}
	/*
	for(k=0;k<r;k++)
	{
		for (l=0;l<c;l++)
		{
			cout << seat[k][l] <<" ";
		}
		cout << "\n";
	}
	*/
	for (k = 0; k<r; k++)
	{
		for (l = 0; l<c; l++)
		{
			if (seat[k][l] == result)
			{ 
			x = l+1;
			y = r - (k);
			}

		}
	}
	if (result <= num)
	{
		cout << x << " " << y;
	}
	else
		cout << 0;
	return 0;
}