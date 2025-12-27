class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;
        ListNode* temp = head;
        int c = 0;
        while(temp != NULL)
        {
            c++;
            temp = temp->next;
        }   
        if(n == c) return head->next;     
        temp = head;
        n = c-n;
        c = 0;
        while(c < n-1)
        {
            temp = temp->next;
            c++;
        }
        if(temp != NULL && temp->next != NULL)
        {
            temp->next = temp->next->next;
        }
        return head;
    }
};