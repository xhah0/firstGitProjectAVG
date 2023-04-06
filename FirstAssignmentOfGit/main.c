#include <stdio.h>
#include <math.h>

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
double squareRoot(double x);
double power(double x, int m);

int main()
{
    double num1, num2, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("\nMenu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Square Root of First Number\n");
    printf("6. First Number raised to the Power of Second Number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            result = add(num1, num2);
            printf("Sum = %.2lf", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Difference = %.2lf", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Product = %.2lf", result);
            break;
        case 4:
            result = divide(num1, num2);
            printf("Quotient = %.2lf", result);
            break;
        case 5:
            result = squareRoot(num1);
            printf("Square Root of %.2lf = %.2lf", num1, result);
            break;
        case 6:
            result = power(num1, (int)num2);
            printf("%.2lf raised to the power of %d = %.2lf", num1, (int)num2, result);
            break;
        default:
            printf("Invalid Choice!");
    }

    return 0;
}


double add(double x, double y)
{
    return x + y;
}


double subtract(double x, double y)
{
    return x - y;
}


double multiply(double x, double y)
{
    return x * y;
}


double divide(double x, double y)
{
    return x / y;
}


double squareRoot(double x)
{
    return sqrt(x);
}

double power(double x, int m)
{
    return pow(x, m);
}
