 // Joining all three lists: zeroes, ones, and twos
    zeroestail->next = oneshead->next;
    onestail->next = twoshead->next;
    
    // Extracting the head of the sorted list (zeroes)
    Node* sortedHead = zeroeshead->next;
    
    // Deleting dummy nodes
    delete zeroeshead;
    delete oneshead;
    delete twoshead;
    
    return sortedHead;