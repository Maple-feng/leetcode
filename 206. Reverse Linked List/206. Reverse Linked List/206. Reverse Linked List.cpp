#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		if (head == NULL || head->next == NULL)
			return head;

		ListNode * first = NULL;
		ListNode * second = head;
		ListNode * third = NULL;
		while (second)
		{
			third = second->next;
			second->next = first;
			first = second;
			second = third;
		}
		return first;
	}
};