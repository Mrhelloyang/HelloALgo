#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(NULL) {}//构造函数
};
void test01()
{
	ListNode* n0 = new ListNode(1);
	ListNode* n1 = new ListNode(2);
	ListNode* n2 = new ListNode(3);
	ListNode* n3 = new ListNode(4);
	ListNode* n4 = new ListNode(5);
	ListNode* n5 = new ListNode(6);
	n0->next = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
}
//在节点n0后插入p节点
void insert(ListNode* n0, ListNode* p)
{
	p = n0->next;
	n0->next = p;
}
//删除n0后面的节点
void remove(ListNode* n0)
{
	if (n0->next == NULL)
	{
		return;
	}
	ListNode* p;
	p = n0->next;
	n0->next = p->next;
	delete p;

}
int main()
{

	test01();

	return 0;
}