#include<stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include<windows.h>
int a,b,c,d,e,f;
struct worker
{
char num[10];
char name[30];
int gwgz;
int xjsz;
int zwjt;
int xjgz;
int yfgz;
int grsds;
int salary;
};
int dq(struct worker wo[]);
void show();
void bc(struct worker wo[]);
void read(struct worker *wo);
void write();
void find();
void list();
void modify();
void del();
void add(); 
void grads();
void ghcz();
void xmcz();
void xmsc();
void ghsc();
void statistics();
void ghxg(); 
void xmxg();
void back();
struct worker wo[100]; //�������е�ְ����Ϣ
int Number=0; //��¼�ܵ�ְ������
int i,j,n,m,sum[100],num[100],p=0; 
int score[100][20],lower,maxer,temp=0; 
void show()
{ 
printf("\n");
printf("\t���ʹ���ϵͳ \n\n");
printf("\t\n\n");
printf("\t1. ����ְ����Ϣ\n");
printf("\t2. �޸�ְ����Ϣ\n");
printf("\t3. ���ְ����Ϣ\n");
printf("\t4. ɾ��ְ����Ϣ\n");
printf("\t5. �� ��  �� ��\n");
printf("\t6. Ԥ��\n");
printf("\t0. �� �� ϵ ͳ \n");
printf("\t\n");
}
void read(struct worker *wo)
{
FILE *fp=NULL;
fp=fopen("gx.dat","wb+");
fread(wo,sizeof(struct worker),1,fp);
while(i<Number)
{
printf("\t%s\t%s\t%d\n",wo[i].num,wo[i].name,wo[i].salary);
}
fclose(fp);
}

void bc(struct worker *wo)
{
FILE *fp=NULL;
fp=fopen("gx.dat","wb+");
fwrite(wo,sizeof(struct worker),1,fp);
fclose(fp);
}
//���ְ����Ϣ
void add() 
{
int numberTemp=0;
int i=0;
struct worker temp; 
printf("������Ҫ���ְ��������");
scanf("%d",&numberTemp);
for(i=0;i<numberTemp;i++)
{
printf("�����%d��ְ����Ϣ\n",i+1);
printf("���ţ�");
scanf("%s",temp.num);
printf("������");
scanf("%s",temp.name);
printf("ʵ�����ʣ�");
scanf("%d",&temp.salary);
wo[Number++]=temp; //д�뵽����
bc(&temp); //д�뵽�ļ�
}
printf("��ӳɹ�\n");
}
//�޸ĳ�Ա����
void modify()
{

}
//�鿴ְ����Ϣ
void list() 
{
int i=0;
printf("������ȫ��ְ��\n");
printf("\t����\t����\t��������\n");
while(i<Number)
{
printf("\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",wo[i].num,wo[i].name,wo[i].gwgz,wo[i].xjsz,wo[i].zwjt,wo[i].xjgz,wo[i].yfgz,wo[i].grsds,wo[i].salary);
i++;
}
}
//����ְ����Ϣ
void find() 
{
int n=0;
printf("1 ����������\n");
printf("2 �����Ų���\n"); 
scanf("%d",&n);
switch(n)
{
case 1: xmcz();
break;
case 2: ghcz();
break;
default: printf("�������!\n");
break;
} 
}
void xmcz()//���������� 
{ 

}
void ghcz()//�����Ų��� 
{
}
//ɾ��ְ����Ϣ
void del() 
{
int n=0;
printf("1 ������ɾ��\n");
printf("2 ������ɾ��\n");
scanf("%d",&n);
switch(n)
{
case 1: xmsc();
break;
case 2: ghsc();
break;
}
}
void xmsc()//������ɾ�� 
{
}
void ghsc()//������ɾ�� 
{


}
//ͳ��ְ������
void statistics() 
{
int i=0;
double s=0.0;
double sum[100];
for(i=0;i<Number;i++)
{
sum[i]=wo[i].salary;
printf("%s���ܹ���Ϊ��%f\n",wo[i].name,sum[i]);
}
for(i=0;i<Number;i++)
{
s+=sum[i];
}
printf("ƽ������Ϊ��%f\n",s/Number); 
} 
//void list()
//��������
void write()
{
printf("\t=====����������ʱ���Զ�����.....\n");
}
void back()
{
printf("\t===>��Enter���������˵�\n");
}
void system()
{
int choose=0;
while(1) 
{ 
show();
printf("\t\t====>��ѡ����Ҫ�����£�");
scanf("%d",&choose);
system("cls");
switch(choose)
{
case 1: find();
back();// ����ְ����Ϣ 
break;
 case 2: modify();
back();//�޸�ְ����Ϣ
case 3: add();
back();//���ְ����Ϣ
break; 
case 4: del(); 
back();//ɾ��ְ����Ϣ
break;
case 5:write();
back();//�������� 
break;
case 6: list();
back();//Ԥ��
break; 
case 7: statistics();
back();//ͳ��ְ������
break;
case 0: exit(0);//�˳�
break;
break;
default:
break;
}
fflush(stdin);
getchar();
system("cls");
}
}

void menu(void)
{
	char ch;
	while(1)
	{
	   printf("\n");
printf("\t ��ӭʹ�ñ�ϵͳ \n\n");
printf("\t��ѡ���� ������1~7��\n");
printf("\t\n");
printf("\t1. ���ʹ���ϵͳ \n");
printf("\t2. �� �� ϵ ͳ \n");
printf("\t\n");
	   ch=getch();fflush(stdin);
	   switch(ch)
	   {
		   case '1':system();break;
		   case '2':exit(0);
	   }
	}


}

void main(void)
{
	menu();
}