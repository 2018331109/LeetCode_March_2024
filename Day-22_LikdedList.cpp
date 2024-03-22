/*
234. Palindrome Linked List
Given the head of a singly linked list, return true if it is a
palindrome
or false otherwise.
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
    bool isPalindrome(ListNode* head) {

        ListNode* slow=head; ListNode* fast=head;
        while(fast!=nullptr and fast->next!=nullptr)
            slow=slow->next, fast=fast->next->next;
        ListNode* curr=slow; 
        ListNode* prev=nullptr;
        while(curr != nullptr)
        {
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        ListNode* root=head;
        while(prev != nullptr)
        {
            if(prev->val != root->val) return false;
            prev=prev->next, root=root->next;
        }


        return true;
    }
};

