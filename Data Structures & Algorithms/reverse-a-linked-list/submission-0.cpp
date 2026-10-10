/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* cur = head;
        // prev    cur
        // ↓       ↓
        // NULL    0 -> 1 -> 2 -> 3 -> NULL
        while(cur != nullptr){
            ListNode* next = cur->next;
            //先把下一個節點存起來
            // prev    cur    next
            // ↓       ↓       ↓
            // NULL     0  ->   1 -> 2 -> 3 -> NULL
            cur->next = prev;
            //把 0 的箭頭反過來
            // prev    cur    next
            // ↓       ↓       ↓
            // NULL <-  0       1 -> 2 -> 3 -> NULL
            prev = cur;
            //prev 移到 0
            //           prev
            //           ↓
            // NULL <-   0       1 -> 2 -> 3 -> NULL
            //                     ↑
            //                     next
            cur = next;
            //cur 移到 1
            //         prev   cur
            //         ↓      ↓
            // NULL <- 0      1 -> 2 -> 3 -> NULL
        }
        return prev;
    }
};
