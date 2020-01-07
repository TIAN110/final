#include <stdio.h>
int main()
{
float a,b,c;                                   
printf("请输入两个数：\n");          
scanf("%f%f",&a,&b);                    
c=(a+b)*(a+b);                                    
printf("两数和的平方为：%.2f\n",c);   
}