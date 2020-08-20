Problem Link :-  https://leetcode.com/explore/challenge/card/august-leetcoding-challenge/551/week-3-august-15th-august-21st/3430/

/* Solution */

class Solution {
public:
    ListNode* reverse(ListNode* head) {
      ListNode* prev = NULL;
      ListNode* curr = head;
      while (curr != NULL) 
      {
        ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
      }
      return prev;
    }
    void reorderList(ListNode* head) {
         if (head == NULL || head->next==NULL)
                return;
       // ListNode* curr=head;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* pre=NULL;
        while(fast!=NULL&&fast->next!=NULL)
        {
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        pre->next=NULL;
        ListNode* newlist=reverse(slow);
        slow=head;
        while(slow!=NULL)
        {
            ListNode* tmp=slow->next;
            slow->next=newlist;
            if(tmp==NULL)
                break;
            slow=newlist;
            newlist=tmp;
        }
        
    }
};