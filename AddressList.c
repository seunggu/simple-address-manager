#include "function.h"

static Address* head = NULL;
                          
Address* getHead(void) {
    return head;
}

Address* getLastAddress(void) {
    if (head == NULL) {
        return NULL;
    }
    
    Address * address = head;
    while (1) {
        if ((address -> next) == NULL) {
            break;
        }
        address = address -> next;
    }
    return address;
}

void push(Address * address) {
    if (head == NULL) {
        head = address;
    } else {
        Address * lastAddress = getLastAddress();
        lastAddress -> next = address;
    }
}
