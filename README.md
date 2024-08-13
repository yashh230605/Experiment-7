# Experiment-7

Aim:

To study and implement C++ Arrays and Strings

Theory:

(A). C++ arrays are collections of elements with mutually inclusive types which stay together in one contiguous memory space. They can be declared by presenting the type of these elements followed by square brackets that hold their numbers. In other words, arrays begin counting from zero; thus for instance character zero on array becomes the first one while second one becomes character one and so forth. C++ arrays have fixed sizes that must be determined at compile time.

(B). In C++, strings are managed through either C-style string or by utilizing the string class which is included in the Standard Library. In this programming language, strings are made up of groups of characters terminated by a null character (‘\0’). Actions on C-styled strings are done by functions from C standard library like strlen, strcpy and strcat.

## Code 1
~~~
//Yash Nangia
//B3
//152

#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n, i, num, co, flag, maxi, mini, sum;
    float avg;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];  

    // Input the array elements
    for (i = 0; i < n; i++) {
        cout << "Enter element no. " << i + 1 << " of the array: ";
        cin >> a[i];
    }

    // Print the array defined by the user
    cout << endl << "The array defined by the user: { ";
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << "}" << endl;

    // Reverse the array
    cout << "The array reversed: { ";
    for (i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << "}" << endl;

    // Check for an element's occurrence in the array
    cout << endl << "Enter the number you want to check: ";
    cin >> num;
    co = 0;  
    flag = 0;  

    for (i = 0; i < n; i++) {
        if (a[i] == num) {
            co++;
            flag = 1;
        }
    }

    if (flag == 0) {
        cout << "Element was not found." << endl;
    } else {
        cout << "The element was found " << co << " times." << endl;
    }

    // Find the maximum and minimum values in the array
    maxi = INT_MIN;
    mini = INT_MAX;

    for (i = 0; i < n; i++) {
        if (a[i] > maxi) {
            maxi = a[i];
        }
        if (a[i] < mini) {
            mini = a[i];
        }
    }

    cout << "Maximum value amongst the elements is: " << maxi << endl;
    cout << "Minimum value amongst the elements is: " << mini << endl;

    // Calculate the sum and average of the elements in the array
    sum = 0;
    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    avg = static_cast<float>(sum) / n;

    cout << "Sum of elements: " << sum << endl;
    cout << "Average of elements: " << avg << endl;

    return 0;
}

~~~

## Output
~~~
Enter size of array: 5
Enter element no. 1 of the array: 1
Enter element no. 2 of the array: 2
Enter element no. 3 of the array: 3
Enter element no. 4 of the array: 4
Enter element no. 5 of the array: 4

The array defined by the user: { 1 2 3 4 4 }
The array reversed: { 4 4 3 2 1 }

Enter the number you want to check: 2
The element was found 1 times.
Maximum value amongst the elements is: 4
Minimum value amongst the elements is: 1
Sum of elements: 14
Average of elements: 2.8
~~~

## Code 2
~~~
// Yash Nangia
// 152
// ENTC B3

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // (printing string input)
    string a, b;
    cout << "Enter any word: ";
    getline(cin, a); 
    cout << "Entered string is " << a << endl;
    




    // (concatenation of strings)
    
    cout << "Enter strings: ";
    cin >> a >> b;
    cout << "CONCATENATION: " << a + b << endl;
   




    // (printing string in reverse)
    
    cout << "Enter string: ";
    cin >> a;
    for (int i = a.length() - 1; i >= 0; i--) 
    {
        cout << a[i];
    }
    cout << endl;
    




    // (palindrome checking)
   
    cout << "Enter a string: ";
    cin >> a;
    int n = a.length();
    bool isPalindrome = true;

    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << a << " is a palindrome" << endl;
    }
    else
    {
        cout << a << " is not a palindrome" << endl;
    }
    return 0;
}
~~~
## Output
~~~
Enter any word: yash
Entered string is yash
Enter strings: hi
my
CONCATENATION: himy
Enter string: heyy
yyeh
Enter a string: bubbble
bubbble is not a palindrome
~~~
