// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *
// **
// ***
// ****
// *****

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==n||j==1||i==j)
//                 printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *    
// **
// * *
// *  *
// *****

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     *
//    **
//   ***
//  ****
// *****

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j==n||i==n||j==n-i+1)
//                 printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     *
//    **
//   * *
//  *  *
// *****

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****
// ****
// ***
// **
// *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1||j==1||j==n-i+1)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****
// *  *
// * *
// **
// *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i-1;j++){
//         printf(" ");
//     }
//     for(int k=n;k>=i;k--){
//         printf("*");
//     }
//     printf("\n");
// }
//     return 0;
// }

// *****
//  ****
//   ***
//    **
//     *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i-1;j++){
//         printf(" ");
//         }
//         for(int k=n;k>=i;k--){
//             if(i==1||k==n||i==k)
//                 printf("*");
//             else
//                 printf(" ");
//         }        
//         printf("\n");
//     }
//     return 0;
// }

// *****
//  *  *
//   * *
//    **
//     *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****
// *****
// *****
// *****
// *****

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i-1;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=n;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****
//  *****
//   *****
//    *****
//     *****

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=2*i-1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     *
//    ***
//   *****
//  *******
// *********

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=2*i-1;k++){
//             if(i==n||k==1||k==(2*i-1))
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     *
//    * *
//   *   *
//  *     *
// *********

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>=i;j--){
//             printf(" ");
//         }
//         for(int k=1;k<2*i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//  *********
//   *******
//    *****
//     ***
//      *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//    for(int i=n;i>=1;i--){
//     for(int j=n;j>=i;j--){
//         printf(" ");
//     }
//     for(int k=1;k<2*i;k++){
//         if(i==n||k==1||k==(2*i-1))
//             printf("*");
//         else
//             printf(" ");
//     }
//     printf("\n");
// }
//     return 0;
// }

//  *********
//   *     *
//    *   *
//     * *
//      *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<n;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=i;j<=n;j++){
//             printf(" ");
//         }
//         for(int k=1;k<i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     *
//    **
//   ***
//  ****
// *****
//  ****
//   ***
//    **
//     *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=(2*i-1);k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int k=1;k<(2*i);k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=2*i-1;k++){
//             if(k==1||k==(2*i-1))
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int k=1;k<2*i;k++){
//             if(k==1||k==(2*i-1))
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//    *
//   * *
//  *   *
// *     *
// *     *
//  *   *
//   * *
//    *

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the number of rows:");
// scanf("%d",&n);
// for(int i=1;i<=n;i++){
//     for (int j = 1; j <=n; j++)
//     {
//         if(i==j||i==n||j==1||j==n||j==n-i+1||i==1)
//             printf("*");
//         else{
//             printf(" ");
//         }
//     }
//     printf("\n");
// }
//     return 0;
// }

// *********
// **     **
// * *   * *
// *  * *  *
// *   *   *
// *  * *  *
// * *   * *
// **     **
// *********

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=n;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     *****
//    *****
//   *****
//  *****
// *****

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=n;k++){
//             if(i==1||i==n||k==1||k==n)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     *****
//    *   *
//   *   *
//  *   *
// *****

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i-1;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=n;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****
//  *****
//   *****
//    *****
//     *****

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i-1;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=n;k++){
//             if(i==1||i==n||k==1||k==n)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****
//  *   *
//   *   *
//    *   *
//     *****

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the number of rows:");
// scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for (int j = 1; j <=n; j++)
//     {
//             if(i==n||j==1||j==n||i==1)
//                 printf("*");
//             else
//                 printf(" ");
//     }
//     printf("\n");
//     }
//     return 0;
// }

// *****
// *   *
// *   *
// *   *
// *****

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the number of rows:");
// scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i==(n/2)+1){
//             for (int j=1;j<=n;j++)
//             {
//                 printf("+");
//             }
//         }
//         else{
//             for(int j=1;j<=n/2;j++){
//                 printf(" ");
//             }
//             printf("+");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//    +
//    +
//    +
// +++++++
//    +
//    +
//    +

// #include<stdio.h>
// int main(){
// int n;
// printf("Enter the number of rows:");
// scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for (int j = 1; j <=n; j++)
//         {
//             if(i==j||j==n-i+1)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//     printf("\n");
//     }
//     return 0;
// }

// *   *
//  * *
//   *
//  * *
// *   *

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i-1;j++){
//             printf(" ");;
//         }
//         for(int k=n;k>=i;k--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****
//  ****
//   ***
//    **
//     *
//     *
//    **
//   ***
//  ****
// *****

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *****
// ****
// ***
// **
// *
// *
// **
// ***
// ****
// *****
