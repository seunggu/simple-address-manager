#include "function.h"

void registerAddress (void) {
    char receivedName[100];
    char receivedPhone[100];

    printf("등록할 이름: ");
    scanf("%s", receivedName);
    printf("전화번호: ");
    scanf("%s", receivedPhone);

    Address * newAddress = (Address *)malloc(sizeof(Address));
    strcpy(newAddress -> name, receivedName);
    strcpy(newAddress -> phone, receivedPhone);
    push(newAddress);

    printf("%s 정보 등록 완료!\n\n", receivedName);
}
