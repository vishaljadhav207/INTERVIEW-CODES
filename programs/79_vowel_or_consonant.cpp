// C++ Program to check whether alphabet is vowel or consonant
#include <iostream>
using namespace std;

// main function
int main()
{
    char c;

    c = 'U';

    // checking for vowels
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << c << " is a vowel"; // condition true input is vowel
    }
    else
    {
        cout << c << " is a consonant"; // condition false input is consonant
    }

    return 0;
}