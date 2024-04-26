#include <iostream>

using namespace std;

int main()
{
    int n, m, days;

    cin >> n;
    cin >> m;

    days = (n+m-1)/n;

    cout << "The car travels " << days << " days." << endl;

    main();
}
