#include <stdio.h>
typedef struct
{
int num;
char name;
char sex;
char addr[20];
}STUD;
void main()
{
printf("char:%d\n", sizeof(char));
printf("int:%d\n", sizeof(int));
printf("float:%d\n", sizeof(float));
printf("double:%d\n", sizeof(double));
printf("STUD:%d\n", sizeof(STUD));
// ������ֱ�Ӽ�������־�����
}
