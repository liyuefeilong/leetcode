#include <iostream>
using namespace std;

struct ListNode
{
	int value;
	ListNode *next;
	ListNode(int x) : value(x), next(NULL){};
};

class Solution
{
public:
	ListNode * reorderList(ListNode *head) {
		if (head == NULL || head->next == NULL)
			return head;
		ListNode *slow = head;
		ListNode *fast = head;
		ListNode *cut = head;
		while (fast && fast->next)
		{
			cut = slow;
			slow = slow->next;
			fast = fast->next->next;
		}
		cut->next = NULL;

		slow = reverseList(slow);
		ListNode *result = mergeList(head, slow);
		return result;
	}

	ListNode* reverseList(ListNode *head) // ·­×ªÁ´±í
	{
		if (head == NULL || head->next == NULL)
			return head;
		ListNode *prev = head;
		ListNode *curr = head->next;
		ListNode *temp = curr;
		prev->next = NULL;

		while (curr)
		{
			temp = curr->next;
			curr->next = prev;
			prev = curr;
			curr = temp;	
		}
		return prev;
	}

	
	ListNode* mergeList(ListNode *head1, ListNode *head2)
	{
		ListNode* temp1 = head1;
		ListNode* temp2 = head2;
		ListNode* pMerge = head1;
		bool flag = true;

		while (temp1 != NULL && temp2 != NULL)
		{
			if (flag  && temp2 != NULL)
			{
				temp1 = head1->next;
				head1->next = temp2;
				head1 = head1->next;
				flag = false;
			}
			if (!flag  && temp1 != NULL)
			{
				temp2 = head1->next;
				head1->next = temp1;
				head1 = head1->next;
				flag = true;
			}
		}
		return pMerge;
	}
};
