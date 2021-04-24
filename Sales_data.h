#ifndef SALES_DATA

#pragma once
#include<iostream>
#include<string>
using namespace std;
struct Sales_data
{
	string bookNo;
	unsigned units_sold = 0;
	double revenun = 0;
};
Sales_data accum, trans, * salesptr;

#endif // !SALES_DATA

