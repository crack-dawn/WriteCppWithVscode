/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：规定输入的字符串中只包含字母和*号。编写函数fun，其功能是：除了字符串前导
      和尾部的*号外，将串中其它的*号全部删除。形参h已指向字符串中第一个字母，
      形参p指向字符串的中最后一个字母。在编写函数时，不得使用C语言提供的字符
      串函数。

例如：若字符串中的内容为****A*BC*DEF*G*******，删除后，字符串中的内容应当是：
      ****ABCDEFG********。在编写函数时，不得使用C语言提供的字符串函数。

注意：请勿改动主函数main和其它函数中的任何内容，仅在函数fun的花括号中填入
      你编写的若干语句。

-------------------------------------------------------*/

#include <stdio.h>
//        数据       第一个位置 最后
int  fun( char *a, char *h,char *p )
{
/**********Program**********/
	int i, k = p-h;
	while (*a=='*') a++;
	for (i = 0; i < k ;i++) {
                
		if (*h!='*') {
			*a = *h;
			a++;
		}
		 h++;
	}
	
	while (*p!='\0') {
		*a = *p;
		a++;
		p++;
}
*a = '\0';

/**********  End  **********/
}

int main()
{  
        char  s[81],*t, *f;
   
        printf("Enter a string:\n");
        gets(s);
        t=f=s;
        while(*t)
                t++;
        t--;
        while(*t=='*')
                t--; //最后一个数据位置

        while(*f=='*')//第一个数据位置
                f++;


        fun( s , f , t );

        printf("The string after deleted:\n");
        puts(s);		
}
