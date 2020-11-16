#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define  PI 3.14159265358979323846

int arithmetic();
int trigonometric();
int logarithmic();
int exponential();
int matrix();
int misc();

int main(){
    int sel = 0;
    char choice = 'y';
    printf("\t ================================================\n");
    printf("\t\t WELCOME TO SCIENTIFIC CALCULATOR \n");
    printf("\t ================================================\n");
    printf("\n");
    while(1)
    {
    printf("Press 1 For Arithmetic Operations\n");
    printf("Press 2 For Trigonometric Operations\n");
    printf("Press 3 For Logarithmic Operations\n");
    printf("Press 4 For Exponential Operations\n");
    printf("Press 5 For Matrix Operations\n");
    printf("Press 6 For Misc. Operations\n");
    printf("Press 0 to Exit.\n");
    printf("\n");

        printf("Enter choice of operation: \n");
        scanf("%d",&sel);
        getchar();

            switch(sel)
            {
            case 1:
                    arithmetic();
                    break;
            case 2:
                    trigonometric();
                    break;
            case 3:
                    logarithmic();
                    break;
            case 4:
                    exponential();
                    break;
            case 5:
                    matrix();
                    break;
            case 6:
                    misc();
                    break;
            case 0:
                    printf("Thank you for using the calculator.\n");
                    printf("Exiting . . .\n");
                    printf("---------------------------------------------\n");
                    {return 0;}
                    break;
            default :
                    printf("Invalid Operation!\n");
                    printf("---------------------------------------------\n");
        }
    }
}

int arithmetic(){
    int op;
    printf("---------------------------------------------\n");
    printf("Press 1 For Addition\n");
    printf("Press 2 For Subtraction\n");
    printf("Press 3 For Multiplication\n");
    printf("Press 4 For Division\n");
    printf("Press 0 to go back\n");
    printf("\n");
    printf("Enter your choice: \n");
    scanf("%d", &op);
    getchar();

    switch(op){
		case 1:
            {
                float sum=0, k=0, number;
                int n;
                printf("How many numbers do you want to add: \n");
                scanf("%d",&n);
                getchar();
                printf("Please enter %d numbers separated by spaces: \n",n);
                while(k<n)
                {
                    scanf("%f",&number);
                    getchar();
                    sum+=number;
                    k=k+1;
                }
            printf("Sum of %d numbers = %.3f\n",n,sum);
        }
            printf("---------------------------------------------\n");
			break;
		case 2:
            {
                float l, m, n = 0;
                printf("Enter the first number: ");
                scanf("%f", &l);
                getchar();
                printf("Enter the second number : ");
                scanf("%f", &m);
                getchar();
                n=l-m;
                printf("Result = %.3f\n", n);
            }
            printf("---------------------------------------------\n");
			break;
		case 3:
            {
                float k = 0, mul=1, number;
                int n;
                printf("How many numbers do you want to multiply: ");
                scanf("%d",&n);
                getchar();
                printf("Please enter %d numbers separated by spaces: \n",n);
                while(k<n)
                {
                    scanf("%f",&number);
                    getchar();
                    mul *= number;
                    k=k+1;
                }
            printf("Product of %d numbers = %.3f\n",n,mul);
            }
            printf("---------------------------------------------\n");
			break;
		case 4:
            {
                float a, b, d=0;
                printf("Please enter dividend: ");
                scanf("%f", &a);
                getchar();
                printf("Please enter divisor: ");
                scanf("%f", &b);
                getchar();
                if (b==0){printf("Math ERROR\n"); printf("---------------------------------------------\n");return (0);}
                d=a/b;
                printf("Division of entered numbers = %.3f\n",d);
            }
            printf("---------------------------------------------\n");
			break;
        case 0:
            printf("Going back . . .\n");
            printf("---------------------------------------------\n");
            break;
		default:
			printf("Invalid input\n");
            printf("---------------------------------------------\n");
			break;
    }
    return 0;
}

int trigonometric(){

    int op;
    printf("---------------------------------------------\n");
    printf("Press 1 For Sine (x)\t\tPress 2 For Cosine (x)\n");
    printf("Press 3 For Tangent (x)\t\tPress 4 For Cosecant (x)\n");
    printf("Press 5 For Secant (x)\t\tPress 6 For Cotangent (x)\n");
    printf("Press 7 For Radian --> Degree\tPress 8 For Degree --> Radian\n");
    printf("Press 0 to go back\n");
    printf("\n");
    printf("Enter your choice: \n");
    scanf("%d", &op);
    getchar();

    switch(op)
    {
        case 1:
            {
                double x;
                double result;
                printf("Enter the value of x in radians: ");
                scanf("%lf",&x);
                result = sin(x);
                printf("sin (%.2lf) = %.2lf\n", x , result);
            }
            printf("---------------------------------------------\n");
            break;
        case 2:
            {
                double x;
                double result;
                printf("Enter the value of x in radians: ");
                scanf("%lf",&x);
                result = cos(x);
                printf("cos (%.2lf) = %.2lf\n", x , result);
            }
            printf("---------------------------------------------\n");
            break;
        case 3:
            {
                double x;
                double result;
                printf("Enter the value of x in radians: ");
                scanf("%lf",&x);
                result = tan(x);
                printf("tan (%.2lf) = %.2lf\n", x , result);
            }
            printf("---------------------------------------------\n");
            break;
        case 4:
            {
                double x;
                double result;
                printf("Enter the value of x in radians: ");
                scanf("%lf",&x);
                result = 1/sin(x);
                printf("csc (%.2lf) = %.2lf\n", x , result);
            }
            printf("---------------------------------------------\n");
            break;
        case 5:
            {
                double x;
                double result;
                printf("Enter the value of x in radians: ");
                scanf("%lf",&x);
                result = 1/cos(x);
                printf("sec (%.2lf) = %.2lf\n", x , result);
            }
            printf("---------------------------------------------\n");
            break;
        case 6:
            {
                double x;
                double result;
                printf("Enter the value of x in radians: ");
                scanf("%lf",&x);
                result = 1/tan(x);
                printf("cot θ(%.2lf) = %.2lf\n", x , result);
            }
            printf("---------------------------------------------\n");
            break;
        case 7:
            {
                double x;
                double result;
                printf("Enter the value of x in radians: ");
                scanf("%lf",&x);
                result =  x * (180/PI);
                printf("%.3lf radians is %.3lf°.\n", x , result);
            }
            printf("---------------------------------------------\n");
            break;
            case 8:
        {
                double x;
                double result;
                printf("Enter the value of x in degrees: ");
                scanf("%lf",&x);
                result =  x * (PI/180);
                printf("%.3lf degrees is %.3lf radians.\n", x , result);
            }
            printf("---------------------------------------------\n");
            break;
        case 0:
            printf("Going back . . .\n");
            printf("---------------------------------------------\n");
            break;
		default:
			printf("Invalid input\n");
            printf("---------------------------------------------\n");
			break;
    }
    return 0;
}

int logarithmic(){

    int op;
    printf("---------------------------------------------\n");
    printf("Press 1 For Natural Logarithm\n");
    printf("Press 2 For Common Logarithm\n");
    printf("Press 3 For log(n) with arbitary base\n");
    printf("Press 0 to go back\n");
    printf("\n");
    printf("Enter your choice: \n");
    scanf("%d", &op);
    getchar();

    switch(op)
    {
        case 1:{
             double n, result;

            printf("Enter a number to calculate its natural logarithm: ");
            scanf("%lf", &n);
            getchar();
            result = log(n);
            printf("Natural log of %.2lf = %lf\n", n, result);
            printf("---------------------------------------------\n");
        }
        break;
        case 2:{

            double n, result;

            printf("Enter a number to calculate its common logarithm: ");
            scanf("%lf", &n);
            result = log10(n);
            printf("Common log of %.2lf = %lf\n", n, result);
            printf("---------------------------------------------\n");

        }
        break;
        case 3:{
            double n, result , b;
            printf("Enter the argument of the logarithm: ");
            scanf("%lf", &n);
            printf("Enter the base of the logarithm: ");
            scanf("%lf", &b);
            result = log(n)/log(b);
            printf("Log %.2lf to the base %.2lf is: %lf\n", n, b, result);
            printf("---------------------------------------------\n");
        }
        break;
        case 0:
            printf("Going back . . .\n");
            printf("---------------------------------------------\n");
            break;
		default:
			printf("Invalid input\n");
            printf("---------------------------------------------\n");
			break;
    }
    return 0;
}

int exponential(){

    int op;
    printf("---------------------------------------------\n");
    printf("Press 1 For Exponentiation (e^x)\n");
    printf("Press 2 For Power (A^B)\n");
    printf("Press 0 to go back\n");
    printf("\n");
    printf("Enter your choice: \n");
    scanf("%d", &op);

    switch (op)
    {
        case 1:
        {
            double n, result;

           printf("Enter the value of x: ");
           scanf("%lf", &n);
           result = exp(n);
           printf("e^%.2lf = %lf\n", n, result);
           printf("---------------------------------------------\n");
        }
        break;
        case 2:
        {
            double n, m, result;

           printf("Enter the value of A: ");
           scanf("%lf", &n);
           printf("Enter the value of B: ");
           scanf("%lf", &m);
           result = pow(n,m);
           printf("%.2lf^%.2lf = %.2lf\n", n,m, result);
           printf("---------------------------------------------\n");
       }
       break;
       case 0:
           printf("Going back . . .\n");
           printf("---------------------------------------------\n");
           break;
       default:
           printf("Invalid input\n");
           printf("---------------------------------------------\n");
           break;
    }
    return 0;
}

int matrix(){

    int op;
    printf("---------------------------------------------\n");
    printf("Press 1 For Addition\n");
    printf("Press 2 For Subtraction\n");
    printf("Press 3 For Multiplication\n");
    printf("Press 4 For Determinant\n");
    printf("\n");
    printf("Enter your choice: \n");
    scanf("%d", &op);
    getchar();

    switch(op)
    {
        case 1:
        {
            float  a[10][10], b[10][10], sum[10][10];
            int r,c,i,j;
            printf("Enter the number of rows (between 1 and 10): ");
            scanf("%d", &r);
            getchar();
            printf("Enter the number of columns (between 1 and 10): ");
            scanf("%d", &c);
            getchar();
            printf("\nEnter elements of 1st matrix:\n");
            for (i = 0; i < r; ++i)
                for (j = 0; j < c; ++j) {
                    printf("Enter element A[%d%d]: ", i + 1, j + 1);
                    scanf("%f", &a[i][j]);
                }
            printf("Enter elements of 2nd matrix:\n");
            for (i = 0; i < r; ++i)
                for (j = 0; j < c; ++j) {
                    printf("Enter element B[%d%d]: ", i + 1, j + 1);
                    scanf("%f", &b[i][j]);
                }
            for (i = 0; i < r; ++i)
                for (j = 0; j < c; ++j) {
                    sum[i][j] = a[i][j] + b[i][j];
                }
            printf("\nSum of two matrices: \n");
            for (i = 0; i < r; ++i)
                for (j = 0; j < c; ++j) {
                    printf("%.2f   ", sum[i][j]);
                    if (j == c - 1) {
                        printf("\n");
                    }
        }
        printf("---------------------------------------------\n");
}
        break;
        case 2:
        {
            int m, n, c, d, first[10][10], second[10][10], difference[10][10];

           printf("Enter the number of rows and columns of matrix\n");
           scanf("%d%d", &m, &n);
           getchar();
           printf("Enter the elements of first matrix\n");

           for (c = 0; c < m; c++)
             for (d = 0 ; d < n; d++)
               scanf("%d", &first[c][d]);

           printf("Enter the elements of second matrix\n");

           for (c = 0; c < m; c++)
             for (d = 0; d < n; d++)
                 scanf("%d", &second[c][d]);

           printf("Difference of entered matrices:-\n");

           for (c = 0; c < m; c++) {
             for (d = 0; d < n; d++) {
               difference[c][d] = first[c][d] - second[c][d];
               printf("%d\t",difference[c][d]);
             }
             printf("\n");
        }
        printf("---------------------------------------------\n");
}
        break;
        case 3:
        {
            int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
            printf("Enter the number of rows (between 1 and 10):");
            scanf("%d",&r);
            getchar();
            printf("Enter the number of columns (between 1 and 10):");
            scanf("%d",&c);
            getchar();
            printf("Enter the elements of the first matrix:\n");
            for(i=0;i<r;i++){
                for(j=0;j<c;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter the elements of the second matrix:\n");
            for(i=0;i<r;i++){
                for(j=0;j<c;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            printf("Multiplication of the above matrices:\n");
            for(i=0;i<r;i++){
                for(j=0;j<c;j++)
                {
                    mul[i][j]=0;
                    for(k=0;k<c;k++)
                    {
                        mul[i][j]+=a[i][k]*b[k][j];
                    }
                }
            }

            for(i=0;i<r;i++){
                for(j=0;j<c;j++)
                    {
                        printf("%d\t",mul[i][j]);
                    }
                    printf("\n");
            }
            printf("---------------------------------------------\n");
        }
        break;
        case 4:
        {
            float  matrix[10][10], ratio, det;
            int i, j, k, n;
            printf("Enter order of matrix (between 1 and 10): ");
            scanf("%d", &n);
            printf("Enter the matrix: \n");
            for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                    scanf("%f", &matrix[i][j]);
                }
            }
            for(i = 0; i < n; i++){
                for(j = 0; j < n; j++){
                    if(j>i){
                        ratio = matrix[j][i]/matrix[i][i];
                        for(k = 0; k < n; k++){
                            matrix[j][k] -= ratio * matrix[i][k];
                        }
                    }
                }
            }
            det = 1;
            for(i = 0; i < n; i++)
                det *= matrix[i][i];
            printf("The determinant of matrix is: %.2f\n", det);
            printf("---------------------------------------------\n");

        }
        break;
        case 0:
            printf("Going back . . .\n");
            printf("---------------------------------------------\n");
            //sleep(1);
            break;
		default:
			printf("Invalid input\n");
            printf("---------------------------------------------\n");
			break;
        }
        return 0;
    }

int misc(){

    int op;

    printf("---------------------------------------------\n");
    printf("Press 1 For Area of Triangle\n");
    printf("Press 2 For Area of Circle\n");
    printf("Press 3 For Farhenheit --> Celsius\n");
    printf("Press 4 For Celsius --> Farhenheit\n");
    printf("Press 5 For Simple Interest and Amount\n");
    printf("Press 6 for EMI Calculator\n");
    printf("Press 0 to go back\n");
    printf("\n");
    printf("Enter your choice: ");
    scanf("%d", &op);
    getchar();

    switch(op){

        case 1:{
            float b ,h , res;
            printf("\nEnter the base of the Triangle: ");
            scanf("%f",&b);
            printf("Enter the height of the Triangle: ");
            scanf("%f",&h);
            res = 0.5*(b*h);
            printf("The area of the above triangle is : %.2f\n",res);
            printf("---------------------------------------------\n");
        }
        break;
        case 2:{
            float r ,a;
            printf("Enter the radius of the Circle: ");
            scanf("%f",&r);
            a = PI*r*r;
            printf("The area of the above circle is : %.2f\n",a);
            printf("---------------------------------------------\n");
        }
        break;
        case 3:{
            float celsius,fahrenheit;
            printf("\nEnter temperature in Fahrenheit: ");
            scanf("%f",&fahrenheit);
            celsius=(fahrenheit - 32)*5/9;
            printf("\n %.2f° Farhenheit = %.2f° Celsius\n", fahrenheit, celsius);
            printf("---------------------------------------------\n");
        }
        break;
        case 4:{

            float celsius, fahrenheit;
            printf("Enter temperature in Celsius: ");
            scanf("%f", &celsius);
            fahrenheit = (celsius * 9 / 5) + 32;
            printf("\n %.2f° Celsius = %.2f° Fahrenheit\n", celsius, fahrenheit);
            printf("---------------------------------------------\n");
        }
        break;
        case 5:{
            float principal, interest ,rate , n, time , amount;
            printf("Enter the principal: ");
            scanf("%f",&principal);
            printf("Enter the rate of interest (per annum): ");
            scanf("%f",&rate);
            printf("Enter the time in months: ");
            scanf("%f",&time);
            n = time/12;
            interest = (principal*n*rate)/100;
            printf("The interest incurred would be: ₹ %.2f\n",interest);
            amount = principal + interest;
            printf("Amount to be paid at the end of term: ₹ %.2f\n", amount);
            printf("---------------------------------------------\n");
        }
        break;
        case 6:{
            float principal, rate, time, emi;
            printf("Enter principal: ");
            scanf("%f",&principal);
            printf("Enter rate: ");
            scanf("%f",&rate);
            printf("Enter time in months: ");
            scanf("%f",&time);
            rate=rate/(12*100);
            emi= (principal*rate*pow(1+rate,time))/(pow(1+rate,time)-1);
            printf("Monthly EMI is = ₹ %.2f\n",emi);
            printf("---------------------------------------------\n");

        }
        break;
        case 0:
            printf("Going back . . .\n");
            printf("---------------------------------------------\n");
            break;
		default:
			printf("Invalid input\n");
            printf("---------------------------------------------\n");
			break;
        }
        return 0;
}
