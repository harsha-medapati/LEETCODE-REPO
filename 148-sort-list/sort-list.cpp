class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (!head) return nullptr;
        vector<int> v;
        ListNode* temp = head;
        while (temp) {
            v.push_back(temp->val);
            temp = temp->next;
        }
        sort(v.begin(), v.end());
        temp = head;
        for (int val : v) {
            temp->val = val;
            temp = temp->next;
        }
        return head;
    }
};
