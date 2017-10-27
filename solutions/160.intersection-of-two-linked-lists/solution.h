/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if (headA == NULL || headB == NULL) return false;
    int lenA = 0, lenB = 0;
    struct ListNode *tailA = headA, *tailB = headB;
    
    // Intersection or no intersection
    while (tailA->next) {
        tailA = tailA->next;
        lenA++;
    }
    while (tailB->next) {
        tailB = tailB->next;
        lenB++;
    }
    if (tailA != tailB) return NULL;
    
    // Starts from the synchronous point
    if (lenA > lenB) {
        for(int i=0; i<lenA-lenB; i++)
            headA = headA->next;
    }
    else {
        for(int i=0; i<lenB-lenA; i++)
            headB = headB->next;        
    }
    
    // It's time for intersection!
    while (headA != headB) {
        headA = headA->next;
        headB = headB->next;
    }
    return headA;
}