#include<stdio.h>
struct student
{
    int rollNo;
    char name[30];
    int marks;
};
int main()
{
    struct student s[4];
    for(int i=1; i<=4; i++)
    {
        printf("enter roll of student %d:\n",i);
        scanf("%d",&s[i].rollNo);
        printf("enter name student %d:\n",s[i].rollNo);
        scanf("%s",&s[i].name);
        printf("enter marks student %d:\n",i);
        scanf("%d",&s[i].marks);
    }
    for(int i=1; i<=4; i++)
    {
        printf("roll= %d ",s[i].rollNo);
        printf("name= %s ",s[i].name);
        printf("marks= %d \n",s[i].marks);
    }
}
