 //2.WAP to find greater number among two numbers using the return statement function.
#include<stdio.h>
  //  FUNCTION DECLEARTION
  int greatestnum (int a,int b); 
  
  int main (){
  	
  	 int x,y,z;
   	printf ("enter the num to check gareater:");
   	scanf ("%d %d",&x,&y);
    z= greatestnum(x , y);
    printf("\n the greatest number is %d",z);
    return 0;
  }
   int greatestnum (int a, int b ){
  	if (a > b)
  	return a;
  	else 
  	return b;
  }
