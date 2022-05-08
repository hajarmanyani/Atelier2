#include "Operation.h"

int Operation::cpt = 0;
Operation::Operation(Devise* m, string lib):
	numOp(++cpt)
{
	this->libelle = lib; 
	this->montant = m; 

}

void Operation::afficher()
{
	cout << "|" << this->numOp << "|" << this->libelle; 
	this->montant->afficher();
}

