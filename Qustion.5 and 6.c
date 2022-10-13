#include <stdio.h>
#include <conio.h>

float main()
{   // Question 5
    int length = printf("Jhohar\n     Jharkhand Wasi\n");
    // It returns number of character to the lenght int variable
    printf("%d",length);
    getch() ;

    int  n1;
    printf(" \n\n*****Enter your ID Number **** \n");
    scanf("%d",&n1); // ID is consist of only integer value assuming
    int L = printf("%d",n1);
    printf("\n\nNumber of Characters in your ID Number is %d",L);

    // I Have used float type to store the return value of printf() fuction
    // i didn't see any difference
    int  n2;
    printf(" \n\n*****Enter your ID Number **** \n");
    scanf("%d",&n2); // ID is consist of only integer value assuming
    float L1 = printf("%d",n2);
    printf("\n\nNumber of Characters in your ID Number is %0.0f",L1);

    int  n3;
    printf(" \n\n*****Enter your ID Number **** \n");
    scanf("%d",&n3); // ID is consist of only integer value assuming
    double  L2 = printf("%d",n3);
    printf("\n\nNumber of Characters in your ID Number is %.0lf",L2);

    // Question_6 WAP to print user name
    // Pending
    printf("\n*Enter First  Name\n\n\n");
    printf("                        *After completing Your name press key till your name display*\n\n");
    char a = getch();
    printf("\n");
    char a1 = getch();
     printf("\n");
    char a2= getch();
     printf("\n");
    char a3 = getch();
     printf("\n");
    char a4 = getch();
     printf("\n");
    char a5 = getch();
     printf("\n");
    char a6 = getch();
     printf("\n");
    char a7 = getch();
     printf("\n");
    char a8 = getch();
     printf("\n");
    char a9 = getch();
     printf("\n");
    char a10 = getch();
     printf("\n");
    char a11 = getch();
     printf("\n");
    char a12 = getch();
//    char a13 = getch();
//    char a14 = getch();-
//    char a15 = getch();
//    char a16 = getch();
//    char a17 = getch();
//    char a18 = getch();
//    char a19 = getch();
//    char a20 = getch();
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c",a,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12);

    return 1.34;
}
