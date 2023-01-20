// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%c",i+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A
// BB
// CCC
// DDDD
// EEEEE

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             printf("%c",i+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// AAAAA
// BBBB
// CCC
// DD
// E


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%c",j+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A
// AB
// ABC
// ABCD
// ABCDE

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=i;j<=n;j++){
//             printf("%c",j+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// E
// DE
// CDE
// BCDE
// ABCDE

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>=1;j--){
//             printf("%c",j+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A
// BA
// CBA
// DCBA
// EDCBA

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>=i;j--){
//             printf("%c",j+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// E
// ED
// EDC
// EDCB
// EDCBA

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>=i;j--){
//             printf("%c",i+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// E
// DD
// CCC
// BBBB
// AAAAA

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("%c",i+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EEEEE
// DDDD
// CCC
// BB
// A

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>=i;j--){
//             printf("%c",j+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EDCBA
// EDCB
// EDC
// ED
// E

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=i;j>=1;j--){
//             printf("%c",j+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EDCBA
// DCBA
// CBA
// BA
// A

// #include<stdio.h> 
// int main()
// {
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++)
//         {
//             printf("%c",(k+64));
//         }
//         for(int l=i-1;l>=1;l--)
//         {
//             printf("%c",(l+64));
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     char s[]="INDIA";
//     for(int i=0;i<=s[i];i++){
//         for(int j=0;j<=i;j++){
//             printf("%c",s[j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// I
// IN
// IND
// INDI
// INDIA

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=1,k='A';j<=i;j++,k++){
//             printf("%d%c",j,k);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 1A2B3C4D5E
// 1A2B3C4D
// 1A2B3C
// 1A2B
// 1A

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     int ch='A';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=i;k>=1;k--){
//             printf("%c",k+64);
//         }
//         for(int l='B';l<=ch;l++){
//             printf("%c",l);
//         }
//         ch++;
//         printf("\n");
//     }
//     return 0;
// }

//     A
//    BAB
//   CBABC
//  DCBABCD
// EDCBABCDE

// #include<stdio.h>
// int main()
// {
//     int i,j,k,l,m;
//     for(i=0;i<=6;i++)
//     {
//         for(j=1;j<=i*2-1;j++){
//             printf(" ");
//         }
//         for(k=65;k<=71-i;k++){
//             printf("%c",k);
//         }
//         for(l=71-i;l>=65;l--){
//             if(l!=71){
//                 printf("%c",l);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     int k=1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++){
//             printf("%c",k+64);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A
// BC
// DEF
// GHIJ
// KLMNO

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     int diff,value;
//     for(int i=1;i<=n;i++)
//     {
//         diff=n-1;
//         value=i;
//         for(int j=1; j<=i; j++)
//         {
//             printf("%c",(char)(value+64));
//             value=value+diff;
//             diff--;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A
// BF
// CGJ
// DHKM
// EILNO

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*i-1;j++){
//             printf("%c",(j+64));
//         }
//         printf("\n");
//     }
//     return 0;
// }

// A
// ABC
// ABCDE
// ABCDEFG
// ABCDEFGHI

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         int k=i;
//         for(int j=1;j<=i;j++){
//             printf("%c",(k+64));
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EFGHI
// DEFG
// CDE
// BC
// A

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             printf("%c",(j+64));
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ABCDE
// BCDE
// CDE
// DE
// E

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
//             printf("%c",(i+64));
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     A
//    BB
//   CCC
//  DDDD
// EEEEE

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     int k = 0, l = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++, k++, l++)
//         {
//             if (k % 2 == 0)
//             {
//                 printf("%c", (char)(l + 96));
//             }
//             else
//             {
//                 printf("%c", (char)(l + 64));
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// a
// Bc
// DeF
// gHiJ
// kLmNo

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(j%2==0){
//                 printf("A");
//             }
//             else{
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *
// *A
// *A*
// *A*A
// *A*A*

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*i-1;j++){
//             if(j%2==0){
//                 printf("A");
//             }
//             else{
//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// *
// *A*
// *A*A*
// *A*A*A*

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("%c",i+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("%c",j+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// ABCDE
// ABCDE
// ABCDE
// ABCDE
// ABCDE

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=n;j++){
//             printf("%c",i+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EEEEE
// DDDDD
// CCCCC
// BBBBB
// AAAAA

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>=1;j--){
//             printf("%c",j+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// EDCBA
// EDCBA
// EDCBA
// EDCBA
// EDCBA

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
//             printf("%c",i+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//     A
//    BBB
//   CCCCC
//  DDDDDDD
// EEEEEEEEE

