#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int multiplier = 1;

        ListNode* dummy = new ListNode(0);
        ListNode* node = dummy;

        bool carry = false;
        
        while (l1 || l2) {
            int sum = carry;
            if (l1) sum += l1->val;
            if (l2) sum += l2->val;

            if (sum > 9) carry = true;
            else carry = false;

            sum %= 10;
            node->val = sum;

            if ((l1 && l1->next) || (l2 && l2->next) || carry) {
                node->next = new ListNode(1);
                node = node->next;
            }

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummy;
    }
};