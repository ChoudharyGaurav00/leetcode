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
    int count(ListNode* head)
    {
        int cnt=0;
        while(head!=nullptr)
        {
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    
    ListNode* deleteMiddle(ListNode* head) {
        int cnt=count(head);
        
        if(cnt==1)
        {
            head=nullptr;
            return head;
        }
            
        
        ListNode* prev,*cur;
        prev=head;
        cnt/=2;
        cur=head;
        while(cnt--)
        {
            prev=cur;
            cur=cur->next;
        }
        prev->next=cur->next;
       delete cur;
        return head;
        
        
    }
};