#include<stdio.h>
int main(){      //��Щ���࣬�Ժ������������Ż�
    int n,i=0,j,tmp,count,max=0;
    scanf("%d",&n);
    if (n==1){      
        scanf("%d",&tmp);
        printf("%d 1\n",tmp);
        return 0;
    }
    int s[n+1],l[n+1];   //s[]�洢�������±��ʾ�����˶��ٴΣ����Ӧ�ĳ�����ô��ε�����ֵ
    while(n>=1){
        count=1;
        scanf("%d",&tmp);
        l[i++]=tmp;        //l[]�洢���������ֵ���±��0��ʼ
        for(j=0;j<i-1;j++){    
            if (tmp==l[j]){
                s[++count]=tmp;   //�±��2��ʼ����ΪĿ������Ψһ������ѭ��ʱ���ᵽs[max],�������±����洢��ֵ�Ŀռ�
            }
        }
        if(count>max){
            max=count;   //����max
        }
        n--;
    }
    printf("%d %d\n",s[max],max);
    return 0;
}
