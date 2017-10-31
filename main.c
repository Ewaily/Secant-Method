/*
    * Muhammad Ashraf Ewaily        14101380
    * Numerical Methods | Secant Method
 */

#include <stdio.h>
#include <stdlib.h>

float fn(float x){

       float fn = x*x - 2* x-3 ;


return fn;


}


int main()
{
    float a,b,Es=0.001,c,cx;
    int i = 1,f=0;

    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);
    c = b - ( fn(b) * ( (b-a)/(fn(b)-fn(a))));

        printf("Iteration #%d\n a = %f \t b = %f || \t c = %f || \t F(a) = %f || \t F(b) = %f  || \t F(c) = %f \n\n",i,a,b,c,fn(a),fn(b),fn(c));


    while ( fabs(fn(c)) >=0.001 ){


            a = b;
            b = c;
            c = b - ( fn(b) * ( (b-a)/(fn(b)-fn(a))));

        i ++;
                printf("Iteration #%d\n a = %f \t b = %f || \t c = %f || \t F(a) = %f || \t F(b) = %f  || \t F(c) = %f \n\n",i,a,b,c,fn(a),fn(b),fn(c));


    }



        printf("\nThe approximate root = %f\n",c);



    return 0;
}
