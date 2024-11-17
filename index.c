// 1)
//                 Program 1(a)
// #include <stdio.h>
// int factorial(int n) {
//     int result = 1;
//     if (n < 0) {
//         printf("Error: Factorial is not defined for negative numbers\n");
//         return -1;
//     }
//     for (int i = 1; i <= n; i++) {
//         result *= i;
//     }
//     return result;
// }
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int fact = factorial(num);
//     if (fact != -1) {
//         printf("Factorial of %d is %d\n", num, fact);
//     }
//     return 0;
// }

//                 Program 1(b)
//     #include <stdio.h>
//     int main() {
//         int i,n;
//         int t1 = 0, t2 = 1;
//         int nextTerm = t1 + t2;
//         printf("Enter the number of terms: ");
//         scanf("%d", &n);
//         printf("Fibonacci Series: %d, %d, ", t1, t2);
//         for (i = 3; i <= n; i++) {
//             printf("%d, ", nextTerm);
//             t1 = t2;
//             t2 = nextTerm;
//             nextTerm = t1 + t2;
//         }
//         return 0;
//     }

//                 Program 1(c)
//     #include <stdio.h>
//     int main() {
//         int num, reverse = 0, remainder;
//         printf("Enter a number: ");
//         scanf("%d", &num);
//         while (num != 0) {
//             remainder = num % 10;
//             reverse = reverse * 10 + remainder;
//             num /= 10;
//         }
//         printf("Reversed number: %d\n", reverse);
//         return 0;
//     }

//                 Program 1(d)
//     #include <stdio.h>
//     int main() {
//         int num, sum = 0;
//         printf("Enter a number: ");
//         scanf("%d", &num);
//         while (num != 0) {
//             sum += num % 10;
//             num /= 10;
//         }
//         printf("Sum of digits: %d\n", sum);
//         return 0;
//     }

//                 Program 1(e)
//     #include<stdio.h>
//     int main()
//     {
//         int num1, num2, hcf, lcm, i;
//         printf("Enter first number: ");
//         scanf("%d", &num1);
//         printf("Enter second number: ");
//         scanf("%d", &num2);
//         for(i=1; i<=num1; i++)
//         {
//             if(num1%i==0 && num2%i==0)
//             {
//                 hcf = i;
//             }
//         }
//         lcm = (num1 * num2)/hcf;
//         printf("HCF = %d and LCM = %d", hcf, lcm);
//         return(0);
//     }

//                 Program 1(f)
//     #include <stdio.h>
//     int main() {
//         int num, i;
//         printf("Enter a number: ");
//         scanf("%d", &num);
//         printf("Multiplication table of %d:\n", num);
//         for(i = 1; i <= 10; i++) {
//             printf("%d x %d = %d\n", num, i, num * i);
//         }
//         return 0;
//     }


// 2)
//                 program 2(a)
// #include <stdio.h>
// int main() {
//     int arr[100], n, SE, i, found = 0;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     printf("Enter %d elements:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter element to search: ");
//     scanf("%d", &SE);
//     for(i = 0; i < n; i++) {
//         if(arr[i] == SE) {
//             printf("Element %d found at position %d\n", SE, i + 1);
//             found = 1;
//             break;
//         }
//     }
//     if(!found) {
//         printf("Element %d not found in the array\n", SE);
//     }
//     return 0;
// }

//                 program 2(b)
// #include <stdio.h>
// void main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n], i, j, temp;
//     printf("Enter %d elements for the array:\n", n);
//     for (i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - 1 - i; j++) {
//             if (arr[j] > arr[j + 1]) {

//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     printf("\nThe sorted array in ascending order is:\n");
//     for (i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

//                 program 2(c)








//                 program 2(d)
// #include <stdio.h>
// void upper_diagonal(int a[3][3], int m, int n);
// void lower_diagonal(int a[3][3], int m, int n);
// int main(){
//     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int m=3,n=3;
//     printf("Upper Diagonal Matrix:\n");
//     upper_diagonal(a,m,n);
//     printf("Lower Diagonal Matrix:\n");
//     lower_diagonal(a,m,n);
//     return 0;
// }
// void upper_diagonal(int a[3][3],int m,int n){
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(i>j){
//                 printf("0\t");
//             }
//             else{
//                 printf("%d\t",a[i][j]);
//             }
//         }
//         printf("\n");
//     }
// }
// void lower_diagonal(int a[3][3],int m,int n){
//     printf("Lower Diagonal Matrix:\n");
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if(i<j){
//                 printf("0\t");
//             }
//             else{
//                 printf("%d\t",a[i][j]);
//             }
//         }
//         printf("\n");
//     }
// }

//                 program 2(e)
// #include <stdio.h>
// void displayArray(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// void insertElement(int arr[], int *size, int element, int position) {
//     if(position < 0 || position > *size) {
//         printf("Invalid position!\n");
//         return;
//     }
//     for(int i = *size; i > position; i--) {
//         arr[i] = arr[i-1];
//     }
//     arr[position] = element;
//     (*size)++;
// }
// int main() {
//     int arr[100];
//     int size = 0;
//     int element, position;
//     printf("Enter initial size of array: ");
//     scanf("%d", &size);
//     printf("Enter %d elements: ", size);
//     for(int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Original array: ");
//     displayArray(arr, size);
//     printf("Enter element to insert: ");
//     scanf("%d", &element);
//     printf("Enter position (0-%d): ", size);
//     scanf("%d", &position);
//     insertElement(arr, &size, element, position);
//     printf("Array after insertion: ");
//     displayArray(arr, size);
//     return 0;
// }

//                 program 2(f)
// #include <stdio.h>
//     void deleteElementAtPosition(int arr[], int *size, int position) {
//         if (position < 0 || position >= *size) {
//             printf("Invalid position!");
//             return;
//         }
//         for (int i = position; i < *size - 1; i++) {
//             arr[i] = arr[i + 1];
//         }
//         (*size)--;
//     }
//     int main() {
//         int arr[100];
//         int size = 5;
//         for (int i = 0; i < size; i++) {
//             arr[i] = i + 1;  // [1, 2, 3, 4, 5]
//         }
//         deleteElementAtPosition(arr, &size, 2);
//         printf("Array after deletion: ");
//         for (int i = 0; i < size; i++) {
//             printf("%d ", arr[i]);
//         }
//         printf("\n");
//         return 0;
//     }

//                  program 2(g)
// #include <stdio.h>
// int main(){
//     int m,n,i,j,l;
//     printf("How many elements in 1st array: ");
//     scanf("%d",&m);
//     int A[m];
//     printf("Enter elements of 1st array (in sorted order):\n");
//     for(i = 0; i < m; i++){
//         scanf("%d",&A[i]);
//     }
//     printf("Enter elements in 2nd array: ");
//     scanf("%d",&n);
//     int B[n];
//     printf("Enter elements of 2nd array (in sorted order):\n");
//     for(j = 0; j < n; j++){
//         scanf("%d",&B[j]);
//     }
//     int C[m+n];
//     i = 0;
//     j = 0;
//     l = 0;
//     while(l < m+n) {
//         if(i < m && j < n) {
//             if(A[i] < B[j]) {
//                 C[l] = A[i];
//                 i++;
//             } else {
//                 C[l] = B[j];
//                 j++;
//             }
//         }
//         else if(i < m) {
//             C[l] = A[i];
//             i++;
//         }
//         else {
//             C[l] = B[j];
//             j++;
//         }
//         l++;
//     }
//     printf("Merged array:\n");
//     for(l = 0; l < m+n; l++) {
//         printf("%d ", C[l]);
//     }
//     printf("\n");
//     return 0;
// }

//                  program 2(h)
// #include <stdio.h>
// int main() {
//     int arr[100], n, i;
//     int max, min;
//     printf("How many elements in 1st array: ");
//     scanf("%d", &n);
//     for(i = 0; i < n; i++) {
//         printf("Enter element %d: ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     max = min = arr[0];
//     for(i = 1; i < n; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//         }
//         if(arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     printf("Maximum element: %d\n", max);
//     printf("Minimum element: %d\n", min);
//     return 0;
// }

// 3)
//                 program 3(a)

//     #include <stdio.h>
//     int fact(int n) {
//         if (n == 0 || n == 1) {
//             return 1;
//         }
//         return n * fact(n - 1);
//     }
//     int main() {
//         int n;
//         printf("Enter a number: ");
//         scanf("%d", &n);
//         printf("Factorial of %d is %d\n", n, fact(n));
//         return 0;
//     }

//                 program 3(b)
// #include <stdio.h>
// int fibonacci(int n) {
//     if (n <= 1)
//         return n;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }
// int main() {
//     int n, i;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     printf("Fibonacci Series: ");
//     for(i = 0; i < n; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     printf("\n");
//     return 0;
// }

//                 program 3(c)
// #include <stdio.h>
// double power(double base, int exponent) {
//     if (exponent == 0)
//         return 1.0;
//     if (exponent == 1)
//         return base;
//     if (exponent < 0)
//         return 1.0 / power(base, -exponent);

//     return base * power(base, exponent - 1);
// }
// int main() {
//     double base;
//     int exponent;
//     printf("Enter the base number: ");
//     scanf("%lf", &base);
//     printf("Enter the exponent: ");
//     scanf("%d", &exponent);
//     printf("%.2lf raised to the power %d is %.2lf\n",
//            base, exponent, power(base, exponent));
//     return 0;
// }

//                  program 3(d)
// #include <stdio.h>
// int ackermann(int m, int n) {
//     if (m == 0) {
//         return n + 1;
//     }
//     else if (n == 0) {
//         return ackermann(m - 1, 1);
//     }
//     else {
//         return ackermann(m - 1, ackermann(m, n - 1));
//     }
// }
// int main() {
//     printf("A(0,0) = %d\n", ackermann(0, 0));  // Should print 1
//     printf("A(2,1) = %d\n", ackermann(2, 1));  // Should print 5
//     printf("A(3,2) = %d\n", ackermann(3, 2));  // Should print 29
//     return 0;
// }

//                  program 3(e)
// #include <stdio.h>
// void displayArray(int arr[], int size, int index) {
//     if (index >= size) {
//         return;
//     }
//     printf("%d ", arr[index]);
//     displayArray(arr, size, index + 1);
// }
// int main() {
//     int arr[] = {2, 3, 4, 5, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("Array elements are: ");
//     displayArray(arr, size, 0);
//     printf("\n");
//     return 0;
// }

// 4)
//                 program 4(a)
// #include <stdio.h>
// void swap(int *a, int *b);
// int main() {
//     int num1, num2;
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);
//     swap(&num1, &num2);
//     printf("\nAfter swapping:\n");
//     printf("First number = %d\n", num1);
//     printf("Second number = %d\n", num2);
//     return 0;
// }
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

//                  program 4(b)
// #include <stdio.h>
// void swap(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("\nInside swap function:\n");
//     printf("First number = %d\n", a);
//     printf("Second number = %d\n", b);
// }
// int main() {
//     int num1, num2;
//     printf("Enter first number: ");
//     scanf("%d", &num1);
//     printf("Enter second number: ");
//     scanf("%d", &num2);
//     swap(num1, num2);
//     printf("\nAfter swapping (in main):\n");
//     printf("First number = %d\n", num1);
//     printf("Second number = %d\n", num2);
//     return 0;
// }

//                  program 4(c)
// #include <stdio.h>
// void displayReverse(int arr[], int size) {
//     printf("Array in reverse order: ");
//     for (int i = size - 1; i >= 0; i--) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int main() {
//     int size;
//     printf("Enter the size of array: ");
//     scanf("%d", &size);
//     int arr[size];
//     printf("Enter %d elements:\n", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     displayReverse(arr, size);
//     return 0;
// }

//                  program 4(d)
// #include <stdio.h>
// int countChar(char str[], char ch) {
//     int count = 0;
//     for(int i = 0; str[i] != '\0'; i++) {
//         if(str[i] == ch) {
//             count++;
//         }
//     }
//     return count;
// }
// int main() {
//     char str[100];
//     char ch;
//     printf("Enter a string: ");
//     gets(str);  // Note: gets() is unsafe, but using for simplicity
//     printf("Enter the character to count: ");
//     scanf("%c", &ch);
//     int result = countChar(str, ch);
//     printf("The character '%c' appears %d times in the string.\n", ch, result);
//     return 0;
// }

//                  program 4(e)
// #include <stdio.h>
// #include <string.h>
// // strlen()
// int main(){
//     char s[]= "hello world";
//     printf("%d",strlen(s));
//     return 0;
// }
// // strcpy()
// int main(){
//     char c[10];
//     char s[6] = "hello";
//     strcpy(c,s);
//     printf("%s",c);
//     return 0;
// }
// // strcat()
// int main(){
//     char s[15] = "hello";
//     char c[10] = "world";
//     strcat(s,c);
//     printf("%s",s);
//     return 0;
// }
// // strcmp()
// int main(){
//     char s[10] = "hello";
//     char c[10] = "world";
//     printf("%d",strcmp(s,c));
//     return 0;
// }

//                  program 4(f)
// #include <stdio.h>
// #include <string.h>
// void sortString(char* str) {
//     int length = strlen(str);
//     char temp;
//     for (int i = 0; i < length - 1; i++) {
//         for (int j = 0; j < length - i - 1; j++) {
//             if (str[j] > str[j + 1]) {
//                 temp = str[j];
//                 str[j] = str[j + 1];
//                 str[j + 1] = temp;
//             }
//         }
//     }
// }
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);
//     printf("After sorting: %s\n", str);
//     return 0;
// }

// 5)
//                 program 5(a)
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     const int initial_size = 5;
//     if (initial_size <= 0) {
//         printf("Invalid allocation size!\n");
//         return 1;
//     }
//     int *ptr1 = (int *)malloc(initial_size * sizeof(int));
//     if (ptr1 == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     printf("\n--- malloc() demonstration ---\n");
//     for (int i = 0; i < initial_size; i++) {
//         ptr1[i] = i + 1;
//         printf("ptr1[%d] = %d\n", i, ptr1[i]);
//     }
//     int *ptr2 = (int *)calloc(initial_size, sizeof(int));
//     if (ptr2 == NULL) {
//         printf("Memory allocation failed!\n");
//         free(ptr1);
//         return 1;
//     }
//     printf("\n--- calloc() demonstration ---\n");
//     for (int i = 0; i < initial_size; i++) {
//         printf("ptr2[%d] = %d\n", i, ptr2[i]); // Will print zeros
//     }
//     printf("\n--- realloc() demonstration ---\n");
//     const int new_size = 8;
//     int *ptr3 = (int *)realloc(ptr1, new_size * sizeof(int));
//     if (ptr3 == NULL) {
//         printf("Memory reallocation failed!\n");
//         free(ptr1);
//         free(ptr2);
//         return 1;
//     }
//     ptr1 = ptr3;  // Update ptr1 to point to the new memory block
//     for (int i = initial_size; i < new_size; i++) {
//         ptr1[i] = i + 1;
//     }
//     printf("After reallocation:\n");
//     for (int i = 0; i < new_size; i++) {
//         printf("ptr1[%d] = %d\n", i, ptr1[i]);
//     }
//     free(ptr2);  // Free memory allocated by calloc()
//     return 0;
// }

//                  program 5(b)
// #include <stdio.h>
// struct Student {
//     int rollNo;
//     char name[50];
//     struct {  // Anonymous nested structure
//         char street[50];
//         char city[30];
//         int pincode;
//     } addr;
//     float marks;
// };
// int main() {
//     struct Student students[1];  // Array of 1 student
//     printf("\nEnter Student Details:\n");
//     printf("Roll No: ");
//     scanf("%d", &students[0].rollNo);
//     printf("Name: ");
//     scanf(" %[^\n]s", students[0].name);
//     printf("Street: ");
//     scanf(" %[^\n]s", students[0].addr.street);
//     printf("City: ");
//     scanf(" %[^\n]s", students[0].addr.city);
//     printf("Pincode: ");
//     scanf("%d", &students[0].addr.pincode);
//     printf("Marks: ");
//     scanf("%f", &students[0].marks);
//     printf("\nStudent Details:\n");
//     printf("================\n");
//     printf("Roll No: %d\n", students[0].rollNo);
//     printf("Name: %s\n", students[0].name);
//     printf("Address: %s, %s - %d\n",
//         students[0].addr.street,
//         students[0].addr.city,
//         students[0].addr.pincode);
//     printf("Marks: %.2f\n", students[0].marks);
//     return 0;
// }

//                  program 5(c)
// #include <stdio.h>
// #include <string.h>
// union Data {
//     int i;
//     float f;
//     char str[20];
// };
// int main() {
//     union Data data;
//     data.i = 10;
//     printf("data.i: %d\n", data.i);
//     data.f = 220.5;
//     printf("data.f: %f\n", data.f);
//     strcpy(data.str, "C Programming");
//     printf("data.str: %s\n", data.str);
//     return 0;
// }

//                  program 5(d)
// #include <stdio.h>
// int main() {
//     int *arr_of_ptrs[3];  // Can store 3 pointers to integers
//     int a = 10, b = 20, c = 30;
//     arr_of_ptrs[0] = &a;
//     arr_of_ptrs[1] = &b;
//     arr_of_ptrs[2] = &c;
//     int numbers[3] = {100, 200, 300};
//     int (*ptr_to_arr)[3] = &numbers;  // Points to entire array of 3 integers
//     printf("Array of pointers:\n");
//     for(int i = 0; i < 3; i++) {
//         printf("Value at arr_of_ptrs[%d] = %d\n", i, *arr_of_ptrs[i]);
//     }
//     printf("\nPointer to array:\n");
//     for(int i = 0; i < 3; i++) {
//         printf("Value at (*ptr_to_arr)[%d] = %d\n", i, (*ptr_to_arr)[i]);
//     }
//     return 0;
// }

//                  program 5(e)
// #include <stdio.h>
// #include <string.h>
// #define MAX_STRINGS 100
// #define MAX_LENGTH 100
// void sortStrings(char arr[][MAX_LENGTH], int n) {
//     char temp[MAX_LENGTH];
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (strcmp(arr[j], arr[j + 1]) > 0) {
//                 strcpy(temp, arr[j]);
//                 strcpy(arr[j], arr[j + 1]);
//                 strcpy(arr[j + 1], temp);
//             }
//         }
//     }
// }
// int main() {
//     char strings[MAX_STRINGS][MAX_LENGTH];
//     int n;
//     printf("Enter number of strings: ");
//     scanf("%d", &n);
//     getchar();
//     printf("Enter %d strings:\n", n);
//     for (int i = 0; i < n; i++) {
//         fgets(strings[i], MAX_LENGTH, stdin);
//         strings[i][strcspn(strings[i], "\n")] = 0;
//     }
//     sortStrings(strings, n);
//     printf("\nSorted strings:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%s\n", strings[i]);
//     }
//     return 0;
// }
