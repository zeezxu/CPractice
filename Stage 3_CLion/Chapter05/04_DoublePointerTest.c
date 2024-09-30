//
// Created by Ziyan Xu on 9/29/24.
//
//二级指针：指向一级指针的指针

#include <stdio.h>

int main() {


    int a = 10;
    int *p1 = &a;
    //错误方式
    // int *p2 = &p1;
    //正确方式
    int **p2 = &p1;

    printf("%p\n", p1);
    printf("%p\n", &p1);
    printf("%p\n", p2);

    return 0;
}



