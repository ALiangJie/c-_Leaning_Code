#include<vector>
#include<iostream>
using namespace std;

/// <summary>
/// ����n������,����vector<int>
/// </summary>
/// <param name="n">�������ָ���</param>
/// <param name="a">int�洢����</param>
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
/// ����n������,����vector<float>
/// </summary>
/// <param name="n">�������ָ���</param>
/// <param name="a">float�洢����</param>
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