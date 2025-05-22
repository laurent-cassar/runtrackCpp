#include <iostream>
#include <iomanip>

int annee = 0;

int main()
{
    std::cout<<std::endl;
    std::cout << "Saisissez une annee du calendrier gregorien : ";
    std::cin >> annee;

    if ( annee % 4 == 0)
        std::cout<<"L'annee < " << annee << " > que vous venez de saisir est bien \" BISSEXTILE \"";
    else    
        std::cout<<"L'annee < " << annee << " > que vous venez de saisir est malheuresement \" NON BISSEXTILE \"";
    std::cout <<std::endl;
    std::cout <<std::endl;
    return 0;
}
