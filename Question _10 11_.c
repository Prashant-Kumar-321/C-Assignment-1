#include <stdio.h>
#include <conio.h>

int main()
{
    // Question 10

    int DD, MM, YYY;
    printf("Enter Today's Date in below formate\nDD/MM/YYYY = ");
    // Displaying Text message to let the user know in what formate date has to be entered
    scanf("%d %d %d", &DD, &MM, &YYY);
    // taking input from user and storing in defined variable
    printf("\nDay-%d, Month-%d, Year-%d \n\n\n", DD, MM, YYY);
    printf("\a");

    //Question _11
    // Timing HH:MM

    printf("\nEnter Timing of your Class \nHH:MM = ");
    int HH, mm;
    scanf("%d %d", &HH, &mm);
    printf("\a n\n%d hours and %d Minutes \n", HH, mm);

    getch();
    return 0;
}
