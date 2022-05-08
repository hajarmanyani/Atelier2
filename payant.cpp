#include "payant.h"
double Bank::Compte_Payant::taux = 50;

Bank::Compte_Payant::Compte_Payant()
{
}

Bank::Compte_Payant::Compte_Payant(Client* prop, Devise* solde, double taux)
	:Compte(prop,solde)
{
	this->taux = taux;
}

bool Bank::Compte_Payant::retirerArgent(Devise* montant)
{
	Devise com = *montant * (taux/100);
	Devise r = (montant->operator+(com));

	return this->Compte::retirerArgent(&r);
}

void Bank::Compte_Payant::deposerArgent(Devise* montant)
{
	Devise com = *montant * (taux/100);
	Devise r = (montant->operator-(com));

	this->Compte::deposerArgent(&r);
}
