// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows:");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if ((i == 1) || (i == n) || (j == 1) || (j == n) || (i == j) || ((i + j) == n + 1))
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of terms:");
//     scanf("%d",&n);
//     float i,terms,sum=0;
//     for(i=1;i<=n;i++){
//         terms=1/(3*i);
//         sum=sum+terms;
//     }
//     printf("The sum of %d terms is:%f",n,sum);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    int cust_no, unit_con;
//    float charge,surcharge=0, amt, total_amt;
//    char nm[25];
//    printf("Enter the customer IDNO");
//    scanf("%d",&cust_no);
//    printf("Enter the customer Name");
//    scanf("%s",nm);
//    printf("Enter the unit consumed by customer ");
//    scanf("%d",&unit_con);
//     if (unit_con <200 ){
//       charge = 0.80;
//     }
//     else if(unit_con>=200 && unit_con<300){
//       charge = 0.90;
//     }
//     else{
//       charge = 1.00;
//     }
//     amt = unit_con*charge;
//     if (amt>400){
//       surcharge = amt*15/100.0;
//     }
//     total_amt = amt+surcharge;
//     printf("\nElectricity Bill\n");
//     printf("Customer IDNO                       :%d",cust_no);
//     printf("\nCustomer Name                       :%s",nm);
//     printf("\nunit Consumed                       :%d",unit_con);
//     printf("\nAmount Charges @Rs. %4.2f  per unit  :%0.2f",charge,amt);
//     printf("\nSurcharge Amount                     :%.2f",surcharge);
//     printf("\nMinimum meter charge Rs             :%d",100);
//     printf("\nNet Amount Paid By the Customer     :%.2f",total_amt+100);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of rows:");
//     scanf("%d",&n);
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             printf("%c ",j+64);
//         }
//         printf("\n");
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
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     int last=n%10;
//     while(n>=10){
//         n=n/10;
//     }
//     int first=n;
//     int sum=first+last;
//     printf("%d",sum);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter the value of a,b and c:");
//     scanf("%d %d %d",&a,&b,&c);
//     printf("The values of a,b and c are %d,%d and %d respectively.\n",a,b,c);
//     int largest=(a>b?(a>c?a:c):(b>c?b:c));
//     printf("The largest value among %d,%d and %d is:%d",a,b,c,largest);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=1,b=1,c1,c2,n,fact,rem,flag;
//     printf("Enter the total number of terms:");
//     scanf("%d",&n);
//     for(int i=2;i<n;i++){
//         fact=1,
//         c1=a+b;
//         flag=0;
//         c2=c1;
//         a=b;
//         b=c1;
//         while(c2!=0){
//             rem=c2%10;
//             fact=fact*rem;
//             c2=c2/10;
//         }
//         for(int j=2;j<=(fact/2);j++){
//             if((fact)%j==0){
//                 flag=1;
//                 break;
//             }
//         }
//         if((flag==0) && (fact!=0)){
//             printf("%d ",c1);
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int marks;
//     char grade;
//     printf("Enter the marks:");
//     scanf("%d",&marks);
//     switch(marks/25){
//         case 4:
//         case 3:
//             grade='A';
//             break;
//         case 2:
//             grade='B';
//             break;
//         case 1:
//             grade='C';
//             break;
//         default:
//             grade='F';
//     }
//         printf("The students grade is:%c",grade);
//     return 0;
// }


