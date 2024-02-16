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
        ListNode* dummy = new ListNode(); // Use an empty dummy node as a placeholder.
        ListNode* tail = dummy; // Tail pointer for the result list.

        int carry = 0;
        
        while (l1 || l2 || carry) { // Continue if either list has elements or there is a carry.
            int sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10; // Determine new carry.
            sum = sum % 10; // Determine value to store in the current node.

            // Create a new node for the sum and advance the tail.
            tail->next = new ListNode(sum);
            tail = tail->next;
        }

        ListNode* result = dummy->next; // The first real node of the result list.
        delete dummy; // Clean up the dummy node.
        return result; // Return the result list starting from the first real node.
    }
};