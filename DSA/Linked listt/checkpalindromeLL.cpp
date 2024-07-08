/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x, next) {}
 * };
 */
class Solution {
public:
    // Helper function to reverse a linked list
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return true;
        }

        // Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // If the list has an odd number of elements, move slow one step further
        if (fast != nullptr) {
            slow = slow->next;
        }

        // Reverse the second half of the list starting from slow
        ListNode* secondHalfStart = reverse(slow);

        // Compare the first half with the reversed second half
        ListNode* firstHalfStart = head;
        ListNode* secondHalfCurrent = secondHalfStart;
        bool isPalindrome = true;
        while (secondHalfCurrent != nullptr) {
            if (firstHalfStart->val != secondHalfCurrent->val) {
                isPalindrome = false;
                break;
            }
            firstHalfStart = firstHalfStart->next;
            secondHalfCurrent = secondHalfCurrent->next;
        }



        return isPalindrome;
    }
};
