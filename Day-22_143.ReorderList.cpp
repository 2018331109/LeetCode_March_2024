/*
You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln

Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …

You may not modify the values in the list's nodes. Only nodes themselves may be changed.
*/
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
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* fast=head; 
        ListNode* slow=head;
        while(fast->next != nullptr and fast->next->next != nullptr)
        {
            fast=fast->next->next; 
            slow=slow->next;
        }
        ListNode* second=slow->next; slow->next=nullptr;
        ListNode* prev=nullptr;
        while(second != nullptr)
        {
            ListNode* temp=second->next; second->next=prev;
            prev=second; second=temp;
        }
        ListNode* first=head;
        while(prev!=nullptr)
        {
            ListNode* temp1=first->next;
            ListNode* temp2=prev->next;
            first->next=prev; prev->next=temp1;
            first=temp1; prev=temp2;
        }
    }
};
