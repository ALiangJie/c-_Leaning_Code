#include<vector>
#include<iostream>
using namespace std;

/// <summary>
/// ���n�����֣���ӡ
/// </summary>
/// <param name="n">��ӡ���ָ���</param>
/// <param name="a">����</param>
/// <returns></returns>
void cout_numbers(string re, int n, vector<int> a)
{
	if (re == "all")
	{
		for (auto j = 0; j < a.size(); j++)
		{
			cout << a[j] << " ";
		}
	}
	else
	{
		if (n <= a.size())
		{
			for (auto j = 0; j < n; j++)
			{
				cout << a[j] << " ";
			}
		}
		else
		{
			cout << "error!!����Χ" << endl;
		}
	}
}

/// <summary>
/// ���n�����֣���ӡ
/// </summary>
/// <param name="n">��ӡ���ָ���</param>
/// <param name="a">����</param>
/// <returns></returns>
void cout_numbers(string re, int n, vector<float> a)
{
	if (re == "all")
	{
		for (auto j = 0; j < a.size(); j++)
		{
			cout << a[j] << " ";
		}
	}
	else
	{
		if (n <= a.size())
		{
			for (auto j = 0; j < n; j++)
			{
				cout << a[j] << " ";
			}
		}
		else
		{
			cout << "error!!����Χ" << endl;
		}
	}
}