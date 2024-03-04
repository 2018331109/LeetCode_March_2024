/*
19. Remove Nth Node From End of List
Given the head of a linked list, remove the nth node from the end of the list and return its head.
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
class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        cout<<head->val<<endl;
        ListNode* node=new ListNode();
        node->next=head;
        //cout<<node->val<<endl;
        ListNode* first=node;
        ListNode* second=node;
        int cnt=0;
        
        for(int i=0;i<n;i++)
        {
            //cout<<first->val<<" ";
            first=first->next;
            //cout<<first->val<<" ";
        }
        //cout<<endl;
        
        while(first->next!=NULL)
        {
            second=second->next;
            first=first->next;
        }
        
        second->next=second->next->next;
        
        return node->next;
        

    }
};

