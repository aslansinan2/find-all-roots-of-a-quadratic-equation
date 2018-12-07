#include<stdio.h>
#include<math.h>
int main(){
   
   int a;
   int b;
   int c;
   int d;
   int x1,x2,x3;
   printf("enter  a");
   scanf("%d",&a);
   printf("enter  b");
   scanf("%d",&b);
   printf("enter  c");
   scanf("%d",&c);
   d=b*b-4*a*c;
  
   x1=-b+sqrt(d)/(2*a);
   x2=-b-sqrt(d)/(2*a);
   x3=-b/(2*a);
   if(d<0)
      printf("no root:");
    else if(d>0){
    	printf("x1=%d:x2=%d",x1,x2);
	}
	else 
	  printf("%d",x3);
	return 0;
}
