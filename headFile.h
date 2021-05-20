#pragma once
#include<string>
#include<vector>
#include<math.h>
#include<windows.h>
#include<tchar.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void drawBall();
void drawHeart1();
void drawHeart2();
void drawHeart3();
void drawHeart4();
void drawHeart5();
vector<int> cin_numbers(int n, vector<int> a);
vector<float> cin_numbers(int n, vector<float> a);
void cout_numbers(string re, int n, vector<int> a);
void cout_numbers(string re, int n, vector<float> a);
int inputNumberRequest();
vector<int> selectionSort(vector<int> a);
vector<float> selectionSort(vector<float> a);

