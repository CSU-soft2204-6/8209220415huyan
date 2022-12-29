﻿#include<stdio.h>
int main()
{
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    printf("请输入一串任意的字符：\n");
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if (c == ' ')
            spaces++;
        else
            others++;
    }
    printf("字母有%d个，数字有%d个，空格有%d个，其他有%d个", letters, digits, spaces, others);
    return 0;
}
