#include "CompteCourant.h"
#include <iostream>

Bank::CompteCourant::CompteCourant()
{
	std::cout<<"Constructeur de la classe Compte Courant" << std::endl;
}

Bank::CompteCourant::CompteCourant(Client* prop,
	Devise* solde, Devise* decouvert) : Compte(prop,solde)
{
	this->decouvert = decouvert; 
	std::cout << "Constructeur de la classe Compte Courant" << std::endl;

}

bool Bank::CompteCourant::retirerArgent(Devise* montant)
{
	if (this->solde->operator-(*montant) >= *(this->decouvert)) {

		return this->Compte::retirerArgent(montant);
	}

	return false;
}
