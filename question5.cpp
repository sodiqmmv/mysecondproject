#include <iostream>

using namespace std;

int main()
{
    int a;

    cin >> a;

    cout << "Last digit: " << a%10 << endl;
    cout << "Middle digit: " << a/10%10 << endl;

    main();
}
