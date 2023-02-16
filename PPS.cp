// Write a C program to find the factors of a given integer.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number you want factor of:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(n%i==0){
//             printf("%d is a factor of %d\n",i,n);
//         }
//     }
//     return 0;
// }

// Square of number from 1 to 20

// #include<stdio.h>
// int main(){
//     int n=20,sq;
//     for(int i=1;i<=20;i++){
//         sq=i*i;
//         printf("%d ",sq);
//     }
//     return 0;
// }

// Write a C program to find whether an entered number is palindrome or not using recursion.

// #include <stdio.h>
// #include <conio.h>
// int reverse(int num)
// {
//     int rem;
//     static int sum=0;
//     if(num!=0){
//         rem=num%10;
//         sum=sum*10+rem;
//         reverse(num/10);
//     }
//     else{
//         return sum;
//     }
// } 
// int isPalindrome(int num)
// {
//     if(num == reverse(num))
//     {
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if(isPalindrome(num) == 1)
//     {
//         printf("%d is a palindrome",num);
//     }
//     else
//     {
//         printf("%d is not a palindrome number",num);
//     }
//     return 0;
// }

// Write a progarm to compute transpose of a m x n matrix. The transpose of a matrix is obtained by exchanging the elements of each row with the elements of the corresponding column.

// #include <stdio.h>
// int main(){
//    int m, n, i, j, matrix[10][10], transpose[10][10];
//    printf("Enter rows and columns:");
//    scanf("%d %d", &m, &n);
//    printf("Enter elements of the matrix:\n");
//    for (i= 0; i < m; i++){
//       for (j = 0; j < n; j++){
//          scanf("%2d", &matrix[i][j]);
//       }
//    }
//    for (i = 0;i < m;i++){
//       for (j = 0; j < n; j++){
//          transpose[j][i] = matrix[i][j];
//       }
//    }
//    printf("Transpose of the matrix:\n");
//    for (i = 0; i< n; i++) {
//       for (j = 0; j < m; j++){
//          printf("%2d\t", transpose[i][j]);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// Write a user defined function to convert all the upper case letters to lowercase and
// lower case letters to upper case in a given string. Write appropriate main ( ) to
// demonstrate the use of the function above defined.

// #include <stdio.h>
// #include <ctype.h>
// void convert_case(char *string) {
//     int i = 0;
//     while(string[i]) {
//         if(isupper(string[i]))
//             string[i] = tolower(string[i]);
//         else if(islower(string[i]))
//             string[i] = toupper(string[i]);
//         i++;
//     }
// }
// int main() {
//     char string[100];
//     printf("Enter a string: ");
//     fgets(string, 100, stdin);
//     convert_case(string);
//     printf("Converted string: %s\n", string);
//     return 0;
// }

// WAP to print the following pattern [CO1]
// E D C B A
//  D C B A
//   C B A
//    B A
//     A

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number of rows:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=i;k>=1;k--){
//             printf("%c ",k+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Write Program to print Strong number. ( Note: If the sum of
// factorial of the digits in any number is equal the given number then the number is called as
// STRONG number.)
// Ex=1! +4! +5!= 1+24+120 = 145

// #include<stdio.h>
// int main(){
//     int n,rem,sum=0,temp,fact;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     temp=n;
//     while(n!=0){
//         rem=n%10;
//         fact=1;
//         for(int i=1;i<=rem;i++){
//             fact=fact*i;
//         }
//         sum=sum+fact;
//         n/=10;
//     }
//     if(sum==temp){
//         printf("%d is a strong number",temp);
//     }
//     else{
//         printf("%d is not a strong number",temp);
//     }
//     return 0;
// }

// Write Program to print Perfect number(Note: A number is a perfect
// number if is equal to sum of its proper divisors ex. Divisors of 6 are 1, 2 and 3. Sum of divisors
// is 6.)

// #include<stdio.h>
// int main(){
//     int n,rem,sum=0;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     for(int i=1;i<n;i++){
//         if(n%i==0){
//             sum=sum+i;
//         }
//     }
//     if(sum==n){
//         printf("%d is a perfect number",n);
//     }
//     else{
//         printf("%d is not a perfect number",n);
//     }
//     return 0;
// }

// Write a program to enter a year and to check if the year is a leap year or not.

// #include<stdio.h>  
// #include<conio.h>  
// void main() {  
//     int year;  
//     printf("Enter a year: ");  
//     scanf("%d", &year);  
//     if(((year%4==0) && ((year%400==0) || (year%100!==0))  
//     {  
//         printf("%d is a leap year", &year);  
//     } else {  
//         printf("%d is not a leap year", &year);  
//     }  
//     getch();  
// }  

// Write a C program to calculate the root of a Quadratic Equation.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b,c;
//     double D,r1,r2,real,imag;
//     printf("Enter the coefficients of a,b and c:");
//     scanf("%d %d %d",&a,&b,&c);
//     D=b*b-4*a*c;
//     printf("Discriminant:%.2lf\n",D);
//     if(D>0){
//         r1=((-b+sqrt(D))/(2*a));
//         r2=((-b-sqrt(D))/(2*a));
//         printf("root1=%.2lf and root2=%.2lf",r1,r2);
//     }
//     else if(D==0){
//         r1=r2=(-b/(2*a));
//         printf("root1=root2=%.2lf",r1);
//     }
//     else{
//         real=-b/(2*a);
//         imag=sqrt(-D)/(2*a);
//         printf("root1=%.2lf+%.2lfi and root1=%.2lf-%.2lfi",real,imag,real,imag);
//     }
//     return 0;
// }

// Write a program in C to calculate and print the Electricity bill of a given customer. The
// customer id., name and unit consumed by the user should be taken from the keyboard
// and display the total amount to pay to the customer. The charge are as follow :
// Unit Charge/unit
// upto 199 @1.20
// 200 and above but less than 400 @1.50
// 400 and above but less than 600 @1.80
// 600 and above @2.00
// If bill exceeds Rs. 400 then a surcharge of 15% will be charged and the minimum bill
// should be of Rs. 100/-.

// #include <stdio.h>
// int main() {
//    int customer_id, units;
//    char customer_name[50];
//    float charge, total_amount;
//    printf("Enter Customer ID: ");
//    scanf("%d", &customer_id);
//    printf("Enter Customer Name: ");
//    scanf("%s", customer_name);
//    printf("Enter Units Consumed: ");
//    scanf("%d", &units);
//    if(units <= 199) {
//       charge = 1.20;
//    }
//    else if(units >= 200 && units < 400) {
//       charge = 1.50;
//    }
//    else if(units >= 400 && units < 600) {
//       charge = 1.80;
//    }
//    else {
//       charge = 2.00;
//    }
//    total_amount = units * charge;
//    if(total_amount > 400) {
//       total_amount = total_amount + (total_amount * 0.15);
//    }
//    if(total_amount < 100) {
//       total_amount = 100;
//    }
//    printf("\nElectricity Bill\n");
//    printf("Customer ID: %d\n", customer_id);
//    printf("Customer Name: %s\n", customer_name);
//    printf("Units Consumed: %d\n", units);
//    printf("Charge per unit: %.2f\n", charge);
//    printf("Total Amount (including surcharge): Rs. %.2f\n", total_amount);
//    return 0;
// }

// Write a C program to find the commission on a salesman's total sales.
// The commission on a salesman’s total sales is as follows: a) If sales <100, then there is
// no commission. b) If 100>=sales <=500, then commission = 10% of sales. c) If sales >
// 500, then commission = 100+8% of sales above 500. Display details of salesman

// #include <stdio.h>
// int main() {
//    int sales;
//    float commission;
//    printf("Enter Total Sales: ");
//    scanf("%d", &sales);
//    if(sales < 100) {
//       commission = 0;
//    }
//    else if(sales >= 100 && sales <= 500) {
//       commission = sales * 0.1;
//    }
//    else {
//       commission = 100 + ((sales - 500) * 0.08);
//    }
//    printf("\nSales Details\n");
//    printf("Total Sales: Rs. %d\n", sales);
//    printf("Commission: Rs. %.2f\n", commission);
//    return 0;
// }

// Write a program to print all prime factors of an input number n (> 0) with repetitions.

// #include <stdio.h>
// int main() {
//     int n, i, j, isPrime;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     printf("Prime factors of %d are: ", n);
//     for (i = 2; i <= n; i++) {
//         if (n % i == 0) {
//             isPrime = 1;
//             for (j = 2; j <= i / 2; j++) {
//                 if (i % j == 0) {
//                     isPrime = 0;
//                     break;
//                 }
//             }
//             while (n % i == 0) {
//                 printf("%d ", i);
//                 n /= i;
//             }
//         }
//     }
//     return 0;
// }

// Write a ‘C’ program to take as input 3 floating point numbers. The program then outputs
// the number with largest magnitude (Largest magnitude number is the largest number
// obtained after ignoring the sign).

// #include <stdio.h>
// #include <math.h>
// int main() {
//    float num1, num2, num3;
//    float abs1, abs2, abs3;
//    printf("Enter three floating-point numbers: ");
//    scanf("%f %f %f", &num1, &num2, &num3);
//    abs1 = fabs(num1);
//    abs2 = fabs(num2);
//    abs3 = fabs(num3);
//    if (abs1 >= abs2 && abs1 >= abs3) {
//       printf("The number with the largest magnitude is %.2f\n", num1);
//    }
//    else if (abs2 >= abs1 && abs2 >= abs3) {
//       printf("The number with the largest magnitude is %.2f\n", num2);
//    }
//    else {
//       printf("The number with the largest magnitude is %.2f\n", num3);
//    }
//    return 0;
// }

// Write a program that fills a 5 by 5 matrix (2D array) as follows :— upper triangle with 1 ; diagonal with 0 ; lower triangle with 2.

// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("Enter the rows and colums:");
//     scanf("%d %d",&n,&m);
//     printf("The matrix is:\n");
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=m;j++){
//             if(i>j){
//                 printf(" 1 ");
//             }
//             else if(i<j){
//                 printf(" 2 ");
//             }
//             else{
//                 printf(" 0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


