#include <stdio.h>
#include <conio.h>

int main()
{
    //Solution of Question 4   Area of Circle

    printf("\n\n\n\n      ############ Area,Diameter,Circumference*Calculator*of Circle ######### ");

    float radius,Area,Diameter,Circumference;
    printf("\n\n *Radius of Circle = ");
    scanf("%g",&radius); //store value in radius as it is in radius
    printf("\a");

    Area = (22*radius*radius)/7;

    Diameter = 2 * radius;

    Circumference = (44*radius)/7;

    printf("\nArea of circle is %0.2f square units  having radius %g. \n",Area,radius);
    printf("Diameter of circle is %.2f unites \n",Diameter);
    printf("Circumference of Circle is %.2f \n",Circumference);

    getch();
    return 0;
}
