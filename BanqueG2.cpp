// BanqueG2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Compte.h"
#include <string.h>
#include "Compte_Epargne.h"
#include "Compte_Epargne_Payant.h"
#include "payant.h"
#include "AppBanque.h"
#include "Devise.h"
using namespace Bank;
using namespace std;
#include<string.h>
int main()
{
	//Compte_Epargne epargne; 
	//Compte_Payant pyant; 
	//Compte_Epargne_Payant CEpargne_Payant;
	//Devise mot(2000);
    //epargne.retirerArgent(&mot);
	//pyant.retirerArgent(&mot);
	//CEpargne_Payant.retirerArgent(&mot);
	Client* cl = new Client("manyani", "hajar", "Casablanca");
	Devise*  montant =new Devise(2000);
	Devise* montant2 = new Devise(200000);
	Devise* dec= new Devise(10);
	CompteCourant* CR = new CompteCourant(cl, montant, dec);
	Compte_Payant* CP = new Compte_Payant(cl, montant2, 15);
	string desc = "La Cliente Hajar vient d'ouvrir deux comptes, l'un est courant et l'autre est payant";
	AppBanque* AB = new AppBanque(cl, CR, CP, desc);

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
