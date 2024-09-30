#include <stdio.h>
//
// Created by Ziyan Xu on 9/28/24.
//
int main() {
    int arr[5] = {1,2,3,4,5};
    int *p = &arr[1];

    printf("%p\n", p); //0x16bb3f434
    printf("%d\n", *p); //2
    //地址值可以加减，但只有指向连续的同类型数据区域，指针加，减整数才有实际意义
    printf("%p\n", p+1); //0x16bb3f438 原地址值加四（一个数字四个字节）
    printf("%p\n", p-1); //0x16bb3f430 原地址值减四

    printf("%d\n", *(p+1)); //新地址值取值，得3
    printf("%d\n", *(p-1)); //新地址值取值，得1

}