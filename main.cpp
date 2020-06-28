#include <iostream>

using namespace std;

int main()
{
cout << "Enter A and B: ";

int a, b;

cin >> a >> b;

cout << "A + B = " << a + b << '\n';

cout << "A - B = " << a - b << '\n';

cout << "A * B = " << a * b << '\n';

cout << "A / B = " << a / b << '\n';

int max;

        if (a > b) max = a;

        if (b > a) max = b;

        if (b == a) cout << "A = B";

            else

cout << "MAX = " << max;

return 0;
}
