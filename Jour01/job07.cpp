#include <iostream>
#include <iomanip>

int nombre = 0;

int main()
{
    std::cout<<std::endl;
    std::cout << "Entrez un nombre entier : ";
    std::cin >> nombre;

    if ( nombre % 2 == 0)
        std::cout<<"La valeur absolue du nombre entre est \"PAIRE\"";
    else    
        std::cout<<"La valeur absolue du nombre entre est \"IMPAIRE\"";
    std::cout <<std::endl;
    std::cout <<std::endl;
    return 0;
}
