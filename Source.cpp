#include <iostream>
#include <string.h>
using namespace std;

char* c = new char[201];
char* c1 = c;
int P1 = 1, P2 = 1,l;

int palindrome();

int main()
{
    
    cin >> c;
    l = strlen(c);
    palindrome();

    if (P1 == 1 && P2 == 1)
        cout << "Double Palindrome";
    else if (P1 == 1)
        cout << "Palindrome";
    else
        cout << "No";

    return 0;

}

int palindrome()
{
    for (; *c1 != '\0'; c1++)
    {
        *c1 = toupper(*c1);
    }
    c1 -= strlen(c);
    for (int i = 0; i < l / 4; i++)
        if (*(c1 + i) != *(c1 + l / 2 - i - 1))
        {
            P2 = 0;
        }           
    for (int i = 0; i <= strlen(c) / 2; i++)
        if (*(c1 + i) != *(c1 + strlen(c) - i - 1))
        {
            P1 = 0;
        }      
    return 0;
}