#include <iostream>

using namespace std;

int main()
{
    char hello[] = "Hello";
    char world[] = "world";
    char punct[] = ", !";

    for (int i = 0; i < 5; i++)
    {
        cout << hello[i];
    }

    cout << punct[0] << punct[1];

    for (int i = 0; i < 5; i++)
    {
        cout << world[i];
    }
    
    cout << punct[2] << endl;

    return 0;
}