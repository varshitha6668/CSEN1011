#include<stdio.h>


int main()
{
	float p,t,r,si,ci;
	printf("enter principal amount(p):");
	scanf("%f",&p);
	printf("enter time in year (t):");
	scanf("%f", &t);
    printf("enter rate in percent (r): ");
    scanf("%f", &r);
    
    /*calculating simple interest*/
    si= (p* t* r)/100.0;
    
    /* calculating compound interest*/
    ci = p* ((1+r/100,t)- 1);
    
    printf("simple interst = %0.3f\n", si);
    printf("compound interest = %0.3f",ci);
    
    return(0);
}

