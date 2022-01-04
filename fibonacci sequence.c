#include<stdio.h>
int main()
{
	int number, i=0,Next,first=0,second=1;
	printf("\n please Enter the range number");
	scanf("%d",&number);
	while(i < number)
	{
		if(i <=1)
		{ 
		Next =1;
	}
	else{
		Next= first+second;
		first=second;
		second=Next;
	}
	i++;
	
	}
	return 0;
}
