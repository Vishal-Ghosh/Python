#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter your no.: ";
    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}