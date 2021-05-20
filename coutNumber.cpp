#include<vector>
#include<iostream>
using namespace std;

/// <summary>
/// 输出n个数字，打印
/// </summary>
/// <param name="n">打印数字个数</param>
/// <param name="a">容器</param>
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
			cout << "error!!超范围" << endl;
		}
	}
}

/// <summary>
/// 输出n个数字，打印
/// </summary>
/// <param name="n">打印数字个数</param>
/// <param name="a">容器</param>
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
			cout << "error!!超范围" << endl;
		}
	}
}