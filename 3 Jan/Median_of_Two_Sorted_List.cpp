/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* ptr1 = list1;
    struct ListNode* ptr2 = list2;
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temp = dummy;
    dummy->next = NULL; 

    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->val < ptr2->val) {
            temp->next = ptr1;
            ptr1 = ptr1->next;
        } else {
            temp->next = ptr2;
            ptr2 = ptr2->next;
        }
        temp = temp->next;
    }

    if (ptr1 != NULL) {
        temp->next = ptr1;
    } else {
        temp->next = ptr2;
    }
    struct ListNode* mergedList = dummy->next;
    return mergedList;
}
