#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <stddef.h>
#include <locale.h>
 
int main(void)
{
    int i, j;
    float x, y;
    char str1[10], str2[4];
    wchar_t warr[2];
    setlocale(LC_ALL, "en_US.utf8");
 
    char input[] = "25 54.32E-1 Thompson 56789 0123 56ß水";
    /* 按下列分析：
       %d ：整数
       %f ：浮点值
       %9s ：最多有 9 个非空白符的字符串
       %2d ： 2 位的整数（数位 5 和 6 ）
       %f ：浮点值（数位 7 、 8 、 9）
       %*d ：不存储于任何位置的整数
       ' ' ：所有连续空白符
       %3[0-9] ：至多有 3 个十进制数字的字符串（数位 5 和 6 ）
       %2lc ：二个宽字符，使用多字节到宽转换  */
    int ret = sscanf(input, "%d%f%9s%2d%f%*d %3[0-9]%2lc",
                     &i, &x, str1, &j, &y, str2, warr);
 
    printf("Converted %d fields:\ni = %d\nx = %f\nstr1 = %s\n"
           "j = %d\ny = %f\nstr2 = %s\n"
           "warr[0] = U+%x warr[1] = U+%x\n",
           ret, i, x, str1, j, y, str2, warr[0], warr[1]);
 
#ifdef __STDC_LIB_EXT1__
    int n = sscanf_s(input, "%d%f%s", &i, &x, str1, (rsize_t)sizeof str1);
    // 写 25 到 i ， 5.432 到 x ， 9 个字节 "thompson\0" 到 str1 ，和 3 到 n 。
#endif
}


