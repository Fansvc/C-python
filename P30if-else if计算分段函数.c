#include <stdio.h>
int main()
{
	int x,f;
	scanf("%d",&x);
	if(x<0){f=-1;}
	else if(x==0){f=0;}//�˴���if�������else��ʵ����һ��else��������ģ���������ʡ����{} 
	else{f=2*x;}
	printf("%d",f);
	return 0;
}
