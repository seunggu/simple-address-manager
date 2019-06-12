#include "function.h"

void printAddressesOfName() {
    char receivedName[100];
    printf("검색할 이름: ");
    scanf("%s", receivedName);
    
    Address* address = getHead();
        
    while (address != NULL) {
        if (strcmp(address -> name, receivedName) == 0) {
            printf("%s %s \n", address -> name, address -> phone);
        }
        address = address -> next;
    }
    printf("\n");
}
