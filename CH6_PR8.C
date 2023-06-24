#include<stdio.h>
#include<conio.h>

main()

{
   int x,y,z,formula;
   clrscr();
   printf("Formula:-(x+y+z)^2=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x))\n");


   printf("Enter a Value X=");
   scanf("%d",&x);

   printf("Enter a Value Y=");
   scanf("%d",&y);

   printf("Enter a Value Z=");
   scanf("%d",&z);

   formula=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
   printf("(x+y+z)^2 ans.=%d",formula);

   getch();

}