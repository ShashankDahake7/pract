// Method 1
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i+j-1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Method 2
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j < 2*i; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Method 3
//  #include<iostream>
//  using namespace std;
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      cout<<"Enter the value of n:";
//      cin>>n;
//      for (int i = 1; i <= n; i++)
//      {
//          int a=i;
//          for (int j = i; j < 2*i; j++)
//          {
//              cout<<a<<" ";
//              a++;
//          }
//          cout<<endl;
//      }
//      return 0;
//  }

/*
   1
   2 3
   3 4 5
   4 5 6 7  */

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
// int n;
// cout<<"Enter the value of n:";
// cin>>n;
// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout<<(i-j+1)<<" ";
//     }
//     cout<<endl;
// }
//     return 0;
// }

/*
   1
   2 1
   3 2 1
   4 3 2 1
           */

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         char ch='A';
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
   A B C
   A B C
   A B C
          */

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<char(64+i)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
   A A A A
   B B B B
   C C C C
   D D D D
           */

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int a=1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             int d=a+64;
//             cout<<char(d)<<" ";
//             d++;
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*

A B C
D E F
G H I

*/

// Method 1
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         char ch='A'+i-1;
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Method 2
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             char ch='A'+i+j-2;
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
   A B C
   B C D
   C D E
          */

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<char(64+i)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
A
B B
C C C
*/

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     char ch='A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
A
B C
D E F
G H I J
*/

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     char ch='A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             char ch='A'+i+j-2;
//             cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
A
B C
C D E
D E F G
*/

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     char ch='A';
//     for (int i = 1; i <= n; i++)
//     {
//         char ch='A'+n-i;
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<ch<<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
D
C D
B C D
A B C D
*/

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
 *
 **
 ***
 ****
 */

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
****
***
**
*
*/

// Method 1
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i-1; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 1; k <= n-i+1; k++)
//         {
//             cout<<'*';
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Method 2
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = i; k <= n; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
 ****
 ***
 **
 *
 */

// Method 3
// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i-1; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 1; k <= n-i+1; k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
 ****
 ***
 **
 *
 */

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = i; k <= n; k++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
 1111
  222
   33
    4
*/

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
   1
  22
 333
4444
*/

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int a=1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout<<a;
//             a++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
   1
  23
 456
78910
*/

// #include<iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout<<k;
//         }
//         for (int l = i-1 ; l >= 1; l--)
//         {
//             cout<<l;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
   1
  121
 12321
1234321
*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the value of n:";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i + 1; j++)
//         {
//             cout << j;
//         }
//         for (int k = 1; k <= (i - 1) * 2; k++)
//         {
//             cout << "*";
//         }
//         for (int j = n - i + 1; j >= 1; j--)
//         {
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*
1234554321
1234**4321
123****321
12******21
1********1
*/
