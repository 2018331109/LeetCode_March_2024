/*
1669. Merge In Between Linked ListsYou are given two linked lists: list1 and list2 of sizes n and m respectively.

Remove list1's nodes from the ath node to the bth node, and put list2 in their place.
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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* first=list1;
        ListNode* second=list1;
        for(int i=0;i<a-1;i++)
        {
            first=first->next;
        }
        for(int i=0;i<b;i++)
        {
            second=second->next;
        }
        first->next=list2;
        while(first->next)
        {
            first=first->next;
        }
        first->next=second->next;
        return list1;

        
    }
};
