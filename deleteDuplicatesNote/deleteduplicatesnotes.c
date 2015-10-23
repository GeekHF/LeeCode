/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *p = head;
    while(p && p->next){
       struct ListNode *p2 = p->next;
        while(p2 && p->val == p2->val){
            p->next = p2->next;
            p2 = p2->next;
        }
        p = p->next;
    }
    return head;
}