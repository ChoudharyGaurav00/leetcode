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
    
    
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* prev,*cur,*fast;
        cur=head;
        fast=head;
        if(fast->next==nullptr)
        {
            head=nullptr;
            return head;
        }
        
        while(fast->next!=nullptr)
        {
            prev=cur;
            cur=cur->next;
            fast=fast->next;
            if(fast->next!=nullptr) fast=fast->next;
            
        }
        prev->next=cur->next;
       delete cur;
        return head;
        
        
    }
};