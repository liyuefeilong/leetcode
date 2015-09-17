class Solution 
{ public:
	ListNode *swapPairs(ListNode *head)
	{
		ListNode *cur = head;
		ListNode *nextcur;
		ListNode *last;
		if (head == NULL)
			return head;
		if (head->next == NULL)
			return head;
		cur = head;
		head = head->next;
		nextcur = head->next;
		head->next = cur;
		cur->next = nextcur;
		cur = nextcur;
		last = head->next;
		while (1)
		{
			if (cur == NULL)
				return head;
			if (cur->next == NULL)
				return head;
			nextcur = cur->next->next;
			cur->next->next = cur;
			last->next = cur->next;
			last = cur;
			cur->next = nextcur;
			cur = nextcur;
		}
	}
};