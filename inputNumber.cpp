#include<vector>
#include<iostream>
using namespace std;

/// <summary>
/// 输入n个数字,返回vector<int>
/// </summary>
/// <param name="n">输入数字个数</param>
/// <param name="a">int存储容器</param>
/// <returns></returns>
vector<int> cin_numbers(int n,vector<int> a)
{
	int number;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		a.push_back(number);
	}
	cout << endl;
	return a;
}

/// <summary>
/// 输入n个数字,返回vector<float>
/// </summary>
/// <param name="n">输入数字个数</param>
/// <param name="a">float存储容器</param>
/// <returns></returns>
vector<float> cin_numbers(int n, vector<float> a) 
{
	float number;
	for (int i = 0; i < n; i++)
	{
		cin >> number;
		a.push_back(number);
	}
	cout << endl;
	return a;
}