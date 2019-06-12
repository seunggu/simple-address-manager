#include "function.h"

void printAllAddresses() {
    Address* address = getHead();
    
    printf("<< 전화번호목록 >>\n");
    while (address != NULL) {
        printf("%s %s \n", address -> name, address -> phone);
        address = address -> next;
    }
    printf("\n");
}
