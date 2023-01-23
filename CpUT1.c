// Write a C language program to print all Prime Numbers between 2 to 99999

// #include<stdio.h>
// int main(){
//     int n=99999;
//     for(int i=2;i<=n;i++){
//         if(n%i!=0){
//          printf("%d is a Prime number\n",i);
//         }
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

// Write a C program to multiply a matrix of size m x n with a vector of size n x 1.

// #include<stdio.h>
// int main(){
//     int r1,c1,r2,c2;
//     printf("Enter the rows and columns of a:");
//     scanf("%d %d",&r1,&c1);
//     printf("Enter the rows and columns of b:");
//     scanf("%d %d",&r2,&c2);
//     int a[r1][c1],b[r2][c2],mul[r1][c2];
//     if(c1==r2){
//         printf("Enter the elements of matrix a:");
//         for(int i=1;i<=r1;i++){
//             for(int j=1;j<=c1;j++){
//                 scanf("%d",&a[i][j]);
//             }
//         }
//         printf("The elements of matrix a:\n");
//         for(int i=1;i<=r1;i++){
//             for(int j=1;j<=c1;j++){
//                 printf("%d ",a[i][j]);
//             }
//             printf("\n");
//         }
//         printf("Enter the elements of matrix b:");
//         for(int i=1;i<=r2;i++){
//             for(int j=1;j<=c2;j++){
//                 scanf("%d",&b[i][j]);
//             }
//         }
//         printf("The elements of matrix b:\n");
//         for(int i=1;i<=r2;i++){
//             for(int j=1;j<=c2;j++){
//                 printf("%d ",b[i][j]);
//             }
//             printf("\n");
//         }
//         for(int i=1;i<=r1;i++){
//             for(int j=1;j<=c2;j++){
//                 mul[i][j]=0;
//                 for(int k=1;k<=c1;k++){
//                     mul[i][j]+=(a[i][k]*b[k][j]);
//                 }
//             }
//         }
//         printf("The mulplication matrix is:\n");
//         for(int i=1;i<=r1;i++){
//             for(int j=1;j<=c2;j++){
//                 printf("%d ",mul[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else{
//         printf("Multiplication is not possible");
//     }
//     return 0;
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

// Write a Program to find multiplication of two matrices and to add all the elements of a dimensional array.

// #include<stdio.h>
// int main(){
//     int r1,c1,r2,c2;
//     printf("Enter the rows and columns of a:");
//     scanf("%d %d",&r1,&c1);
//     printf("Enter the rows and columns of b:");
//     scanf("%d %d",&r2,&c2);
//     int a[r1][c1],b[r2][c2],mul[r1][c2],sum[r1][c1];
//     printf("Enter the elements of matrix a:");
//         for(int i=1;i<=r1;i++){
//             for(int j=1;j<=c1;j++){
//                 scanf("%d",&a[i][j]);
//             }
//         }
//         printf("The elements of matrix a:\n");
//         for(int i=1;i<=r1;i++){
//             for(int j=1;j<=c1;j++){
//                 printf("%d ",a[i][j]);
//             }
//             printf("\n");
//         }
//         printf("Enter the elements of matrix b:");
//         for(int i=1;i<=r2;i++){
//             for(int j=1;j<=c2;j++){
//                 scanf("%d",&b[i][j]);
//             }
//         }
//         printf("The elements of matrix b:\n");
//         for(int i=1;i<=r2;i++){
//             for(int j=1;j<=c2;j++){
//                 printf("%d ",b[i][j]);
//             }
//             printf("\n");
//         }
//     if((r1==r2)&&(c1==c2)){
//             for(int i=1;i<=r1;i++){
//                 for(int j=1;j<=c1;j++){
//                     sum[i][j]=a[i][j]+b[i][j];
//                 }
//             }
//             printf("The addition of the matrix is:\n");
//             for(int i=1;i<=r1;i++){
//                 for(int j=1;j<=c1;j++){
//                     printf("%d ",sum[i][j]);
//                 }
//                 printf("\n");
//             }
//         if(c1==r2){
//             for(int i=1;i<=r1;i++){
//                 for(int j=1;j<=c2;j++){
//                     mul[i][j]=0;
//                     for(int k=1;k<=c1;k++){
//                         mul[i][j]+=(a[i][k]*b[k][j]);
//                     }
//                 }
//             }
//             printf("The mulplication matrix is:\n");
//             for(int i=1;i<=r1;i++){
//                 for(int j=1;j<=c2;j++){
//                     printf("%d ",mul[i][j]);
//                 }
//                 printf("\n");
//             }
//         }
//         else{
//             printf("Multiplication is not possible");
//         }
//     }
//     else{
//         printf("Multiplication and addition is not possible");
//     }
//     return 0;
// }

// A common problem in statistics is that of generating frequency distribution of the given data. Assuming the data consists of 50 positive integers in range of 1 to 25, write a program that prints the number of times each integer occurs in data.

// #include <stdio.h>
// int main() {
//     int data[50], frequency[25] = {0};
//     printf("Enter the data: ");
//     for (int i = 0; i < 50; i++) {
//         scanf("%d", &data[i]);
//         if (data[i] >= 1 && data[i] <= 25) {
//             frequency[data[i]-1]++;
//         }
//     }
//     printf("Number of times each integer occurs in data:\n");
//     for (int i = 0; i < 25; i++) {
//         printf("%d occurs %d times\n", i+1, frequency[i]);
//     }
//     return 0;
// }

// Write a C language program to find out sum of the following series 1! +2! + 3!+.....+n!

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int fact=1,sum=0;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//         sum=sum+fact;
//     }
//     printf("%d",sum);
//     return 0;
// }

// Write a C language program to input number and find a largest digit in a given number and print it in word with appropriate message.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     int rem,largest=0;
//     while(n>0){
//         rem=n%10;
//         if(largest<rem){
//             largest=rem;
//         }
//         n/=10;
//     }
//     printf("%d\n",largest);
//     switch(largest){
//         case 0:
//             printf("Zero");
//         case 1:
//             printf("One");
//         case 2:
//             printf("Two");
//         case 3:
//             printf("Three");
//         case 4:
//             printf("Four");
//         case 5:
//             printf("Five");
//         case 6:
//             printf("Six");
//         case 7:
//             printf("Seven");
//         case 8:
//             printf("Eight");
//         case 9:
//             printf("Nine");
//     }
//     return 0;
// }

// Write a C program to find the commission on a salesman's total sales.The commission on a salesman’s total sales is as follows: 
//a) If sales &lt;100, then there is no commission. b) If 100&gt;=sales &lt;=500, then commission = 10% of sales. 
//c) If sales &gt; 500, then commission = 100+8% of sales above 500.

// #include<stdio.h>
// int main(){
//     float sales,commission;
//     printf("Enter the sales amount:");
//     scanf("%f",&sales);
//     if(sales<100){
//         printf("No commission");
//     }
//     else if(100>=sales && sales<=500){
//         commission=sales*0.1;
//         printf("Commission is:%f",commission);
//     }
//     else{
//         commission=(100+0.08)*sales;
//         printf("Commission is:%f",commission);
//     }
//     return 0;
// }

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

// Write a program to take orders from the Internet. Your program asks for the item, its price,and if overnight shipping is wanted. Regular shipping for items under $20 is $5.00; for items $20

// #include<stdio.h>
// int main(){
//     char item[100];
//     float price,shipping,total;
//     int Overnight_delivery;
//     printf("Enter the item:");
//     scanf("%s",item);
//     printf("Enter the price of the item:");
//     scanf("%f",&price);
//     printf("Enter Delivery Option in 0 and 1:\n");
//     scanf("%d",&Overnight_delivery);
//     if(price<20){
//         if(Overnight_delivery==0){
//             printf("Regular Shipping for items under $20 is $5.00\n");
//             shipping=5.00;
//             total=price+shipping;
//         }
//         else if(Overnight_delivery==1){
//             printf("Regular Shipping for items under $20 is $5.00 and Overnight delivery for items is $10.00\n");
//             shipping=15.00;
//             total=price+shipping;
//         }
//         else{
//             printf("Enter valid input for overnight delivery\n");
//         }
//     }
//     else if(price>=20){
//         if(Overnight_delivery==0){
//             printf("for items $20 or more shipping is $8.00\n");
//             shipping=8.00;
//             total=price+shipping;
//         }
//         else if(Overnight_delivery==1){
//             printf("for items $20 or more shipping is $8.00 and Overnight delivery for items is $10.00\n");
//             shipping=18.00;
//             total=price+shipping;
//         }
//         else{
//             printf("Enter valid input for overnight delivery\n");
//         }
//     }
//     printf("Enter the item: %s\n",item);
//     printf("Enter the price: %f\n",price);
//     printf("Invoice:\n");
//     printf("%s %f\n",item,price);
//     printf("shipping:%f\n",shipping);
//     printf("Total is:$%f\n",total);
//     return 0;
// }

// Following is the menu to be displayed to the user. On selecting a choice display appropriate
// result. Number should be accepted from the user.
// Menu
// 1. Sum of all digits
// 2. Number in reverse order

// #include<stdio.h>
// int main(){
//     int menu;
//     printf("Enter the value of menu:");
//     scanf("%d",&menu);
//     switch(menu){
//         case 1:{
//             int n,rem,sum=0;
//             printf("Enter the number:");
//             scanf("%d",&n);
//             int temp=n;
//             while(n>0){
//                 rem=n%10;
//                 sum=sum+rem;
//                 n=n/10;
//             }
//             printf("The sum of all the digits of the number %d is: %d",temp,sum);
//             break;
//         }
//         case 2:{
//             int n,rem,rev=0;
//             printf("Enter the number:");
//             scanf("%d",&n);
//             int temp=n;
//             while(n>0){
//                 rem=n%10;
//                 rev=rev*10+rem;
//                 n=n/10;
//             }
//             printf("The reverse of the the number %d is: %d",temp,rev);
//             break;
//         }
//         default:{
//             printf("Enter valid input");
//             break;
//         }
//     }
//     return 0;
// }

// Following is the menu to be displayed to the user. On selecting a choice display appropriate
// result. Number should be accepted from the user.
// Menu
// 1. GCD of two Numbers
// 2. LCM of two Numbers

// #include<stdio.h>
// int main(){
//     int menu;
//     printf("Enter the value of menu:");
//     scanf("%d",&menu);
//     switch(menu){
//         case 1:{
//             int n1,n2,gcd;
//             printf("Enter the value of two numbers:");
//             scanf("%d %d",&n1,&n2);
//             for(int i=1; i <= n1 && i <= n2; ++i)
//             {
//                 if(n1%i==0 && n2%i==0){
//                     gcd = i;
//                 }
//             }
//             printf("G.C.D of %d and %d is %d", n1, n2, gcd);
//             break;
//         }
//         case 2:{
//             int n1,n2,lcm;
//             printf("Enter the value of two numbers:");
//             scanf("%d %d",&n1,&n2);
//             int max = (n1 > n2) ? n1 : n2;
//             while (1) {
//                 if ((max % n1 == 0) && (max % n2 == 0)) {
//                     printf("The LCM of %d and %d is %d.", n1, n2, max);
//                     break;
//                 }
//                 ++max;
//             }
//             break;
//         }
//     }
//     return 0;
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

// Accept the salary of an employee from the user. Calculate the gross salary on the following
// basis:
// Basic           HRA  DA
// Less than 4001  10%  50%
// 4001 - 8000     20%  60%
// 8001 - 12000    25%  70%
// 12000 and above 30%  80%

// #include <stdio.h>
// int main()
// {
//     float basic_salary, gross_salary, HRA, DA;
//     printf("Enter the basic salary of the employee:");
//     scanf("%f", &basic_salary);
//     if (basic_salary < 4001)
//     {
//         HRA = 0.1 * basic_salary;
//         DA = 0.5 * basic_salary;
//         gross_salary = basic_salary + HRA + DA;
//         printf("The gross salary of the employee:%f\n", gross_salary);
//     }
//     else if (basic_salary >= 4001 && basic_salary <= 8000)
//     {
//         HRA = 0.2 * basic_salary;
//         DA = 0.6 * basic_salary;
//         gross_salary = basic_salary + HRA + DA;
//         printf("The gross salary of the employee:%f\n", gross_salary);
//     }
//     else if (basic_salary >= 8001 && basic_salary <= 12000)
//     {
//         HRA = 0.25 * basic_salary;
//         DA = 0.7 * basic_salary;
//         gross_salary = basic_salary + HRA + DA;
//         printf("The gross salary of the employee:%f\n", gross_salary);
//     }
//     else
//     {
//         HRA = 0.3 * basic_salary;
//         DA = 0.8 * basic_salary;
//         gross_salary = basic_salary + HRA + DA;
//         printf("The gross salary of the employee:%f\n", gross_salary);
//     }
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

// Write program to check entered number is Neon Number or not. (Not:- A neon number is a
// number where the sum of digits of square of the number is equal to the number. Ex Input : 9
// Output : Neon Number
// Explanation: square is 9*9 = 81 and
// sum of the digits of the square is 9.

// #include<stdio.h>
// int main(){
//     int n,rem,sum=0,sqr;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     sqr=n*n;
//     while(sqr!=0){
//         rem=sqr%10;
//         sum=sum+rem;
//         sqr/=10;
//     }
//     if(sum==n){
//         printf("%d is a neon number",n);
//     }
//     else{
//         printf("%d is not a neon number",n);
//     }
//     return 0;
// }

// Write a C language program to read one matrix and find the sum of it’s non-diagonal elements.

// #include<stdio.h>
// int main()
// {
//     int r1,c1;
//     printf("enter the rows and columns values:");
//     scanf("%d %d",&r1,&c1);
//     int a[r1][c1],i,j,sum=0;
//     printf("Enter the element of matrix:");
//     for(i=1;i<=r1;i++)
//     {
//         for(j=1;j<=c1;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("The display of matrix is:\n");
//     for(i=1;i<=r1;i++)
//     {
//         for(j=1;j<=c1;j++)
//         {
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     for(i=1;i<=r1;i++)
//     {
//         for(j=1;j<=c1;j++)
//         {
//             if(i!=j)
//             sum+=a[i][j];
//         }
//     }
//     printf("sum is :%d",sum);
//     return 0;
// }

// Write a program to display the duplicate element in an array.

// #include <stdio.h>
// int main()
// {  
//     int n;
//     printf("Enter the size of array:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of array:");
//         for(int i=1;i<=n;i++)
//         {
//             scanf("%d",&arr[i]);
//         }      
//     printf("Duplicate elements in given array: \n");       
//         for(int i = 1; i <= n; i++) {    
//             for(int j = 1; j <= i; j++) {    
//                 if(arr[i] == arr[j])    
//                     printf("%d\n", arr[j]);    
//             }    
//         }    
//     return 0;    
// } 

// Write a program to display the Unique element in an array.

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of array:");
//     scanf("%d",&n);
//     int array[n],i,j; 
//     printf("Enter %d elements of the array:", size);
//     for (i = 1; i <= size; i++)
//     {
//         scanf("%d", &array[i]);
//     }
//     printf("Unique Elements\n");
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             if (array[i] == array[j])
//                 break;
//         }
//         if (i == j)
//         {
//             printf("%d ", array[i]);
//         }
//     }
//     return 0;
// }

// Write a program to perform Row wise multiplication of element of 2-D array and store in 1D array.

// #include <stdio.h>
// int main() {
//     int rows, cols;
//     printf("Enter number of rows and columns: ");
//     scanf("%d%d", &rows, &cols);
//     int arr[rows][cols], product[rows];
//     printf("Enter elements of the 2D array: \n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("The elements of the 2D array are: \n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     } 
//     for (int i = 0; i < rows; i++) {
//         product[i] = 1;
//         for (int j = 0; j < cols; j++) {
//             product[i] *= arr[i][j];
//         }
//     }
//     printf("Row wise product: ");
//     for (int i = 0; i < rows; i++) {
//         printf("%d ", product[i]);
//     }
//     return 0;
// }

// Write a program to perform Column wise multiplication of element of 2-D array and store in 1D array.

// #include <stdio.h>
// int main() {
//     int rows, cols;
//     printf("Enter number of rows and columns: ");
//     scanf("%d %d", &rows, &cols);
//     int arr[rows][cols], product[cols];
//     printf("Enter elements of the 2D array: ");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("The elements of the 2D array are: \n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     for (int j = 0; j < cols; j++) {
//         product[j] = 1;
//         for (int i = 0; i < rows; i++) {
//             product[j] *= arr[i][j];
//         }
//     }
//     printf("Column wise product: ");
//     for (int j = 0; j < cols; j++) {
//         printf("%d ", product[j]);
//     }
//     return 0;
// }

// Write a program in C to accept a matrix and determine whether it is a sparse matrix. (Note:-
// If most of the elements of the matrix have 0 value, then it is called a sparse matrix.)

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//    int row,col,i,j,a[10][10],count = 0;
//    printf("Enter the number of rows:");
//    scanf("%d",&row);
//    printf("Enter the number of columns:");
//    scanf("%d",&col);
//    printf("Enter Element of Matrix:");
//    for(i = 0; i < row; i++){
//       for(j = 0; j < col; j++){
//          scanf("%d",&a[i][j]);
//       }
//    }
//    printf("Elements of the matrix are:\n");
//    for(i = 0; i < row; i++){
//       for(j = 0; j < col; j++){
//          printf("%d ",a[i][j]);
//       }
//       printf("\n");
//    }
//    printf("\n");
//    for(i = 0; i < row; i++){
//       for(j = 0; j < col; j++){
//          if(a[i][j] == 0)
//             count++;
//       }
//    }
//    if(count > ((row * col)/2))
//       printf("Matrix is a sparse matrix");
//    else
//       printf("Matrix is not sparse matrix");
// }

// Write a Program to perform Linear Search by writing user define function to check element present in array or not.

// #include<stdio.h>
// int main(){
//     int n,search,i;
//     printf("Enter the size of array:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of array:");
//     for(int i=1;i<=n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the element you want to search for:");
//     scanf("%d",&search);
//     for(int i=1;i<=n;i++){
//         if(arr[i]==search){
//             printf("Element found at %d location.\n",i); 
//         }
//     }
//     return 0;
// }

// Write a Program to perform Binary Search by writing user define function to check element present in array or not.


// #include<stdio.h>
// int main(){
//     int n,search;
//     printf("Enter the size of the array:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of array:");
//     for(int i=1;i<=n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter the element you want to search for:");
//     scanf("%d",&search);
//     int first=0,last=n-1;middle=(first+last)/2;
//     while(first<=last){
//         if(arr[middle]<search){
//             first=middle+1;
//         }
//         else if(arr[middle]==search){
//             printf("Element found at %d location.\n",middle);
//             break;
//         }
//         else{
//             last=middle-1;
//         }
//         middle=(first+last)/2;
//     }
//     if(first>last){
//         printf("Not Found!%d is not present in the list.\n",search);
//     }
//     return 0;
// }

// Write a function to check whether two positive number is co-prime or not . (Note:- If
// GCD of two number is 1 then its called co-prime numbers).

// #include<stdio.h>  
// int coprime(int num1, int num2)  
// {  
//     int min, count, flag = 1;  
//     min = num1 < num2 ? num1 : num2;  
//     for(count = 2; count <= min; count++)  
//     {  
//         if( num1 % count == 0 && num2 % count == 0 )  
//         {  
//             flag = 0;  
//             break;  
//         }  
//     }  
//     return(flag);  
// }  
// int main()  
// {  
//     int n1, n2;  
//     printf("Enter 2 positive numbers:");  
//     scanf("%d %d", &n1, &n2);  
//     if( coprime(n1, n2) )  
//     {  
//         printf("%d and %d are co-prime numbers.\n", n1, n2);  
//     }  
//     else  
//     {  
//         printf("%d and %d are not co-prime numbers.\n", n1, n2);  
//     }  
//     return 0;  
// }  

// Write a C Program using Insertion Sort and Selection Sort. Create a vector(1-D Array)
// storing  N integers in ascending or descending sequence. The User will choose the order
// before proceeding for sorting.

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter 1 for Insertion Sort and 2 for Selection Sort:");
//     scanf("%d",&ch);
//     int n,temp,position,i,j;
//     printf("Enter the size of the array:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of the array:");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     switch(ch){
//         case 1:{
//             for(int i=1;i<n;i++){
//                 j=i;
//                 while(j>0 && arr[j-i]>arr[j]){
//                     temp=arr[j];
//                     arr[j]=arr[j-1];
//                     arr[j-1]=temp;
//                     j--;
//                 }
//             }
//             printf("Sorting in ascending order:\n");
//                 for(int i=0;i<n;i++){
//                     printf("%d ",arr[i]);
//                 }
//                 break;
//         }
//         case 2:{
//             for(int i=0;i<n-1;i++){
//                 position=i;
//                 for(int j=i+1;j<n;j++){
//                     if(arr[position]>arr[j]){
//                         position=j;
//                     }
//                 }
//                 temp=arr[i];
//                 arr[i]=arr[position];
//                 arr[position]=temp;
//             }
//             printf("Sorting in ascending order:\n");
//                 for(int i=0;i<n;i++){
//                     printf("%d ",arr[i]);
//                 }
//                 break;
//         }
//         defualt:{
//             printf("Enter valid input");
//         }
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

