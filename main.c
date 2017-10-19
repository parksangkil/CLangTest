#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int Sum(int, int);

void Sum(int, int);
int result;

void Test(short *ptr) {
    //int result = 5;
    //result++;

    short soft = 0;
    soft = *ptr;
    *ptr = 3;
}

void Swap(int * const pa, int * const pb) {
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main1(void) {

    //print(" Hello, World!\n");
    //printf("%d", key);

    /*char key = 'A' + 1;
    short int num = 0xA;
    printf("%d", Sum(1,2));

    putchar('H');
    putchar('I');
    putchar('~');

    puts("Test");

    float value;
    value = 2.1f;
    printf("%f, %d", value, value);

    char data = -1;
    printf("%d, %u", data, data); */

    /*int data1 = 10;
    int data2 = 010;
    int data3 = 0x10;

    printf("%x, %d, %o", data1, data2, data3);*/

    /*float data = 12.34f;
    printf("%f, %e, %E", data, data, data);*/

    /*int data = 5, result = 0;

    result = result-- || (data = 0);
    //result--;

    printf("result = %d, data = %d ", result, data);*/

    /*char grade = 'A';
    printf("grade = %d", grade);*/

    /*int sum = 0;
    int num = 1;

    //while (num <= 5) {
    while (1) {
        //for (;;) {
        printf("num(%d) + sum(%d) = ", num, sum);
        sum = sum + num;
        printf("%d\n", sum);
        num++;
        if (num > 5) break;
        //}
    }
    printf("Result : num = %d sum = %d\n", num, sum);*/

    /*unsigned char data = 0x1A;
    printf("%d\n", data);
    data = data >> 2;
    printf("%d", data);*/

    /*Sum(5, 3);
    printf("5 + 3 = %d\n", result);*/

    /*Test();
    printf("result : %d", result);*/

    /*int count = 20;
    short student[count];
    student[1] = 10;

    //printf("%d\n", student[1]);

    for (int i = 0; i < 20; i++) {
        student[i] = 0;
        printf("%d = %d\n", i, student[i]);
    }*/

    /*char data[6] = {'h', 'a', 'p', 'p', 'y', 0};
    //char data[6] = "happy";
    printf("%s\n", data);

    int dataLen = strlen(data);
    printf("%d\n", dataLen);*/

    /*char data[12] = {0, 0, 2, 0 , 1, 1, 0, 0, 2, 1, 0, 2};
    int i, x, y;

    for (i=0; i < 12; i++) {
        x = i % 4 + 1;
        y = i / 4 + 1;
        printf("%d행 %d열\n", x, y);
    }*/

    /*short data[9] = {4, 6, 9, 8, 7, 2, 5, 1, 3};
    int cnt, x, y;
    int sum, maxValue = 0;
    int size = sizeof(data) / sizeof(short);

    for (cnt = 0; cnt < size; cnt++) {
        //printf("%d 번째 값 : %d\n", cnt, data[cnt]);

        //x = cnt % 3 + 1;
        //y = cnt / 3 + 1;
        if ( cnt % 2 == 0 ) {
            sum = sum + data[cnt];
        }

        if ( maxValue < data[cnt]) {
            maxValue = data[cnt];
        }
        //printf("%d행 %d열 값 : %d\n", x, y, data[cnt]);

    }

    printf("짝수 배열 합계 = %d\n", sum);
    printf("가장 큰 값 = %d\n", maxValue);*/

    /*short birthday;
    short *ptr;
    ptr = &birthday;
    *ptr = 0x0412;

    printf("birthday 변수의 주소는 %p입니다. 값은 %d입니다.\n", ptr, birthday);*/

    /*short tips = 5;
    Test(&tips);
    printf("tips 변수의 값은 %d입니다.\n", tips);*/

    /*int start = 96, end = 5;
    printf("before : start = %d, end = %d\n", start, end);
    if (start > end) {
        Swap(&start, &end);
    }
    printf("after : start = %d, end = %d\n", start, end);*/

    /*int data = 0x12345678, i;
    char *p = (char *)&data;

    for (i = 0; i < 4; i++) {
        printf("%X," , *(p + i));
        //p++;
    };

    void *p1 = &data;
    *(int *)p1 = 5;
    printf("data 변수의 주소는 %p입니다. 값은 %d입니다.\n", p1, data);*/

    /*char a = 0x12, b = 0x34;
    short c = 0x5678;

    int t;

    int *p = &t;
    *(int *)p = 0x12345678;

    printf("t 값은 %X", t);*/

   /* int input_data = getchar();
    //getchar();
    rewind(stdin);
    printf("first input : %c\n", input_data);

    input_data = getchar();
    //getchar();
    rewind(stdin);
    printf("second input : %c\n", input_data); */

    /*char input_string[10];
    gets(input_string);
    printf("input : %s\n", input_string);*/

    //printf("input : %d\n", atoi("12345"));

    //char data[4];
    //char *p = data;

    /*char *p = (char *)malloc(32);
    if ( NULL != p ) {
        //
        printf("Your name : ");
        gets(p);
        printf("Hi~~ %s\n", p);
        free(p);
    } else {
        printf("Memory allocation error!");
    }*/

    int data_size = 3;
    //int data[data_size];
    int *p = (int *)malloc(data_size);

    return 0;
}

/*int Sum(int value1, int value2) {
    return value1 + value2;
}*/
