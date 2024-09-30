//
// Created by Ziyan Xu on 9/28/24.
//
#include <stdio.h>

int main() {

    int a, b;
    int *p1, *p2;

    scanf("%d%d", &a, &b);

    p1 = &a;
    p2 = &b;
    printf("%d\n", *p1); //a的值
    printf("%d\n", *p2); //b的值

    //通过判断，使得p1指向其中的较大值，p2指向其中的较小值

    if( a < b ) {
        int *p = p1; //设一个新的地址变量用于交换，p1,p2都是地址值
        p1 = p2;
        p2 = p;
    }
    printf("%d\n", *p1);
    printf("%d\n", *p2);

}