//
// Created by Ziyan Xu on 9/27/24.
//
#include <stdio.h>

int main() {
    //定义指针变量（一级指针变量)
    int *p2;
    int *p3, *p4;
    char *p1Char, *p2Char;
    //二级指针变量:指向指针变量的指针变量
    int **p5;

    //指针变量只能存放地址，不能将非地址变量赋给指针变量

    int num = 10;
    printf("num = %d\n", num);
    //%p: 占位符，表示地址， num的地址 需要使用 &num
    printf("&num = %p\n", &num); //会打印出最小地址，也是首地址

    int *p1;
    p1 = &num;
    printf("%p\n", p1); //此时取出的是num的地址值：0x16bd3b424， 与printf("&num = %p\n", &num)相等
    printf("%d\n", *p1); //此时取出的是num的值：10，所有*是取值运算符，与printf("%d\n", *&num)相等

    //不要在给变量赋值前使用此变量，比如：
    int *p6;
    //printf("%p\n", p6); //会生成野指针，无用

    //避免野指针，可以在调用前赋空指针
    p6 = NULL;

    int m = 10, *ptr;
    ptr = &m;
    printf("%d\n", m); //10
    scanf("%d", ptr); // 等价于scanf("%d",&m),给地址指向的位置赋值
    printf("%d\n", m);

    //通过指针变量修改指向内存地址位置上的值

    int i1 = 10;
    int *ptr1 = &i1;
    printf("%d\n", i1);
    *p1 = 20;
    printf("%d\n",i1);

    return 0;
}
