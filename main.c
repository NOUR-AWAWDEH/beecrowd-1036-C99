#include <stdio.h>
#include <math.h>
//beecrowd | 1036 : Bhaskara's Formula
//our Math  formula is =>
// X1 = (-b + sqrt(pow(b,2)-(4*a*c))/(a+a);
// X2 = (-b - sqrt(pow(b,2)-(4*a*c))/(a+a);
int main (){
    double a, b, c, X1, X2, delta;
    //input : 
    scanf("%lf %lf %lf", &a, &b, &c );
    //prosses :
    
    delta = pow(b, 2) - (4 * a * c);

    if ( a == 0)
    {
        printf("Impossivel calcular\n");

    }else if (delta < 0)
    {
        printf("Impossivel calcular\n");

    }else
    {
        X1 = (-b + sqrt(delta)) / ( a + a);
        X2 = (-b - sqrt(delta)) / ( a + a);
    //output :
        printf("R1 = %.5lf \nR2 = %.5lf\n", X1, X2);
    }
    
    return 0; 
}