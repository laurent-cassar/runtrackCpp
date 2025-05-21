#include <iostream>
#include <iomanip>

int entier = 0, taille = 0, multiple = 0;

int main()
{
    std::cout<<std::endl;
    std::cout << "Table de multiplication d'un nombre entier." <<std::endl <<std::endl;
    std::cout << "Entrez un nombre entier a multiplier : ";
    std::cin >> entier;
    std::cout << "Entrez un nombre entier multiplicateur definissant la taille de la table : ";
    std::cin >> taille;
    
    for ( multiple ; multiple <= taille ; multiple++ )
        std::cout <<"Le produit de " << std::setfill('0') << std::setw(3) << multiple << " par " << std::setfill('0') << std::setw(3) << entier << " est egale a : " << std::setfill('0') << std::setw(3) << multiple * entier <<std::endl;
    std::cout <<std::endl;
    return 0;
}
