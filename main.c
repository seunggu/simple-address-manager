#include "function.h"

int main(int argc, const char * argv[]) {
    
    int menu = 0;
    while (menu != 4) {
        printf("전화번호 관리\n");
        printf("1.등록    2. 전체검색    3. 특정인검색    4.종료\n");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                checkPassword();
                registerAddress();
                break;
                
            case 2:
                printAllAddresses();
                break;
                
            case 3:
                printAddressesOfName();
                break;

            default:
                break;
        }
    }
    
    return 0;
}
