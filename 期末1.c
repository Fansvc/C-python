#include<stdio.h>
#define MAXSIZE 100
int DigitNum(char *str);
void main()
{
char str[100];
printf("\n ������һ��������������ĸ���ַ���: \n");
gets(str);
printf("\n ���ַ����к��е����ָ���Ϊ: %d \n", DigitNum(str));
}
int DigitNum(char *str)
{
int i,dn=0;
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='0' && str[i]<='9') dn++;
}
return dn;
}
