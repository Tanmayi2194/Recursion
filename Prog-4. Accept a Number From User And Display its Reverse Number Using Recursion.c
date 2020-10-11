#include<stdio.h>
#include<conio.h>

int Reverse(int Num);

int main()
{
    int Number=0,Rev=0;

    printf("\n.....................................................");
    printf("\n\n\tEnter a Number TO Print Its Reverse: ");
    scanf("%d",&Number);

    Rev=Reverse(Number);

    printf("\n\t\tReverse OF %d is = %d.",Number,Rev);
    printf("\n\n.......................Thanks........................");
    getch();
    return 0;
}

int Reverse(int Num)///123
{
    static int i=0,Result=0;

    if(Num!=0)                           ///for(i=Num;i!=0;i=i/10)

    {                                    /// step 1       step 2   step 3
        i=Num%10;                        /// i=3         i=2      i=1         i=Remainder
        Result=(Result*10)+i;            /// R=0*10+3=3  R=32     R=321

        Reverse(Num/10);                 ///12 1                        Result=(Result*10)+Reverse(i%10);
    }
    return Result;
}
