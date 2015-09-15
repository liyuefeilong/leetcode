#include "SwapNodesinPairs.h"


int main()
{
	ListNode* head = NULL;
	head->value = 1;
	head->next->value = 2;
	head->next->next->value = 3;
	head->next->next->next->value = 4;

	Solution s;
	ListNode* result = s.swapPairs(head);
	cout << result;
	system("pause");
	return 0;
}