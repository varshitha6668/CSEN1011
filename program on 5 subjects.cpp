#include<stdio.h>
int main ()
{
	int a,b,c,d,e,total,average,percent;
	printf("\nenter a marks:");
	scanf("%d,& a");
	printf("\nenter b marks:");
	scanf("%d,& b");
	printf("\nenter c marks:");
	scanf("%d,& c");
	printf("\nenter d marks:");
	scanf("%d,& d");
	printf("\nenter e marks:");
	scanf("%d,e");
	total=a+b+c+d+e;
	printf("\n total=%d",total);
    average=a+b+c+d+e/5;
	printf("\naverage=%d",average);
	percent=(total/5)*100;
	printf("\n percentage=%d",percent);
}
