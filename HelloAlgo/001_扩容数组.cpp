#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int* extend(int* nums, int size, int enlarge)
{
	int* res = NULL;
	res = new int[size + enlarge];
	for (int i = 0; i < size; i++)
	{
		res[i] = nums[i];
	}
	delete[]nums;
	return res;
}
int main()
{
	int* nums = new int[6] { 1, 2, 3, 4, 5, 6 };
	int enlarge = 4;
	nums = extend(nums, sizeof(nums), enlarge);
	for (int i = 0; i < 6; i++)
	{
		cout << nums[i] << " ";
	}
	return 0;
}