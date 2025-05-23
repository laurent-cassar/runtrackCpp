#include <iostream>

using namespace std;

int main() {
    int a,b,c, comparator = 0;
    cout << "Nombre 1 : ";cin >> a;
    cout << "Nombre 2 : ";cin >> b;
    cout << "Nombre 3 : ";cin >> c;

    if (a > comparator)
        comparator = a;

    if (b > comparator)
        comparator = b;

    if (c > comparator)
        comparator = c;
    
    cout << "Le nombre le plus grand est : " << comparator;
    return 0;
}