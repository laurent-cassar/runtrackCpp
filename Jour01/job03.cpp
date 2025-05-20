#include <iostream>
#include <iomanip>

int n = 0, i = 0;

int main()
{
    std::cout<<std::endl;
    std::cout << "Entrez un nombre de repetition :";
    // scanf("%d", &n);
    std::cin >> n;
    std::cout<<std::endl;

    int i = 1;
    for ( n ; n > 0; n--)
        {
        std::cout<<"Repetition numero " << std::setfill('0') << std::setw(2) << i++ << " : \"Hello, World!\""<<std::endl;
        }
    return 0;
}
