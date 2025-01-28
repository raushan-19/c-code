#include<stdio.h>
void England()
{
    printf("you are in England\n");
    return ;
}
void Australia()
{
    printf("you are in Australia\n");
    England();//calling England function
    return ;
}
void UAE()
{
    printf("you are in UAE\n");
    Australia();//calling Australia function
    return ;
}
int main()
{
printf("you are in India\n");
    UAE();//calling UAE function
    return 0;
}