#include "Opertaion.h"
int Operation::cpt = 0;
Operation::Operation():NumOp(++Operation::cpt)
{
}

Operation::Operation(string L, Devise* M) : NumOp(++Operation::cpt)
{
	this->libelle = L;
	this->montant = M;
}

void Operation::afficher() const
{
	cout << this->NumOp << "||" << this->libelle << this->montant << endl;
}
