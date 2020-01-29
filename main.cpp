#include <iostream>

using namespace std;

/*
Exercice 9
Afficher un comptage à l’envers à partir de 20.Exemple : 20 19 18 17 etc.
*/

int main()
{
    int compteur(0);

    for (compteur=20; compteur>0; compteur--)
    {
      cout << compteur << endl;
    }

    return 0;
}
