#include<stdio.h>
int num;
struct Person
{
    char name[50];
    int roll;
    float sub1,sub2,sub3;
    double total;
};
int main()
{


    printf("Enter student number of info. : ");
    scanf("%d",&num);
    struct Person person[num];
    for(int i = 0 ; i<num ; i++)
    {

        printf("Input info. for person[%d] : \n",i+1);
        printf("Enter student name : ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter student Roll : ");
        scanf("%d",&person[i].roll);
        printf("Enter student sub1,sub2 & sub3 marks : ");
        scanf("%f%f%f",&person[i].sub1,&person[i].sub2,&person[i].sub3);
        printf("\n");
    }
    for(int j = 0 ; j<num ; j++ )
    {
        printf("Output info. for person[%d] : \n",j+1);
        printf("Student name is : %s\n",person[j].name);
        printf("Student roll is : %d \n",person[j].roll);
        printf("Student Sub(1) , Sub(2) & Sub(3) marks are : %.1f and %.1f  and %.1f\n",person[j].sub1,person[j].sub2,person[j].sub3);
        person[j].total = person[j].sub1 + person[j].sub2 + person[j].sub3;
        printf("Total marks is : %.2lf\n",person[j].total);
        printf("\n");
    }
    int max = person[0].total;
    for(int k = 0 ; k<num ; k++)
    {
        if(max<person[k].total)
        {
            max = person[k].total;
            printf("Name : %s\n",person[k].name);
            break;
        }

    }
    printf("\nMaximum value is : %d\n",max);


    getch();
}
