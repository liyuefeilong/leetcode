#include "MergeLinkedList.h"

using namespace std;

int main()
{
	ListNode* p1 = new ListNode(1);
	p1->next = new ListNode(2);
	//p1->next->next = new ListNode(3);
	ListNode* p2 = new ListNode(5);
	p2->next = new ListNode(4);
	p2->next->next = new ListNode(3);

	Solution s;

	ListNode* result = s.MergeLinkedList(p1, p2);

	while (result)
	{
		cout << result->value << " ";
		result = result->next;
	}

	delete p1;
	delete p2;

	system("pause");
	return 0;
}