#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

  class Solution {
    public:
    ListNode* deleteMiddle(ListNode* head) {
        // If the list is empty or has only one node, return nullptr
        if (head == nullptr || head->next == nullptr) {
            delete head; // Free the memory of the head node if it's the only node
            return nullptr;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        // Use the two-pointer technique to find the middle node
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Now 'slow' is pointing to the middle node, and 'prev' is the node before it
        prev->next = slow->next; // Skip the middle node
        delete slow; // Free the memory of the middle node

        return head;
    }
};