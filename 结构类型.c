#include <stdio.h>

int main()
{
	struct date{//����һ�ֽṹ���� 
		int month;
		int day;
		int year;
	};
	
	struct date today;//����һ�����ֽṹ���͵ı��� 
	
	today.month=07;
	today.day=31;
	today.year=2014;
	
	printf("Today's date is %i-%i-%i.\n",today.year,today.month,today.day);
	return 0;
	 
 } 
