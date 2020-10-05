/*
nom:Nicolas Paquette
date:04/10/2020
but:faire deviner un nombre aleatoir entre 100 et 0 a lutisilsateur avec 5 essaie tout en lui indicant si il est
    en haut ou en bas du du nombre










*/


#include <time.h>
#include <iostream>
using namespace std;
int main()
{

    //variable const
    const int compteurMax = 5;
    //variable utilisateur
    int NbUtilisateur;
    //varibale random
    int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
    srand(time(0)); // pour activer l’aléatoire dans le programme
    iRandom = rand() % 101;
    //boucle pour les 5 essaie
    for ( int i = 1; i <=compteurMax;)
    {
        cout << i << " chance , veiller entrer un nombre :"<<endl;//demander a lutilisateur de trouver un nombre
        cin >>NbUtilisateur;
        system("cls");
        if (NbUtilisateur >= 0 && NbUtilisateur <= 100)//verifier si le nombre est en 0 ou 100
        {
            i++;
            if (NbUtilisateur < iRandom)//veirifier si le nombre est plus grand
            {
                cout << "Votre nombre est plus grand"<<endl;
                system("pause");
                system("CLS");
            }
            else if(NbUtilisateur > iRandom)//verifier si le nombre est plus petit
            {
                cout << "Votre nombre est plus petit"<<endl;
                system("pause");
                system("CLS");
            }
            else//dit a lutiisateur que le nombre est egale
            {
                
                cout << "vous avez vue juste !! Bravo"<<endl;
                i = 6;
            }
        }
        else//dit a lutilisateur que le nombre N,est pas entre 0 ou 100
        {
            cout << "veuiller recommencer avec un nombre entre 0 et 100"<<endl;
            system("pause");
            system("CLS");
        }
     
       
    }
    return 0;
}