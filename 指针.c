//#include <stdio.>
//#include <string.h>

//利用指针数组对数据进行排序:
//int main(void)
//{
//	char* ch[3] = { "luotianyu","tangxin","bukeneng" };
//	int m = 3;
//	void rade(char *ch[],int m);
//	void print(char* ch[],int m);
//	rade(ch,m);
//	print(ch,m);
//	return 0;
//}
//void rade(char* ch[], int m)
//{
//	int i;
//	int j;
//	int k;
//	char* p = NULL;
//	for (i = 0; i < m - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < m; j++)
//		{
//			if (strcmp(ch[k], ch[j]) > 0)
//			{
//				k = j;
//			}
//			if (k != i)
//			{
//				p = ch[i];
//				ch[i] = ch[j];
//				ch[j] = p;
//			}
//		}
//	}
//}
//void print(char* ch[], int m)
//{
//	int i;
//	for (i = 0; i < m ; i++)
//	{
//		printf("%s\n", ch[i]);
//	}
//}



//用指向指针的指针来处理数组

//int main(void)
//{
//	char* ch1[] = { "sdajkl","fadfda","fadfadf" };
//	char** p;
//	int i;
//	p = ch1;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", *(p + i));
//	}
//
//	return 0;
//}



//用命令行的参数形式运行程序

//void main(int argc, char* argv[])
//{
//	while (argc>1)
//	{
//		++argv;
//		printf("%s\n", *argv);
//		--argc;
//	}
//}
//DOS命令下运行


//写程序代替STRCMP:

//#include <stdio.h>
//int strlen_my(char* a)
//{
//	int n = 0;
//	while (*(a++) != 0)
//	{
//		n++;
//	}
//	return n+1;
//}
//char* p(char* a, int m)
//{
//	char* c=NULL;
//	if (m < strlen_my(a))
//	{
//		c = a + m - 1;
//	}
//	return c;
//}
//int context(char* c, char* d)
//{
//	if (*c > *d)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main(void)
//{
//	char a[] = "woshinibaba";
//	char b[] = "tangxin";
//	char* p1;
//	char* p2;
//	char* c, * d, * f;
//	int e;
//	p1 = a;
//	p2 = b;
//	c= p(a,1);
//	d = p(b, 1);
//	printf("%c\n", *c);
//	printf("%c\n", *d);
//	e = context(c, d);
//	if (e == 1)
//	{
//		printf("%s>>>>>> %s", a, b);
//	}
//	else
//	{
//		printf("%s<<<<<< %s", a,b);
//	}
//	return 0;
//    
//}


//改进:
//#include <stdio.h>
//int strlen_my(char* a)
//{
//	int n = 0;
//	while (*(a++) != 0)
//	{
//		n++;
//	}
//	return n + 1;
//}
//char* p(char* a, int m)
//{
//	char* c = NULL;
//	if (m < strlen_my(a))
//	{
//		c = a + m - 1;
//	}
//	return c;
//}
//int context(char* c, char* d)
//{
//	if (*c > *d)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main(void)
//{
//	char a[] = "woshinibaba";
//	char b[] = "tangxin";
//	char* p1;
//	char* p2;
//	char* c, * d, * f;
//	int e;
//	p1 = a;
//	p2 = b;
//	c = p(a, 1);
//	d = p(b, 1);
//	printf("%c\n", *c);
//	printf("%c\n", *d);
//	e = context(c, d);
//	if (e == 1)
//	{
//		printf("%s>>>>>> %s", a, b);
//	}
//	else
//	{
//		printf("%s<<<<<< %s", a, b);
//	}
//	return 0;
//}

//#include <stdio.h>
//#define n 5
//void change(int **p,int m)
//{
//	int i = 0;
//	int j = 0;
//	int temp=0;
//	
//	for (i = 0; i < m-1; i++)
//	{
//		
//		for (j = i+1; j < m; j++)
//		{
//			if (**(p+i) > **(p+j))
//			{
//				temp = **(p + j);
//				**(p + j) = **(p + i);
//				**(p + i) = temp;
//			}
//			
//		}
//	}
//}
//int main(void)
//{
//	int a[5] = { 0 };
//	int* p[5] = {&a[0],&a[1],&a[2],&a[3],&a[4]};
//	int** p1=p;
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		scanf_s("%d", a+i);
//	}
//	change(p, 5);
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//
//		printf("%d\n", **(p1+i));
//	}
//	
//	return 0;
//}



//结构体吧(赋初值)

//#include <stdio.h>
//int main(void)
//{
//	struct student
//	{
//		char name[20];
//		int age;
//		char sex;
//	}stu = {"luo tian yu",10,'N'};
//	printf("%s\n", stu.name);
//	printf("%d\n", stu.age);
//	printf("%c\n", stu.sex);
//	return 0;
//}

//结构体相关习题
//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	
//	struct student
//	{
//		int id;
//		char name;
//		int grade;
//	}stu1 = {101,"luotianyu",69},stu2;
//	scanf_s("%c", &stu1.name);
//	stu2 = stu1;
//	
//	/*printf("PLEASE ENTER：");
//	scanf_s("%s%s%d", &stu2.id, &stu2.name, &stu2.grade);*/
//	//if (stu1.grade >= stu2.grade)
//	//{
//	//	if (stu1.grade > stu2.grade)
//	//		printf("ID:%s\nName:%s\nGrade:%d\n", stu1.id,stu1.name, stu1.grade);
//	//	else
//	//	{
//	//		printf("ID:%s\nName:%s\nGrade:%d\n", stu1.id,stu1.name, stu1.grade);
//	//		printf("ID:%s\nName:%s\nGrade:%d\n", stu2.id,stu2.name, stu2.grade);
//	//	}
//	//}
//	//else
//	//{
//	//	printf("ID:%s\nName:%s\nGrade:%d\n", stu2.id,stu2.name, stu2.grade);
//
//
//	//}
//	//	
//	printf("ID:%d\nName:%c\nGrade:%d\n", stu1.id, stu1.name, stu1.grade);
//	printf("ID:%d\nName:%c\nGrade:%d\n", stu2.id, stu2.name, stu2.grade);
//	return 0;
//}

#include <stdio.h>
#include <string.h>
struct people
{
	char name;
	int grade;
}peo[2] = { {'l',0},{'T',0} };
int main(void)
{
	int i, j;
	char peo_name;
	for (i = 0; i < 5; i++)
	{
		printf("请输入你支持的人姓名:");
		scanf_s("%c", &peo_name);
		for (j = 0; j < 2; j++)
		{
			if (peo_name== peo[j].name)
			{
				peo[j].grade++;
				break;
			}
		}
		
	}
	for (i = 0; i < 2; i++)
	{
		printf("name:%c\ngrade:%d\n", peo[i].name, peo[i].grade);
	}
	
	
	return 0;
}