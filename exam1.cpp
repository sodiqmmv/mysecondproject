#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cin >> a;
    cin >> b;

    c=a;
    a=b;
    b=c;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    main();
}
