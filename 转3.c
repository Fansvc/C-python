#include<stdio.h>
struct student{//����һ���ṹ��ֱ����ѧ��������������Ա�ķ���
    int num;
    char name[10];
    int s[3];
   double ave;
};
int main()
{  struct student a[1000];//���齫�տռ䶨��Ĵ�һЩ��������ɿռ䴢�治��
  int n,i,j;
 int sum=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d %s %d %d %d",&a[i].num,&a[i].name,&a[i].s[0],&a[i].s[1],&a[i].s[2]);
     sum=a[i].s[0]+a[i].s[1]+a[i].s[2];//���
 a[i].ave=(sum*1.0)/3;//����������ƽ����
 }
 struct student t;//�ṹ����Ҫһ��
 for(i=0;i<n-1;i++)
 {
     for(j=0;j<n-i-1;j++)
     {
     if(a[j].ave<a[j+1].ave)
      {
     t=a[j+1];
     a[j+1]=a[j];
     a[j]=t;
        }
     }
 }
 printf("-----���-----\n"); 
     for(i=0;i<n;i++){
      printf("%d,%s,%.2lf\n",a[i].num,a[i].name,a[i].ave);//�ֱ����ѧ�ţ��������Լ�ƽ���ɼ�
      }
        return 0;
  }
