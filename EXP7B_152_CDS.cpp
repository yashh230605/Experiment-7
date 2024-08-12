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

//Output
Enter any word: yash
Entered string is yash
Enter strings: hi
my
CONCATENATION: himy
Enter string: heyy
yyeh
Enter a string: bubbble
bubbble is not a palindrome
