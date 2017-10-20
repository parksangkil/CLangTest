//
// Created by netive on 2017. 10. 19..
//
#include <stdio.h>
#include <stdlib.h>

void main17() {
    /*short data = 3;
    short *p = &data;
    short **pp = &p;

    printf("[Before ] data : %d\n", data);

    *p = 4;
    printf("[Use *p ] data : %d\n", data);

    **pp = 5;
    printf("[Use **pp ] data : %d\n", data);*/

    /*short **pp, data = 3;
    //int my_ptr = (int)&data;
    //pp = (short **)&my_ptr;
    pp = (short **)malloc(sizeof(short *));
    *pp = &data;
    **pp = 5;
    printf("[Use **pp ] data : %d\n", data);*/

    short **pp;
    pp = (short **)malloc(sizeof(short *));
    *pp = (short *)malloc(sizeof(short));

    **pp = 10;
    printf("**pp : %d\n", **pp);
    free(*pp);
    free(pp);
}