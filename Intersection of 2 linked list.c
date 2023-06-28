int lengthLinkedList(struct ListNode *head){
    int length = 0;
    struct ListNode *current = head;
    while (current != NULL){
        length++;
        current = current->next;
    }
    return length;
}

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int lengthA = lengthLinkedList(headA), lengthB = lengthLinkedList(headB);
    struct ListNode *intersection = headA,  *currentB = headB;
    if (lengthA > lengthB){
        while (intersection != NULL && lengthA > lengthB){
            intersection = intersection->next;
            lengthA--;
        }
    }
    else if (lengthA < lengthB){
        while (intersection != NULL && lengthA < lengthB){
            currentB = currentB->next;
            lengthB--;
        }
    }
    while (intersection != NULL && currentB != NULL && intersection != currentB){
        intersection = intersection->next;
        currentB = currentB->next;
    }
    return intersection;
}
