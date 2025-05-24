// // // #include<stdio.h>
// // // int main(){
// // //     int n,sum=0,product=1;
// // //     scanf("%d",&n);

// // //     for(int i=n;i<=n+46;i++){
// // //         sum+=i;
// // //         product*=i;
// // //     }

// // //     if(sum>1234){
// // //         printf("Great achievement\n");
// // //     }
// // //     else if(sum<234){
// // //         printf("Try Try and Try\n");
// // //     }
// // //     else{
// // //         printf("Need to go a long way\n");
// // //     }
// // //     return 0;

// // // }

// // // #include<stdio.h>
// // // int main(){
// // //     int m,n;
// // //     scanf("%d",&m);

// // //     if(m>0){
// // //         n=1;
// // //     }
// // //     else if(m==0){
// // //         n=0;
// // //     }
// // //     else{
// // //         n=-1;
// // //     }
// // //     printf("Display value = %d",n);

// // //     return 0;
// // // }

// // // #include <stdio.h>

// // // int main()
// // // {
// // //     int maths, physics, chemistry, total, math_phy_total;
// // //     printf("Enter marks in Mathematics: ");
// // //     scanf("%d", &maths);
// // //     printf("Enter marks in Physics: ");
// // //     scanf("%d", &physics);
// // //     printf("Enter marks in Chemistry: ");
// // //     scanf("%d", &chemistry);

// // //     total = maths + physics + chemistry;
// // //     math_phy_total = maths + physics;

// // //     if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total >= 190) || math_phy_total >= 140)
// // //     {
// // //         printf("Eligible for admission.\n");
// // //     }
// // //     else
// // //     {
// // //         printf("Not Eligible for admission.\n");
// // //     }

// // //     return 0;
// // // }

// // #include<stdio.h>

// //     int main()
// // {
// //     int num, sum = 0;

// //     printf("Enter numbers:\n");

// //     do
// //     {
// //         scanf("%d", &num);

// //         if (num >= 0)
// //         {
// //             sum += num;
// //         }
// //     } while (num >= 0);

// //     printf("Sum : %d\n", sum);

// //     return 0;
// // }

// // #include<stdio.h>
// // int main(){
// //     int n,c=0;
// //     scanf("%d",&n);
// //     int arr[n];
// //     for(int i=0;i<n;i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     for(int i=0;i<n;i++){
// //         for(int j=i+1;j<n;j++){
// //             if (arr[i] == arr[j])
// //             {
// //                 c++;
// //                 break;
                
// //             }
// //         }
       
      
// //     }
// //     printf("Total Duplicate = %d", c);

// //     return 0;
// // }
// #include <stdio.h>

// int main()
// {
//     int m, n, result = 0, count = 0;

//     printf("Enter two numbers m n :");
//     scanf("%d %d", &m, &n);

//     int temp = m;

//     do
//     {
//         result += temp;
//         count++;
//     } while (count < n);

//     printf("%d * %d = %d\n", m, n, result);

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int num, i, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     for (i = 1; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             sum += i;
//         }
//     }

//     if (sum == num)
//     {
//         printf("%d is a Perfect Number.\n", num);
//     }
//     else
//     {
//         printf("%d is Not a Perfect Number.\n", num);
//     }

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a[7],b,multi=1;

//     for(int i=0;i<7;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<7;i++){
//         multi *=a[i];
//     }
//     multi *=1269;
//     if(multi<4589){
//         printf("I live in Bangladesh\n");
//     }
//     else if(multi<6226){
//         printf("This is DIU.\n");
//     }
//     else{
//         printf("I am a student of the SWE Department.\n");
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int a[13], b, multi ,total=0;

//     for (int i = 0; i < 13; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < 13; i++)
//     {
//         multi = a[i]*1269;
//         total+=multi;
//     }
    

//         printf("Total Multiplication =%d",total);
    
// }

// #include <stdio.h>
// int main()
// {
//     int a[19], b, sum=0;;

//     for (int i = 0; i < 19; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < 19; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             printf("%d is Even\n",a[i]);
//         }
//         else{
//             printf("%d is Odd\n",a[i]);
//         }
//     }
//     for (int i = 0; i < 19; i++)
//     {
//         if(a[i]%2==0){
//             sum+=i;
//         }
//     }
//     if(sum<2689){
//         printf("Happy Programming.\n");
//     }
//     else if(sum<3759){
//         printf("I love Programming.\n");
//     }
//     else{
//         printf("I have practice more.\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);

//     if(n<269){
//         int multi = n*269;
//         printf("Mutli = %d\n",multi);
//     }
//     else{
//         int add = n+269;
//         printf("Add = %d\n",add);
//     }

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int f1=0,f2=1;

//     int temp = f1+f2;

//     printf("%d %d ",f1,f2);
//     for(int i=3;i<=n;i++){
//         printf("%d ", temp); 
//         f1 = f2;
//         f2 = temp;
//         temp = f1 + f2;
//     }
//     printf("\n");

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int num1, num2, large,small;

//     printf("Enter two number :");
//     scanf("%d %d", &num1, &num2);

//     large = (num1 > num2) ? num1 : num2;
//     printf("Large number = %d\n", large);

//     small = (num1 < num2) ? num1 : num2;
//     printf("Large number = %d\n", small);

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int num1, num2, num3, num4, largest;
//     int i;
//     for (i = 1; i <= 5; i++)
//     {
//         printf("Enter 4 numbers for set %d:\n", i);
//         printf("Enter number 1: ");
//         scanf("%d", &num1);
//         printf("Enter number 2: ");
//         scanf("%d", &num2);
//         printf("Enter number 3: ");
//         scanf("%d", &num3);
//         printf("Enter number 4: ");
//         scanf("%d", &num4);

        
//         smallest = num1; 

//         if (num2 > largest)
//         {
//             largest = num2;
//         }
//         if (num3 > largest)
//         {
//             largest = num3;
//         }
//         if (num4 > largest)
//         {
//             largest = num4;
//         }

//         printf("The largest number %d is: %d\n", i, largest);
//     }

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int a = 5, b = 3; // Example numbers

//     // AND operator
//     printf("a = %d, b = %d\n", a, b);
//     printf("a & b = %d\n", a & b); // Bitwise AND

//     // OR operator
//     printf("a | b = %d\n", a | b); // Bitwise OR

//     // XOR operator
//     printf("a ^ b = %d\n", a ^ b); // Bitwise XOR

//     // NOT operator
//     printf("~a = %d\n", ~a); // Bitwise NOT

//     // Left shift operator
//     printf("a << 1 = %d\n", a << 1); // Left shift by 1 (multiplies by 2)

//     // Right shift operator
//     printf("a >> 1 = %d\n", a >> 1); // Right shift by 1 (divides by 2)

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int a ,b;
//     scanf("%d %d",&a,&b);

//     printf("a = %d, b = %d\n", a, b);

//     printf("Bitwise AND :\n");
//     printf("a & b = %d\n", a & b);

//     printf("Bitwise OR :\n");
//     printf("a | b = %d\n", a | b);

//     printf("Bitwise XOR :\n");
//     printf("a ^ b = %d\n", a ^ b);

//     printf("Bitwise NOT :");
//     printf("~a = %d\n", ~a);

//     printf("Left Shift :\n");
//     printf("a << 1 = %d\n", a << 1);

//     printf("Right Shift :\n");
//     printf("a >> 1 = %d\n", a >> 1);

//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int n,c=0;
//     int arr[n];
//     while(1){
//    for(int i=0;i<=n;i++){
//     scanf("%d",&arr[n]);
//    }
    
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if (arr[i] == arr[j])
//             {
//                 printf("%d",arr[i]);
//                 break;

//             }
//         }

//     }
//     // if(c>1){
//     //     printf("Duplicate found\n");
//     //     break;
//     // }

//     // else {
//     //     printf("Duplicate not found\n");
//     // }
// }
//     return 0;
// }

#include <stdio.h>

#define MAX_SIZE 1000

int main()
{
    int numbers[MAX_SIZE];
    int count = 0;
    int num, i;
    int duplicate = 0;

    printf("Enter numbers (input stops when a duplicate is entered):\n");

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        for (i = 0; i < count; i++)
        {
            if (numbers[i] == num)
            {
                duplicate = 1;
                break;
            }
        }
        if (duplicate)
        {
            printf("Duplicate number detected: %d. Exiting program.\n", num);
            break;
        }
        numbers[count++] = num;
        if (count >= MAX_SIZE)
        {
            printf("Maximum input limit reached. Exiting program.\n");
            break;
        }
    }

    return 0;
}
