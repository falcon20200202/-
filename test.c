// sport.cpp : Defines the entry point for the console application.
//

// #include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int menu();
void Sum();
void sort();
void csh();//1
void xyskzl();//2
void gxyxxzf();//3
void gxyzfmccx();//4

void gxyzfcx();//5
void gxmhjydyxxxxg();//6
void Add(); //6
int convert(int i);//6

struct Athlete
{
	int num;  //���
	char project[500];  //��Ŀ
	int ranking;  //����
	int score;  //����
};//Ma[10]={{01,1100,1},{02,"tiaoyuan",1},},Wo[10];


struct collage
{
	int num;
	char name[300];  //ѧԺ����
	struct Athlete Ma[10];
	struct Athlete Wo[10];
	int sum;
	int sumM;
	int sumW;
};

struct collage Class[6] =
{
	{1,"dianzigongcheng",
			{{1,"1100",1,7},{3,"��Զ",1,7}},
			{{2,"1100",1,7},{4,"��Զ",1,7}}
	},
	{2,"chuanbo",
			{{5,"1100",3,3},{7,"��Զ",2,5}},
			{{6,"1100",3,3},{8,"��Զ",2,5}}
	},
	{3,"shengmingkexue",
			{{9,"1100",2,5},{11,"��Զ",5,1}},
			{{10,"1100",2,5},{12,"��Զ",5,1}}
	},
	{4,"jidiangongcheng",
			{{13,"1100",4,2},{15,"��Զ",4,2}},
			{{14,"1100",4,2},{16,"��Զ",4,2}}
	},
	{5,"zhonge",
			{{17,"1100",6,0},{19,"��Զ",3,3}},
			{{18,"1100",6,0},{20,"��Զ",3,3}}
	},
	{6,"shuxue",
			{{21,"1100",5,1},{23,"��Զ",6,0}},
			{{22,"1100",5,1},{24,"��Զ",6,0}}
	}

};


int N; //����Ժϵ����
int M; //������������
int W; //����Ů������
int JM = 2; //ÿ��ѧԺ�����˶�Ա
int JW = 2; //ÿ��ѧԺ��Ů�˶�Ա

//char a[6][300]={"dianzigongcheng","chuanbo","shengmingkexue","jidiangongcheng","zhonge","shuxue"};
//int	b[6]={Class[0].sum,Class[1].sum,Class[2].sum,Class[3].sum,Class[4].sum,Class[5].sum};




void main(int argc, char* argv[])
{


	int n = 1, i, j; //n�ǹ������

	for (; n > 0 && n < 7;)
	{


		n = menu();
		switch (n)
		{
		case 1:csh(); break;
		case 2:xyskzl(); break;
		case 3:gxyxxzf(); break;
		case 4:gxyzfmccx(); break;
		case 5:gxyzfcx(); break;
		case 6:gxmhjydyxxxxg(); break;
		}


	}

}

//////////////////////�˵�//////////////////
int menu()   //�˵�
{
	int n;
	system("cls"); //����
	printf("�˶������ϵͳ\n");
	printf("----------------\n");
	printf("1.��ʼ��\n");
	printf("2.ѧԺ��������\n");
	printf("3.��ѧԺ��ϸ�ܷ�\n");
	printf("4.��ѧԺ�ܷ����β�ѯ\n");
	printf("5.��ѧԺ�ֲܷ�ѯ\n");
	printf("6.����Ŀ���˶�Ա��Ϣ�޸�\n");
	printf("7.��������\n");

	printf("���������蹦��ǰ�����:");
	scanf_s("%d", &n);
	for (; n < 0 && n>7;)  //����˵����һ������
	{
		printf("�������������蹦��ǰ����ţ�eg:1");
		scanf_s("%d", &n);
	}

	return n;
}

//////////////////��ʼ��1////////////////
void csh()
{
	printf("���������Ժϵ������");
	scanf_s("%d", &N);
	printf("\n");
	printf("�������������������");
	scanf_s("%d", &N);
	printf("\n");
	printf("���������Ů��������");
	scanf_s("%d", &N);
	printf("\n");

}

//////////////ѧԺ��������2/////////////////
void xyskzl()
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		printf("%s\n", Class[i].name);
		for (j = 0; j < (JM); j++)
		{
			printf("\t%s\n\t%d\t%d\n\t%d\t%d\n", Class[i].Ma[j].project, Class[i].Ma[j].num, Class[i].Ma[j].score, Class[i].Wo[j].num, Class[i].Wo[j].score);
		}

	}
	printf("�����밴1\n");

	scanf_s("%d", &i);
}


//////////////////��ѧԺ�ֲܷ�ѯ3//////////////////////
void gxyxxzf()
{
	int i, c[6], d[6], e[6];
	for (i = 0; i < 6; i++)
	{
		c[i] = Class[i].Ma[0].score + Class[i].Ma[1].score;
		d[i] = Class[i].Wo[0].score + Class[i].Wo[1].score;
		e[i] = c[i] + d[i];
	}
	for (i = 0; i < 6; i++)
	{
		printf("ѧԺ\t�ܷ�\t\t�����ܷ� Ů���ܷ�\n");
		printf("%s\t%d\t%d\t%d\n", Class[i].name, e[i], c[i], d[i]);
	}
	printf("����������1\n");
	scanf_s("%d", &i);
}


////////////////��ѧԺ�ܷ����β�ѯ4///////////
void gxyzfmccx()
{
	int temp, i, j;
	char a[6][20] = { "shuxue","zhonge","jidiangongcheng","chuanbo","shengmingkexue","dianzigongcheng" };

	int c[6], d[6], e[6];
	for (i = 0; i < 6; i++)
	{
		c[i] = Class[i].Ma[0].score + Class[i].Ma[1].score;
		d[i] = Class[i].Wo[0].score + Class[i].Wo[1].score;
		e[i] = c[i] + d[i];
	}

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6 - i; j++)
		{
			if (e[j] > e[j + 1])
			{
				temp = e[j]; e[j] = e[j + 1]; e[j + 1] = temp;
			}
		}
	}
	printf("ѧԺ     �ܷ�\n");
	for (i = 5; i > 0; i--)
	{
		printf("%s\t%d\n", a[i], e[i]);
	}
	printf("����������1\n");
	scanf_s("%d", &i);
}



/////////////////��ѧԺ�ֲܷ�ѯ5/////////////
void gxyzfcx()
{
	int i, n;
	int c[6], d[6], e[6];
	for (i = 0; i < 6; i++)
	{
		c[i] = Class[i].Ma[0].score + Class[i].Ma[1].score;
		d[i] = Class[i].Wo[0].score + Class[i].Wo[1].score;
		e[i] = c[i] + d[i];
	}

	printf("1.���ӹ���\n2.����\n3.������ѧ\n4.���繤��\n5.�ж�\6.��ѧ\n7.����\n");
	printf("���������\n");
	scanf_s("%d", &n);
	for (; n > 0 && n < 7;)
	{
		switch (n)
		{
		case 1:printf("%s\t%d\n", Class[0].name, e[0]); break;
		case 2:printf("%s\t%d\n", Class[1].name, e[1]); break;
		case 3:printf("%s\t%d\n", Class[2].name, e[2]); break;
		case 4:printf("%s\t%d\n", Class[3].name, e[3]); break;
		case 5:printf("%s\t%d\n", Class[4].name, e[4]); break;
		case 6:printf("%s\t%d\n", Class[5].name, e[5]); break;
		}
		printf("1.���ӹ���\n2.����\n3.������ѧ\n4.���繤��\n5.�ж�\6.��ѧ\n7.����\n");
		printf("���������\n");
		scanf_s("%d", &n);
	}
}

///////////����Ŀ���˶�Ա��Ϣ�޸�6///////////////////

void gxmhjydyxxxxg()
{
	int n;
	printf("1.����\n");
	printf("2.ɾ��\n");
	printf("3.����\n");
	printf("���������蹦��ǰ����ţ�\n");
	scanf_s("%d", &n);
	for (; n < 1 && n>3;)
	{
		printf("�������������蹦��ǰ����ţ�eg:1");
		scanf_s("%d", &n);
	}
	switch (n)
	{
	case 1:Add(); break;
		//	case 2:Delete();break;
		//	case 3:Back();break;
	}
}


void Add()  //�˶�Ա��Ϣ����
{
	int i, flag = 1;
	char c, col[200];

	for (; flag == 1;)
	{
		printf("������ѧԺ����\n");
		scanf_s("%s", &col);
		if (!strcmp(col, "dianzigongcheng"))	i = 0;
		else if (!strcmp(col, "chuanbo")) i = 1;
		else if (!strcmp(col, "shengmingkexue")) i = 2;
		else if (!strcmp(col, "jidiangongcheng")) i = 3;
		else if (!strcmp(col, "zhonge")) i = 4;
		else i = 5;

		printf("�����������˶�Ա�Ա�('M'/'W'): \n");
		scanf_s("%s", &c);

		if (c == 'M')
		{
			printf("����Ϣ֮�����ʵ��ո����\n");
			printf("��� ��Ŀ ����\n");
			scanf_s("%d%s%d", &Class[i].Ma[JM].num, Class[i].Ma[JM].project, &c);
			Class[i].Ma[JM].score = convert(Class[i].Ma[JM].ranking);
			JM++;
		}
		else
		{
			printf("����Ϣ֮�����ʵ��ո����\n");
			printf("��� ��Ŀ ����\n");
			scanf_s("%d%s%d", &Class[i].Wo[JW].num, Class[i].Wo[JW].project, &Class[i].Wo[JW].ranking);
			Class[i].Wo[JW].score = convert(Class[i].Wo[JW].ranking);
			JW++;
		}

		printf("�����밴1�������밴0\n");
		scanf_s("%d", &flag);

	}

}

int convert(int i)   //���κͷ���ת��
{
	switch (i)
	{
	case 1:return 7;
	case 2:return 5;
	case 3:return 3;
	case 4:return 2;
	case 5:return 1;
	}
}


void Sum()
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		Class[i].sum = 0; Class[i].sumM = 0; Class[i].sumW = 0;
		for (j = 0; j < (JM); j++)//���ܷ�
		{
			Class[i].sumM += Class[i].Ma[j].score;
		}
		for (j = 0; j < (JW); j++)//Ů�ܷ�
		{
			Class[i].sumW += Class[i].Wo[j].score;
		}
		for (j = 0; j < ((JM)+(JW)); j++)//Ժ�ܷ�
		{
			Class[i].sum = Class[i].sumM + Class[i].sumW;
		}
	}

}


