#include "function.h"

static char * password = "qwer1234";

void checkPassword(void) {
    
    int isCorrect = 0;
    int tryCount = 0;
    
    while (isCorrect == 0) {
        // 비밀번호 받기
        char receivedPassword[100];
        
        if (tryCount == 0) {
            printf("비밀번호: ");
        } else if (tryCount < 3) {
            printf("비밀번호(%d회실패): ", tryCount);
        } else {
            printf("비밀번호(3회실패): 등록할 수 없음!\n");
            exit(0);
        }
        
        
        scanf("%s", receivedPassword);
        
        // 비밀번호 비교
        if (strcmp(password, receivedPassword) == 0) {
            isCorrect = 1;
        } else {
            tryCount += 1;
        }
    }
}
