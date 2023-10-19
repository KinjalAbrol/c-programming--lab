#include<stdio.h>
#include<math.h>
void main(){

    float c,s,r,x,w;
    printf("hloo sir ,what do you want to operate on,circle,square or rectangle \npress 1 for circle\npress 2 for square\npress 3 for rectangle");
    scanf("%f",&x);
    if(x==1)
    {
        printf("hlo sir lets start operating on a circle");
        printf("\nplease enter the radius of the circle");
        scanf("%f",&c);
        printf("area of circle = %f",3.14*c*c);
        printf("\nperimeter of circle = %f",2*3.14*c);

    }
    else if(x==2)
    {
        printf("hlo sir lets start operating on a sqaure");
        printf("\nplease enter the side of the square");
        scanf("%f",&s);
        printf("area of square = %f",s*s);
        printf("\nperimeter of square = %f",4*s);
    }
    else if(x==3)
    {
        printf("hlo sir lets start operating on a rectangle");
        printf("\nplease enter the length of the rectangle");
        scanf("%f",&r);
        printf("\nplease enter the width of rectangle");
        scanf("%f",&w);
        printf("area of rectangle = %f",r*w);
        printf("\nperimeter of rectangle = %f",2*(r+w));
    }
    else{
        printf("invalid input");
    }
}


