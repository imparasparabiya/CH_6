#include<stdio.h>
#include<conio.h>

main()

{


  int x,y,z;
  int formula;
  clrscr();
  printf("Formula:-(x+y+z)^3=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x))\n");
  printf("Enter of Value x=");
  scanf("%d",&x);

  printf("Enter of Value y=");
  scanf("%d",&y);

  printf("Enter Of value z=");
  scanf("%d",&z);
  formula=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z*x));

  printf("(x+y+z)^3=%d",formula);
  getch();

}