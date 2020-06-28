#include <iostream>

using namespace std;

double main()
{
cout << "Enter A and B: ";

int a, b;

cin >> a >> b;

cout << "A + B = " << a + b << '\n';

cout << "A - B = " << a - b << '\n';

cout << "A * B = " << a * b << '\n';

cout << "A / B = " << a / b << '\n';

<<<<<<< HEAD
<<<<<<< HEAD
int max;
=======
double max;
>>>>>>> double

        if (a > b) max = a;

        if (b > a) max = b;

        if (b == a) cout << "A = B";

            else

cout << "MAX = " << max;
=======
 	    int min;

        if (a > b) min = b;

        if (b > a) min = a;

        if (b == a) cout << "A = B";

         else

cout << "MIN = " << min;
>>>>>>> MIN

return 0;
}
