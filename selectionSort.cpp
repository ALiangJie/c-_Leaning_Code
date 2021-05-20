#include"headFile.h"
vector<int> selectionSort(vector<int> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = i + 1; j < a.size(); j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
	cout << "选择排序完成" << endl;
	return a;
}

vector<float> selectionSort(vector<float> a)
{
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = i + 1; j < a.size(); j++)
		{
			if (a[i] > a[j])
			{
				swap(a[i], a[j]);
			}
		}
	}
	cout << "选择排序完成" << endl;
	return a;
}