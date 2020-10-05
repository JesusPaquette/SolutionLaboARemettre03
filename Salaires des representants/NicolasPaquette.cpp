//Nom:Nicolas Paquette
//But:Développez un programme qui entre les ventes brutes hebdomadaires de chaque 
//	  représentant et qui calcule et affiche son salaire

//Date:04/10/2020

/* test 
	vente					salaire
	200							265
	10000						1000
	-1							0


*/

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	//Declarer vairable 
	int representant = 1;
	float salairVente;
	float salaireTotal;
	//declarer les constante
	const int salaireSemain = 250;
	const float cutVente = 7.5;
	const int exit = -1;
	//varible utilisateur
	float NbVente;
	
	//demander a l<utilisateur son nombre de vente
	cout << "Combien de vente avez-vous fait #"<<representant << endl;
	cin >> NbVente;
	//boucle pour pouvoir gerer plusieur representant des ventes
	while (NbVente != exit)
	{
		system("CLS");
		//calcul salaire brut
		salairVente = NbVente / 100 * cutVente;
		salaireTotal = salaireSemain + salairVente;
		//afficherr salaire brut
		cout << "Votre Representant#" << representant << " a fait :" << salaireTotal << "$"<<endl;
		system("pause");//permettre a l'utilisateur de voir se qui est afficher
		system("CLS");
		representant++;
		//programme recommence
		cout << "Combien de vente avez-vous fait #" << representant << endl;
		cin >> NbVente;
		
	}


	return 0;
}