#include<stdio.h>
#include<conio.h>

main()

{
   clrscr();
   printf("Formula:-(x-y-z)^3=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y)+(3*(y+z)+(3*(z+x))\n");
   int x,y,z,formula;

   printf("Enter a Value X=");
   scanf("%d",&x);

   printf("Enter a VAlue Y=");
   scanf("%d",&y);

   printf("Enter a Value Z=");
   scanf("%d",&z);

   formula=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z))+(3*(z+x));
   printf("(x-y-z)^3 ans.=%d",formula);

   getch();


}