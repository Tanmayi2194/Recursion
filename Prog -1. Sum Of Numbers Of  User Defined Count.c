

#include<stdio.h>
#include<conio.h>

int Sum_Of_Ten(int Num_Count);

int main()
{
    int Addition=0,No=0;

    printf("\n.....................................................");
    printf("\n\nEnter How Many Numbers You Want To Calculate Sum:");
    scanf("%d",&No);

    Addition=Sum_Of_Ten(No);

    printf("\n\tAddition of %d Inputted Numbers = %d",No,Addition);
    printf("\n\n.......................Thanks........................");

    getch();
    return 0;
}


int Sum_Of_Ten(int Num_Count)           ///5
{
   static int Sum=0,i=1;
   int Num=0;

   if(Num_Count!=0)                     ///5!=0 True
   {
       printf("\n\t\tNumber %d = ",i++);
       scanf("%d",&Num);                /// 1 2 4 2 1

       Sum=Sum_Of_Ten(Num_Count-1)+Num; ///fun(4)+1  fun(3)+2 fun(2)+4 fun(1)+2 fun(0)+1
   }
   return Sum;
}
