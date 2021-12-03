#include<stdio.h>
int main()
{
	float basic,da,ta,hra,others,pf,it,net_salary,DA,TA,HRA,OTHERS,PF,IT;
	printf("enter basic:");
	scanf("%f",&basic);
	printf("enter da:");
	scanf("%f",&da);
	printf("enter ta");
	scanf("%f",&ta);
	printf("enter hra");
	scanf("%f",&hra);
	printf("enter others");
	scanf("%f",&others);
	printf("enter pf");
	scanf("%f",&pf);
	printf("enter it");
	scanf("%f",&it);
	da=basic*da/100;
	ta=basic*ta/100;
	hra=basic*hra/100;
	others=basic*others/100;
	pf=basic*pf/100;
	it=basic*it/100;
	net_salary=(basic+da+ta+hra+others)-(pf+it);
	printf("%0.1f",net_salary);
	return(0);

	}
