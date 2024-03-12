/*
1171. Remove Zero Sum Consecutive Nodes from Linked List
Given the head of a linked list, we repeatedly delete consecutive sequences of nodes that sum to 0 until there are no such sequences.

After doing so, return the head of the final linked list.  You may return any such answer.

 

(Note that in the examples below, all sequences are serializations of ListNode objects.)
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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;

        int pre=0;
        unordered_map<int, ListNode*>mp;
        mp[0]=dummy;
        while(head!=NULL)
        {
            pre+=head->val;
            if(mp.find(pre)!=mp.end())
            {
                ListNode* start=mp[pre];
                ListNode* temp=start;
                int sum=pre;
                while(temp!=head)
                {
                    temp=temp->next;
                    sum+=temp->val;
                    if(temp!=head)
                    {
                        mp.erase(sum);
                    }
                }
                start->next=head->next;
            }
            else
            {
                mp[pre]=head;
            }

            head=head->next;
        }

        return dummy->next;
        
    }
};
