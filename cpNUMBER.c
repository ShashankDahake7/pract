// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 12
// 123
// 1234
// 12345

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=i;j<=n;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 5
// 45
// 345
// 2345
// 12345

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 12345
// 1234
// 123
// 12
// 1

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 12345
// 2345
// 345
// 45
// 5

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=i;j>=1;j--){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 54321
// 4321
// 321
// 21
// 1

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 54321
// 5432
// 543
// 54
// 5

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>=1;j--){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 21
// 321
// 4321
// 54321

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>=i;j--){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 5
// 54
// 543
// 5432
// 54321

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 22
// 333
// 4444
// 55555

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>=i;j--){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 5
// 44
// 333
// 2222
// 11111

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i=i-2){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1234567
// 12345  
// 123    
// 1  


// #include<stdio.h>
// int main(){
//     int n,k;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         if(i%2==1)
//             k=1;
//         else
//             k=i;
//         for(int j=1;j<=i;j++){
//             printf("%d",k);
//             if(i%2==1)
//                 k++;
//             else
//                 k--;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 12345
// 4321 
// 123  
// 21   
// 1   

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 11111
// 2222
// 333
// 44
// 5

// #include<stdio.h>
// int main(){
//     int n,k;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         k=i;
//         for(int j=1;j<=n;j++){
//             if(k<=n)
//                 printf("%d",k);
//             else
//                 printf("5");
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 55555
// 45555
// 34555
// 23455
// 12345


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>=1;j--){
//            printf("%d",j%2);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 01
// 101
// 0101
// 10101

// #include<stdio.h>
// int main(){
//     int n,k;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i%2==0)
//             k=2;
//         else
//             k=1;
//         for(int j=1;j<=i;j++,k=k+2){
//             printf("%d",k);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1
// 24
// 135
// 2468
// 13579


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i=i+2){
//         for(int j=i;j<=n;j=j+2){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 13579
// 3579
// 579
// 79
// 9

// #include<stdio.h>
// int main()
// {
//     int r;
//     printf("Enter the value of r:");
//     scanf("%d",&r);
//     int i,j,k,m,n,o,p;
//     int l=2*r;
//     for(i=0; i<=r; i++)
//     {
//         for(j=0; j<=i; j++)
//         {
//             if(j%2==0)
//                 printf("0");
//             else
//                 printf("1");
//         }
//         for(k=1; k<=l; k++)
//         {
//             printf(" ");
//         }
//             l = l-2;
//         for(m=0; m<=i; m++)
//         {
//             if(m%2==0)
//             printf("0");
//             else
//             printf("1");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 0        0
// 01      01
// 010    010
// 0101  0101
// 0101001010

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=0; i<=n; i++)
//     {
//         for(int k=0;k<=n-i;k++){
//             printf(" ");
//         }
//         for(int j=0; j<=i; j++)
//         {
//             if(j%2==0)
//                 printf("0 ");
//             else
//                 printf("1 ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//       0 
//      0 1
//     0 1 0
//    0 1 0 1
//   0 1 0 1 0
//  0 1 0 1 0 1
