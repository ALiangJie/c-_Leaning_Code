#include"headFile.h"

vector<float> bubblingSort(vector<float> a)
{
	/*
	2 1 3 0 4
	1 2 3 0 4

	*/
	for (int i = 0; i < a.size()-1; i++)
	{
		for (int j = 0; j < a.size()-1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
	cout << "Ã°ÅÝÅÅÐòÍê³É" << endl;
	return a;
}