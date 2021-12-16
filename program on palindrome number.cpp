#include<stdio.h>
int main()
{
	int n,r=0,rev,temp;
	printf("enter a number");
	scanf("%d,&n");
	temp=n;
	while (n!=0){
		rev=n%10;
		r=(r*10)+rev;
		n=n/10;
	}
if(temp=r){
	printf("palindrome number");
}
else{
	printf("not a palindrome");
}
printf("%d",r);
return 0;
}
