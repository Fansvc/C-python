#include <stdio.h>
int main()
{
	int a,b;
	printf("����������������");
	scanf("%d %d",&a,&b);
	int max=0;//Ҳ���Զ���Ϊb 
	if(a>b){max=a;}
	else{max=b;}//����Ϊb����п���ʡ�� 
	printf("����Ǹ���%d\n",max);	
}
