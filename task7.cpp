#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c, P;

    cin >> a;
    cin >> b;

    c = sqrt((a*a)+(b*b));
    P = a+b+c;

    cout << "hypotenuse = " << c << endl;
    cout << "Perimeter = " << P << endl;

    main();
}
