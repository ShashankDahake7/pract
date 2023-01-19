// #include<stdio.h>
//  int main() {
//  int a[30], i, num, greatest;
//  printf("\nEnter no of elements :");
//  scanf("%d", &num);
//  for (i = 0; i < num; i++)
//  scanf("%d", &a[i]);
//   greatest = a[0];
//    for (i = 0; i < num; i++)
//    {
//           if (a[i] > greatest)
// 	{
//          	greatest = a[i];
// 	 }
//     }
//     // Print out the Result
//    printf("Greatest Element : %d", greatest);
//    return (0);
// }

// #include <stdio.h>
// int main()
// {
//     int a[30], i, num, smallest;
//     printf("\nEnter no of elements :");
//     scanf("%d", &num);
//     for (i = 0; i < num; i++){
//         scanf("%d", &a[i]);
//     }
//     smallest = a[0];
//     for (i = 0; i < num; i++)
//     {
//         if (a[i] < smallest)
//         {
//             smallest = a[i];
//         }
//     }
//     // Print out the Result
//     printf("Smallest Element : %d", smallest);
//     return (0);
// }

// #include<stdio.h>
// int main()
// {
//     int a[30],n,i,search;
//     printf("Enter the number of elements:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the element you want to search for it's location:");
//     scanf("%d",&search);
//     for(i=0;i<n;i++){
//         if(a[i]==search){
//             printf("Element number is located at:%d",i);
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int n, a[30], b[30], i;
//     printf("Enter the number of terms:");
//     scanf("%d", &n);
//     printf("Enter the value of array a:");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the value of array b:");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &b[i]);
//     }
//     printf("The grades of array a:\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\nThe grades of array b:");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", b[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("The addition of %d column corresponding elements of a and b:%d\n", i, a[i] + b[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of elements:");
//     scanf("%d", &n);
//     int a[30];
//     printf("Enter the number of integers present:");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int search;
//     printf("Enter the value you want to search for:");
//     scanf("%d", &search);
//     int first = 0;
//     int last = n - 1;
//     int middle = (first + last) / 2;
//     while (first <= last)
//     {
//         if (a[middle] < search)
//         {
//             first = middle + 1;
//         }
//         else if (a[middle] == search)
//         {
//             printf("Element found  %d at %d location\n", search, middle);
//             break;
//         }
//         else
//         {
//             last = middle - 1;
//         }
//         middle = (first + last) / 2;
//     }
//     if (first > last)
//     {
//         printf("Not found!%d is not in the list\n", search);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[2][2], i, j;
//     printf("\n\nEnter the 4 elements of the array\n");
//     for(i = 0; i < 2; i++)
//     for(j = 0; j < 2; j++)
//     scanf("%d", &a[i][j]);
//     printf("\n\nThe entered matrix is: \n\n");
//     for(i = 0; i < 2; i++)
//     {
//         for(j = 0; j < 2; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[3][3], i, j;
//     printf("\n\nEnter the 9 elements of the array\n");
//     for(i = 0; i <= 2; i++)
//     for(j = 0; j <= 2; j++)
//     scanf("%d", &a[i][j]);
//     printf("\n\nThe entered matrix is: \n\n");
//     for(i = 0; i <= 2; i++)
//     {
//         for(j = 0; j <= 2; j++)
//         {
//             printf("%d\t", a[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[3][3],b[3][3];
//     printf("Enter the elements of 3x3 matrix:\n");
//     for(int i=0;i<=2;i++){
//         for(int j=0;j<=2;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <=2; j++)
//         {
//             b[i][j]=a[j][i];
//         }
//     }
//     printf("The transpose of the 3x3 matrix is:\n");
//     for (int i = 0; i <= 2; i++)
//     {
//         for (int j = 0; j <= 2; j++)
//         {
//             printf("%d\t",b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//    int m, n, c, d, first[10][10], second[10][10], sum[10][10];

//    printf("Enter the number of rows and columns of matrix\n");
//    scanf("%d%d", &m, &n);
//    printf("Enter the elements of first matrix\n");

//    for (c = 0; c < m; c++)
//       for (d = 0; d < n; d++)
//          scanf("%d", &first[c][d]);

//    printf("Enter the elements of second matrix\n");

//    for (c = 0; c < m; c++)
//       for (d = 0 ; d < n; d++)
//          scanf("%d", &second[c][d]);

//    printf("Sum of entered matrices:-\n");

//    for (c = 0; c < m; c++) {
//       for (d = 0 ; d < n; d++) {
//          sum[c][d] = first[c][d] + second[c][d];
//          printf("%d\t", sum[c][d]);
//       }
//       printf("\n");
//    }

//    return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a[50][50],b[50][50],r,c,i,j;
//     printf("Enter the rows and columns:");
//     scanf("%d %d",&r,&c);
//     printf("Enter the elements of A:\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the elements of B:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             b[i][j]=a[j][i];
//         }
//     }
//     printf("The transpose of the matrix is:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("%d\t",b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[50][50], b[50][50], r, c, prod[50][50], i, j, k;
//     printf("Enter the rows and columns:");
//     scanf("%d %d", &r, &c);
//     printf("Enter the elements of A:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter the elements of B:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     printf("Multiplication of the matrix:\n");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             prod[i][j] = 0;
//             for (k = 0; k < c; k++)
//             {
//                 prod[i][j] = prod[i][j] + a[i][k] * b[k][j];
//             }
//         }
//     }
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             printf("%d\t", prod[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr1[10][10], i, j, n;
//     printf("Input the size of the square matrix : ");
//     scanf("%d", &n);
//     printf("Input elements in the first matrix :\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &arr1[i][j]);
//         }
//     }
//     printf("The matrix is:\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//             printf("%d\t", arr1[i][j]);
//         printf("\n");
//     }
//     printf("\n");
//     printf("The lower triangle matrix is:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("\n");
//         for (j = 0; j < n; j++)
//             if (i >= j)
//                 printf("% d\t", arr1[i][j]);
//             else
//                 printf("% d\t", 0);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr1[10][10], i, j, n;
//     printf("Input the size of the square matrix : ");
//     scanf("%d", &n);
//     printf("Input elements in the first matrix :\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &arr1[i][j]);
//         }
//     }
//     printf("The matrix is:\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//             printf("%d\t", arr1[i][j]);
//         printf("\n");
//     }
//     printf("\n");
//     printf("The upper triangle matrix is:\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("\n");
//         for (j = 0; j < n; j++)
//             if (i <= j)
//                 printf("% d\t", arr1[i][j]);
//             else
//                 printf("% d\t", 0);
//     }
//     return 0;
// }

// #include <stdio.h>

// #define N 4  // size of the matrix

// int main() {
//   int matrix[N][N] = {
//     {1, 2, 3, 4},
//     {5, 6, 7, 8},
//     {9, 10, 11, 12},
//     {13, 14, 15, 16}
//   };
//   int principal_sum = 0;
//   int secondary_sum = 0;

//   // add the elements of the principal diagonal
//   for (int i = 0; i < N; i++) {
//     principal_sum += matrix[i][i];
//   }
//   // add the elements of the secondary diagonal
//   for (int i = 0; i < N; i++) {
//     secondary_sum += matrix[i][N - i - 1];
//   }
//   printf("Principal diagonal sum: %d\n", principal_sum);
//   printf("Secondary diagonal sum: %d\n", secondary_sum);
//   return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int i, j, r, c, a[10][10], b[10][10], isEqual;

//     printf("Please Enter Number of rows and columns:");
//     scanf("%d %d", &r, &c);

//     printf("Please Enter the First Matrix Elements:\n");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Please Enter the Second Matrix Elements:\n");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     isEqual = 1;

//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             if (a[i][j] != b[i][j])
//             {
//                 isEqual = 0;
//                 break;
//             }
//         }
//     }
//     if (isEqual == 1)
//     {
//         printf("Matrix a is Equal to Matrix b");
//     }
//     else
//     {
//         printf("Matrix a is Not Equal to Matrix b");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int r, c, i, j, a[50][50], isIdentity = 1;
//     printf("Enter the rows and columns:");
//     scanf("%d %d", &r, &c);
//     printf("Enter the elements in matrix A:\n");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("The matrix is :\n");
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//             printf("% 4d", a[i][j]);
//         printf("\n");
//     }
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             if ((a[i][j] != 1) && (a[j][i] != 0))
//             {
//                 isIdentity = 0;
//                 break;
//             }
//         }
//     }
//     if (isIdentity == 1)
//     {
//         printf("The given matrix is an Identity matrix");
//     }
//     else
//     {
//         printf("The given matrix is not an Identity matrix");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     char str[50],length=0,i=0;
//     printf("Enter string:");
//     gets(str);
//     while(str[i]!='\0'){
//         length++;
//         i++;
//     }
//     printf("The length of the string is:%d",length);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char text1[100];
//     char text2[100];
//     int i;
//     printf("Enter any string: ");
//     gets(text1);
//     for(i=0; text1[i]!='\0'; i++)
//     {
//         text2[i] = text1[i];
//     }
//     text2[i] = '\0';
//     printf("First string = %s\n", text1);
//     printf("Second string = %s\n", text2);
//     printf("Total characters copied = %d\n", i);
//     return 0;
// }

// #include <stdio.h>
// #include<string.h>
// int main(int argc, char const *argv[])
// {
//     char str[50] = "Taj Mahal";
//     char ch = 'a';
//     int count = 0;
//     int i, j;
//     for (i = 0; i <= strlen(str); i++)
//     {
//         if (str[i] == ch)
//         {
//             count++;
//         }
//     }
//     if (count > 0)
//     {
//         printf("%c appears %d time in '%s'", ch, count, str);
//     }
//     else{
//         printf("%c did not appear in %s", ch, str);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[100], temp;
//     int i, j = 0;
//     printf("\nEnter the string :");
//     gets(str);
//     i = 0;
//     j = strlen(str) - 1;
//     while (i < j)
//     {
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//         i++;
//         j--;
//     }
//     printf("\nReverse string is :%s", str);
//     return (0);
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[1000];
//     int i,alphabets=0,digits=0,specialcharacters=0;
//     printf("Enter  the string : ");
//     gets(s);
//     for(i=0;s[i];i++)
//     {
//         if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
//           alphabets++;
//         else if(s[i]>=48 && s[i]<=57)
//          digits++;
//         else
//          specialcharacters++;
//  	}
//     printf("Alphabets = %d\n",alphabets);
//     printf("Digits = %d\n",digits);
//     printf("Special characters = %d", specialcharacters);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[1000];
//     int i,vowels=0,consonants=0;
//     printf("Enter the string: ");
//     gets(s);
//     for(i=0;s[i];i++)
//     {
//     	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
//     	{
//             if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
// 		           vowels++;
//             else
//              consonants++;
//         }
//  	}
//     printf("vowels = %d\n",vowels);
//     printf("consonants = %d\n",consonants);
//     return 0;
// }
