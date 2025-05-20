#include <iostream>
#include <iomanip>

int nombre_1 = 0, nombre_2 = 0;

int main()
{
    std::cout<<std::endl;
    std::cout << "Entrez un premier nombre : ";
    std::cin >> nombre_1;
    std::cout << "Entrez un second nombre : ";
    std::cin >> nombre_2;
    std::cout<<"La somme de " << nombre_1 << " et " << nombre_2 << " est egale a : " << nombre_1 + nombre_2 <<std::endl;
    std::cout<<std::endl;
    return 0;
}
