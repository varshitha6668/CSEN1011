#include<stdio.h>
int main()
{
	int n,c=1,s,i,j;
	printf("enter the number of n:");
	scanf("%d",&n);
for(i=0;i<n;i++){
	
	for(s=1;s<=n-i;s++)
	printf(" ");
	for(j=0;j<=i;j++)
			{
			if(j==0||i==0){
				c=1;
			}
			else{
		c = c*(i-j+1)/j;}
		
			printf("%d ",c);
			}
		printf("\n");
		}
return 0;
}
