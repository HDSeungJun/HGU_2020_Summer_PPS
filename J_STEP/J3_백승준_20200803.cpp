/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* new_head = NULL;
        ListNode* current;
        
        while(head != NULL)
        {
            current = head->next;
            head->next = new_head;
            new_head = head;
            head = current;
        }
        return new_head;
    }
};
