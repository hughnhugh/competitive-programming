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
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = nullptr;
        ListNode* h2 = slow->next;
        ListNode* next = nullptr;
        slow->next = nullptr;

        while (h2 != nullptr) {
            next = h2->next;
            h2->next = prev;
            prev = h2;
            h2 = next;
        }

        h2 = prev;
        
        ListNode* h1 = head;
        ListNode* h1Next = nullptr;
        ListNode* h2Next = nullptr;

        while (h1 != nullptr && h2 != nullptr) {
            h1Next = h1->next;
            h1->next = h2;
            h1 = h1Next;

            if (h1 != nullptr) { // Check to avoid placing h2Next when h1 is null
                h2Next = h2->next;
                h2->next = h1;
                h2 = h2Next;
            }
        }
    }
};