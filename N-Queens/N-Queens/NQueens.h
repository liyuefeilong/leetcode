
#include <iostream>
#include <vector>

using namespace std;
/*
class Solution
{
public:
	vector<vector<string> > solveNQueens(int n)
	{
		this->row = vector<int>(n, 0); // ����Ϣ
		this->col = vector<int>(n, 0); // ����Ϣ
		dfs(0, n, result); // ����
		return result;
	}

private:
	vector<vector<string> > result; // ��Ŵ�ӡ�Ľ��
	vector<int> row; // ��¼ÿһ���ĸ��±���Q
	vector<int> col; // ��¼ÿһ���Ƿ�����Q

	void dfs(int r, int n, vector<vector<string> > & result) // ������r�У������ܹ���n��
	{
		if (r == n) // �ɱ��������̵ײ������뱾�α������
		{
			vector<string> temp;
			for (int i = 0; i < n; ++i)
			{
				string s(n, '.'); // ÿ���ȱ���ʼ��Ϊ'.'
				s[row[i]] = 'Q';  // ÿ���±걻���Ϊ1��Ԫ�ر����ΪQ
				temp.push_back(s);	
			}
			result.push_back(temp);
		}

		int i, j;
		for (i = 0; i < n; ++i)
		{
			if (col[i] == 0)
			{
				
				for (j = 0; j < r; ++j)
					if (abs(r - j) == abs(row[j] - i))
						break;
				
				if (j == r)
				{
					col[i] = 1; // ��ǵ�i�У��Ѵ���Q
					row[j] = i; // ��j�еĵ�i��Ԫ�ط���Q
					dfs(r + 1, n, result); // ������r + 1��
					col[i] = 0;
					row[j] = 0;
				}

			}
		}
	}
};
*/

class Solution
{
public:
	int totalNQueens(int n)
	{
		this->row = vector<int>(n, 0); // ����Ϣ
		this->col = vector<int>(n, 0); // ����Ϣ
		result = 0;
		dfs(0, n, result); // ����
		return result;
	}

private:
	int result; // ��Ŵ�ӡ�Ľ��
	vector<int> row; // ��¼ÿһ���ĸ��±���Q
	vector<int> col; // ��¼ÿһ���Ƿ�����Q

	void dfs(int r, int n, int & result) // ������r�У������ܹ���n��
	{
		if (r == n) // �ɱ��������̵ײ�����������1
			++result;

		int i, j;
		for (i = 0; i < n; ++i)
		{
			if (col[i] == 0)
			{
				
				for (j = 0; j < r; ++j)
					if (abs(r - j) == abs(row[j] - i))
						break;
				
				if (j == r)
				{
					col[i] = 1; // ��ǵ�i�У��Ѵ���Q
					row[j] = i; // ��j�еĵ�i��Ԫ�ط���Q
					dfs(r + 1, n, result); // ������r + 1��
					col[i] = 0;
					row[j] = 0;
				}

			}
		}
	}
};