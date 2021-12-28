#include<stdio.h>
int swap(int x,int y)
{ 
int d;
d=x;
x=y;
y=d;

}
int main(){
	int a,b;
	printf("before swapping the number\n",a,b);
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf(" after swapping the number \n a=%d,b=%d",a,b);
	
	return 0;
}
