#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    cout << n/3600%24 << ":";
    cout << n/60%60 << ":";
    cout << n%60 << endl;

    main();
}
