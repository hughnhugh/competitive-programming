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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;

        ListNode* node = head;

        while (node) {
            node = node->next;
            count++;
        }

        node = head;

        if (count == n) return head->next;

        for (int i=0; i<count-n-1; i++) {
            node = node->next;
        }

        // If we're removing the last node
        if (n == 1) {
            node->next = nullptr;
        } else {
            // Skip the node that needs to be removed
            ListNode* next = node->next->next;
            node->next = next;
        }
        
        return head;
    }
};