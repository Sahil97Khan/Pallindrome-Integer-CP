///to check Whether a three digit Number is Pallindrome Integer or not...! Ex.121, 868

#include<stdio.h>
#include<conio.h>

main()
{
    int x;
    printf("ENTER ANY THREE-DIGIT INTEGER:-");
    scanf("%d",&x);

    if(x<=0)
    {
        printf("\nFalse");
        getch();
    }

    int y=x%10;

    int z=x/100;


    int a=x-z*100-y;

    int b=y*100+a+z;

  if(b==x)
  {
      printf("\nTrue");
  }
  else
   {printf("\nFalse");}

  getch();
}
