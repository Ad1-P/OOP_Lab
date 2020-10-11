#include<stdio.h>

struct student
{
    char name[20],address[20];
    int roll,marks;
};

int main()
{
    int n=0,i=0;
    printf("Enter the number of students:");
    scanf(" %d",&n);
    struct student s[n];

    for(i=0;i<n;i++)
    {
        printf("Enter the details of student.(name,address,roll,markss):\n");
        scanf("%s %s %d %d",s[i].name,s[i].address,&s[i].roll,&s[i].marks);
    }
    printf("\n Name \t Address \t Roll \t Marks\n");
    for(i=0;i<n;i++)
    {
        printf("%s \t %s \t %d \t %d \n",s[i].name,s[i].address,s[i].roll,s[i].marks);
    }
    return 0;
}
