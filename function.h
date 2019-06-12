//
//  main.h
//  c-prac
//
//  Created by seunggu on 12/06/2019.
//  Copyright © 2019 seunggu. All rights reserved.
//

#ifndef main_h
#define main_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _address {
    char name[100];
    char phone[100];
    struct _address * next;
} Address;

void checkPassword(void);

// 주소 리스트 헤드 가져오기
Address* getHead(void);

// 주소 리스트에서 마지막 주소 가져오기
Address* getLastAddress(void);

// 주소 리스트에 주소 추가
void push(Address * address);

// 주소 등록하기
void registerAddress (void);

// 모든 주소 출력하기
void printAllAddresses(void);

// 해당 이름을 가진 주소 출력하기
void printAddressesOfName(void);

#endif /* main_h */
