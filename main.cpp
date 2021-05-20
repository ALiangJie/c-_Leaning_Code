#include"headFile.h"

int main()
{
	//Sales_data data1;
	//data1.revenun = 1;
	//cout << data1.revenun <<" "<< data1.units_sold<<endl;

	//drawHeart5();

	vector<float> a = cin_numbers(inputNumberRequest(), a);
	a = selectionSort(a);
	cout_numbers("all", 0, a);
	return 0;
}