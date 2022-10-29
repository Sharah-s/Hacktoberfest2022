
#include<stdio.h>
#include<conio.h>

int main()
{
	 int n, a=0, b=1, next, i;
	 clrscr();
	 printf("Enter how many terms? ");
	 scanf("%d", &n);
	
	 printf("First %d Fibonacci terms are: \n", n);
	 for(i=1;i<=n;i++)
	 {
	  printf("%d\t", a);
	  next = a + b;
	  a = b;
	  b = next;
	 }
	 getch();
	 return(0);
}
