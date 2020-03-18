#include<stdio.h>
int main(void)
{
	unsigned char a1=0xa1;
	unsigned char a2=0xe1;
	unsigned char a3;
	unsigned char a4=0xe2;

	int i;
	for(i=1;i<=5;i++)
	{
		   printf("%c%c",a1,a2); 
    }
    printf("\n");
    int a;
	for(a=1;a<=2;a++)
    {
    	for(i=1;i<=2;i++)
	{
		   printf("%c%c",a1,a2);
		   
    }
    printf("\n");
    }
    	for(i=1;i<=5;i++)
	{
		   printf("%c%c",a1,a2);
		   
    }
    
    printf("\n\n");
    int b;
    for(a=1;a<6;a++)
    {
    	for(b=1;b<=a;b++)
    	{
    		printf("%c%c",a1,a4);
		}
		printf("\n");
	}
    
    
    

	
	return 0;
}
