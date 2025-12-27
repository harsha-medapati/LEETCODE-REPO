class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast != NULL)
        {
            if(slow->val == fast->val)
            {
                while(fast != NULL && slow->val == fast->val)
                {
                    fast = fast->next;
                }
                slow->next = fast;
                slow->val = 1000;
            }
            else
            {
                slow = slow->next;
                fast = fast->next;
            }
        }
        ListNode* temp = new ListNode(0);
        temp->next = head;
        fast = temp;
        while(fast->next != NULL)
        {
            if(fast->next->next != NULL && fast->next->val == 1000)
            {
                fast->next = fast->next->next;
            }
            else if(fast->next->next == NULL && fast->next->val == 1000)
            {
                fast->next = NULL;
            }
            else
            {
                fast = fast->next;
            }
        }
        temp = temp->next;
        return temp;
    }
};