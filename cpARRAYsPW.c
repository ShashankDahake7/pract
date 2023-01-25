// Second Max

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of the array:");
//     for(int i=1;i<=n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max=INT_MIN;
//     int smax=INT_MIN;
//     for(int i=1;i<=n;i++){
//         if(max<arr[i]){
//             smax=max;
//             max=arr[i];
//         }
//         else if(smax<arr[i] && max!=arr[i]){
//             smax=arr[i];
//         }
//     }
//     printf("%d\n",max);
//     printf("%d\n",smax);
//     return 0;
// }

// Third Max

// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of the array:");
//     for(int i=1;i<=n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max=INT_MIN;
//     int smax=INT_MIN;
//     int tmax=INT_MIN;
//     for(int i=1;i<=n;i++){
//         if(max<arr[i]){
//             tmax=smax;
//             smax=max;
//             max=arr[i];
//         }
//         else if(smax<arr[i] && max!=arr[i]){
//             tmax=smax;
//             smax=arr[i];
//         }
//         else if(tmax<arr[i] && smax!=arr[i] && max!=arr[i]){
//             tmax=arr[i];
//         }
//     }
//     printf("%d\n",max);
//     printf("%d\n",smax);
//     printf("%d\n",tmax);
//     return 0;
// }

// Reverse of an array

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array:");
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int brr[n];
//     for (int i = 1; i <= n; i++)
//     {
//         brr[i] = arr[n - i + 1];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", brr[i]);
//     }
//     return 0;
// }

// Reverse of an array witout using an extra array

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array:");
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("The array is:");
//     for(int i=1;i<=n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     int i=1,j=n;
//     while(i<j){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
//     printf("The Reverse array is:");
//     for(int i=1;i<=n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// Palindrome

// #include <stdio.h>
// int reverse(int num)
// {
//     int rem;
//     static int rev = 0;
//     if (num != 0)
//     {
//         rem = num % 10;
//         rev = (rev * 10) + rem;
//         reverse(num / 10);
//     }
//     else
//     {
//         return rev;
//     }
// }
// int isPalindrome(int num)
// {
//     if (num == reverse(num))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter the number:");
//     scanf("%d", &num);
//     if (isPalindrome(num) == 1)
//     {
//         printf("%d is a palindrome", num);
//     }
//     else
//     {
//         printf("%d is not a palindrome", num);
//     }
//     return 0;
// }

// Palindrome array

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array:");
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("The array is:");
//     for(int i=1;i<=n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     int i=1,j=n;
//     while(i<j){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     printf("The Reverse array is:");
//     for(int i=1;i<=n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//         if(arr[i]==arr[j]){
//             printf("Palindrome\n");
//             break;
//         }
//         else{
//             printf("Not a Palindrome\n");
//             break;
//         }
//     }
//     return 0;
// }

// Rotation of Array

// #include <stdio.h>
// void reverse(int arr[],int a, int b)
// {
//     int i, j;
//     for (int i = a, j = b; i < j; i++, j--)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
// }
// int main()
// {
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array:");
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("The array is:");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     int k;
//     printf("Enter the value of rotation of the rotation:");
//     scanf("%d", &k);
//     k = k % n;
//     reverse(arr, 1, n);
//     printf("The reverse array is:");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     reverse(arr, 1, k);
//     printf("The 1st changed array is:");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     reverse(arr, k + 1, n);
//     printf("The 2nd changed array is:");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// Missing Element

// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
    // int n;
    // printf("Enter the size of the array:");
    // scanf("%d", &n);
    // int arr[n];
    // printf("Enter the elements of the array:");
    // for (int i = 1; i <= n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    // printf("The array is:");
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");
//     int search,store=1;
//     printf("Enter the element you want to search for:");
//     scanf("%d",&search);
//     bool check=false;
//     for(int i=1;i<=n;i++){
//         if(arr[i]==search){
//             check=true;
//             store=i;
//             break;
//         }
//     }
//     if(check==false){
//     printf("%d is the missing element",search);
//     }
//     else{
//         printf("%d is present at index %d in the array",search,store);
//     }
//     return 0;
// }

// Given an array containing elements from 1 to 100 except one element in this range is missing.Find the missing element.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array:");
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("The array is:");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     int sum1=0;
//     printf("The sum of the elements of the array is: ");
//     for(int i=1;i<=n-1;i++){
//         sum1=sum1+arr[i];
//     }
//     for(int i=1;i<=n;i++){
//         printf("%d\n",sum1);
//         break;
//     }
//     int sum2=(n*(n+1))/2;
//     printf("The sum of the elements from 1 to %d is: %d\n",n,sum2);  
//     printf("Value of missing element is:%d\n",sum2-sum1);
//     return 0;
// }

// Duplicate Array

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array:");
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("The array is:");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if(arr[i]==arr[j]){
//                 printf("%d is the duplicate element\n",arr[i]);
//                 break;
//             }
//         }
//     }
//     return 0;
// }

// Find the unique number in a given array where all the elements are being repeated twice with one value being one.

// #include<stdio.h>
// #include<stdbool.h>
// int main(){
//     int n;
//     printf("Enter the size of the array:");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements of the array:");
//     for (int i = 1; i <= n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("The array is:");
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     int i,j;
//     for (int i = 1; i <= n; i++)
//     {
//         bool check=false;
//         for (int j = i+1; j <= n; j++)
//         {
//             if(arr[i]==arr[j]){
//                 check=true;
//                 break;
//             }
//         }
//         if(check==false){
//             printf("%d is a unique element\n",arr[i]);
//             // break;
//     }
//         else{
//             printf("%d is the duplicate element\n",arr[i]);
//             // break;
//         }
//     }
//     return 0;
// }

// Write a C program to store roll number and marks obtained by 4 students side by side in a matrix

// #include <stdio.h>
// int main() {
//     int r,c;
//     printf("Enter the number of rows and columns:");
//     scanf("%d %d",&r,&c);
//     int marks[r][c]; 
//     int i, j;
//     for(i = 1; i <= r; i++) {
//         printf("Enter roll number and marks for student %d: ", i );
//         scanf("%d %d", &marks[i][1], &marks[i][2]);
//     }
//     printf("Roll Number\tMarks\n");
//     for(i = 1; i <= r; i++) {
//         for(j = 1; j <= c; j++) {
//             printf("%d\t\t", marks[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Write  Program to store 10 at every index of a 2D matrix with 4 rows and 4 columns.

// #include <stdio.h>
// int main() {
//     int r,c;
//     printf("Enter the number of rows and columns:");
//     scanf("%d %d",&r,&c);
//     int arr[r][c];
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }printf("\n");
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Add two matrices

// #include <stdio.h>
// int main() {
//     int r,c;
//     printf("Enter the number of rows and columns:");
//     scanf("%d %d",&r,&c);
//     int arr[r][c],b[r][c],sum[r][c];
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("\n");
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             sum[i][j]=arr[i][j]+b[i][j];
//         }
//     }
//     printf("\n");
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             printf("%d ",sum[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Maximum Element

// #include <stdio.h>
// #include<limits.h>
// int main() {
//     int r,c;
//     printf("Enter the number of rows and columns:");
//     scanf("%d %d",&r,&c);
//     int arr[r][c];
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }printf("\n");
//     int max=INT_MIN;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             if(max<arr[i][j]){
//                 max=arr[i][j];
//             }
//         }
//     }printf("\n");
//     printf("%d",max);
//     return 0;
// }

// Maximum with its index in 2D array

// #include <stdio.h>
// #include<limits.h>
// int main() {
//     int r,c;
//     printf("Enter the number of rows and columns:");
//     scanf("%d %d",&r,&c);
//     int arr[r][c];
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }printf("\n");
//     int max=INT_MIN,row=0,col=0;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             if(max<arr[i][j]){
//                 max=arr[i][j];
//                 row = i;
//                 col = j;
//             }
//         }
//     }
//     printf("%d maximum value is present at %d %d",max,row,col);

//    return 0;
// }


// Minimum element

// #include <stdio.h>
// #include<limits.h>
// int main() {
    // int r,c;
    // printf("Enter the number of rows and columns:");
    // scanf("%d %d",&r,&c);
    // int arr[r][c];
    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=c;j++){
    //         scanf("%d",&arr[i][j]);
    //     }
    // }printf("\n");
//     int min=INT_MAX;
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             if(min>arr[i][j]){
//                 min=arr[i][j];
//             }
//         }
//     }printf("\n");
//     printf("%d",min);
//     return 0;
// }

// Given a matrix A of dimension nxm and 2 coordinates(l1,r1)) and (l2,r2).Return the sum of the rectangle from (l1,r1) to(l2,r2) 

// #include <stdio.h>
// int main() {
//     int r,c;
//     printf("Enter the number of rows and columns:");
//     scanf("%d %d",&r,&c);
//     int matrix[r][c];
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("\n");
//     int l1, r1, l2, r2;
//     int sum = 0;
//     printf("Enter the coordinates of the top-left corner (l1, r1): ");
//     scanf("%d %d", &l1, &r1);
//     printf("Enter the coordinates of the bottom-right corner (l2, r2): ");
//     scanf("%d %d", &l2, &r2);
//     for (int i = l1; i <= l2; i++) {
//         sum=0;
//         for (int j = r1; j <= r2; j++) {
//             sum += matrix[i][j];
//         }
//     }
//     printf("The sum of the rectangle is: %d", sum);
//     return 0;
// }

// Write a program to print the row number having the maximum sum in a given matrix and the maximum sum

// #include <stdio.h>
// int main() {
//     int ROWS,COLS;
//     printf("ROWS AND COLUMNS:");
//     scanf("%d %d",&ROWS,&COLS);
//     int matrix[ROWS][COLS];
//     for(int i=0;i<ROWS;i++){
//         for (int j = 0; j < COLS; j++)
//         {
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     int max_sum = 0;
//     int max_row = 0;
//     int row_sum = 0;
//     for (int i = 0; i < ROWS; i++) {
//         row_sum = 0;
//         for (int j = 0; j < COLS; j++) {
//             row_sum += matrix[i][j];
//         }
//         if (row_sum > max_sum) {
//             max_sum = row_sum;
//             max_row = i;
//         }
//     }
//     printf("The row with the maximum sum is: %d\n", max_row + 1);
//     printf("The maximum sum is: %d\n", max_sum);
//     return 0;
// }

// Find row with Maximum number of 1 with matrix filled with 1's and 0's

// #include <stdio.h>
// int main() {
//     int r,c;
//     printf("ROWS AND COLUMNS:");
//     scanf("%d %d",&r,&c);
//     int matrix[r][c];
//     for(int i=0;i<r;i++){
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     printf("\n");
//     int max_row=0;
//     int max_index=-1;
//     for (int i = 0; i < r; i++)
//     {
//         int count=0;
//         for (int j = 0; j < c; j++)
//         {
//             if(matrix[i][j]==1){
//                 count++;
//             }
//         }
//         if(max_row<count){
//             max_row=count;
//             max_index=i;
//         }
//     }
//     printf("%d maximum number of 1's of row %d",max_row,max_index+1);
//     return 0;
// }

// Transpose m*n

// #include <stdio.h>
// int main() {
//     int r,c;
//     printf("ROWS AND COLUMNS:");
//     scanf("%d %d",&r,&c);
//     int a[r][c],b[r][c];
//     for(int i=0;i<r;i++){
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n");
//     printf("Transpose is:\n");
//     for(int i=0;i<c;i++){
//         for (int j = 0; j < r; j++)
//         {
//            b[i][j]=a[j][i];
//         }
//     }
//     printf("\n");
//     for(int i=0;i<c;i++){
//         for (int j = 0; j < r; j++)
//         {
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Transpose of a matrix

// #include <stdio.h>
// int main() {
//     int n;
//     printf("ROWS/COLUMNS:");
//     scanf("%d",&n);
//     int a[n][n],b[n][n];
//     for(int i=0;i<n;i++){
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n");
//     printf("Transpose is:\n");
//     for(int i=0;i<n;i++){
//         for (int j = 0; j < n; j++)
//         {
//            b[j][i]=a[i][j];
//         }
//     }
//     printf("\n");
//     for(int i=0;i<n;i++){
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Rotate (90)

// #include <stdio.h>
// int main() {
//     int n;
//     printf("ROWS/COLUMNS:");
//     scanf("%d",&n);
//     int arr[n][n];
//     for(int i=0;i<n;i++){
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<n;i++){
//         for (int j = 0; j <= i; j++)
//         {
//            int temp=arr[i][j];
//            arr[i][j]=arr[j][i];
//            arr[j][i]=temp;
//         }
//     }
//     printf("\n");
//     for(int i=0;i<n;i++){
//         int j=0;
//         int k=n-1;
//         while(j<k)
//         {
//             int temp=arr[i][j];
//             arr[i][j]=arr[i][k];
//             arr[i][k]=temp;
//             j++;
//             k--;
//         }
//     }
//     printf("\n");
//     printf("Rotated matrix is:\n");
//     for(int i=0;i<n;i++){
//         for (int j = 0; j < n; j++)
//         {
//            printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Matrix Multiplication

// #include<stdio.h>
// int main(){
//     int r1,c1,r2,c2;
//     printf("Values of r1,c1,r2,c2:");
//     scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
//     int arr[r1][c1],brr[r2][c2],mul[r1][c2];
//     if(c1==r2){
//         for (int i = 0; i < r1; i++)
//         {
//             for (int j = 0; j < c1; j++)
//             {
//                 scanf("%d",&arr[i][j]);
//             } 
//         }
//         printf("\n");
//         for (int i = 0; i < r2; i++)
//         {
//             for (int j = 0; j < c2; j++)
//             {
//                 scanf("%d",&brr[i][j]);
//             }  
//         }
//         printf("\n");
//         printf("Multiplication Matrix:\n");
//         for (int i = 0; i < r1; i++)
//         {   
//             for (int j = 0; j < c2; j++)
//             {   
//                 mul[i][j]=0;
//                 for (int k = 0; k < r2; k++)
//                 {
//                     mul[i][j]+=(arr[i][k]*brr[k][j]);
//                 }
//             }
//         }
//         for (int i = 0; i < r1; i++)
//         {   
//             for (int j = 0; j < c2; j++)
//             {
//                 printf("%d ",mul[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else{
//             printf("Matrix Multiplication is not possible");
//     }
//     return 0;
// }

// Spiral order
// 1 2 3
// 6 5 4
// 7 8 9

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     int arr[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {   
//         if(i%2==0){
//             for (int j = 0; j < n; j++)
//             {
//                 printf("%d ",arr[i][j]);
//             }
//         }
//         else{
//             for (int j = n-1; j >= 0; j--)
//             {
//                 printf("%d ",arr[i][j]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Spiral order
// 7 4 1
// 2 5 8
// 9 6 3

// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("Enter the value of n:");
//     scanf("%d %d",&r,&c);
//     int arr[r][c];
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//         for (int j = 0; j < c; j++)
//         {
//             if(j%2==0){
//                 for (int i = c-1; i >=0; i--)
//                 {
//                     printf("%d ",arr[i][j]);

//                 }
//             }
//             else{
//                 for (int i = 0; i < c; i++)
//                 {

//                     printf("%d ",arr[i][j]);

//                 }
//             }    
//         printf("\n");
//         } 
//     return 0;
// }

// Print matrix
// 1 2 3 6 9 8 7 4 5

// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("Enter the rows and colums:");
//     scanf("%d %d",&r,&c);
//     int arr[r][c];
//     printf("Enter the matrix:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     printf("\n");
//     int minr=0,maxr=r-1,minc=0,maxc=c-1,tot_ele=r*c,count=0;   
//     while(count<tot_ele){
//         // Print the minimum row
//         for (int j = minc; j <= maxc; j++)
//         {
//             printf("%d ",arr[minr][j]);
//             count++;
//         }
//         minr++;
//         if(count>=tot_ele){
//             break;
//         }
//         // Print the maximum column
//         for(int i=minr;i<=maxr;i++){
//             printf("%d ",arr[i][maxc]);
//             count++;
//         }
//         maxc--;
//         if(count>=tot_ele){
//             break;
//         }
//         // Print the maximum row
//         for(int j=maxc;j>=minc;j--){
//             printf("%d ",arr[maxr][j]);
//             count++;
//         }
//         maxr--;
//         if(count>=tot_ele){
//             break;
//         }
//         // Print the minimum column
//         for(int i=maxr;i>=maxr;i--){
//             printf("%d ",arr[i][minc]);
//             count++;
//         }
//         minc++;
//         if(count>=tot_ele){
//             break;
//         }
//     }
//     return 0;
// }
