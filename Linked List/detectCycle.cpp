//detect the cycle present in the linked list and return the strating element of the cycle


  //Definition for singly-linked list.
  struct ListNode {
     int val;
     ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
 };

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head || !head->next) {
            return nullptr;  // No cycle if the list is empty or has only one node.
        }

        ListNode* slow = head;
        ListNode* fast = head;

        // Phase 1: Determine if a cycle exists.
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;       // Move slow by 1 step.
            fast = fast->next->next; // Move fast by 2 steps.

            // If slow and fast meet, a cycle is detected.
            if (slow == fast) {
                
                // Phase 2: Find the start of the cycle.
                ListNode* start = head;

                while (start != slow) {
                    start = start->next;
                    slow = slow->next;
                }

                return start; // The start of the cycle.
            }
        }

        return nullptr;
    }
};