//
// Created by netive on 2017. 10. 20..
//
#include <stdio.h>

typedef unsigned short int US;
typedef int MY_DATA[5];

struct People {
    char name[12];
    unsigned short int age;
    float height;
    float weight;
};

typedef struct People Person;

void main180101() {
    /*unsigned short int data = 5;
    US temp;

    temp = data;
    printf("temp = %d\n", temp);*/

    struct People data = {"홍길동", 20, 20.1, 20.2};
    printf("이름은 = %s\n", data.name);
    Person friend_list[64];
    struct People *p;

    data.age = 47;
    friend_list[0].age = 23;

}

