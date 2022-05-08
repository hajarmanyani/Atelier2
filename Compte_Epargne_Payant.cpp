#include "Compte_Epargne_Payant.h"

Bank::Compte_Epargne_Payant::Compte_Epargne_Payant()
{
}

Bank::Compte_Epargne_Payant::Compte_Epargne_Payant(Client* prop, Devise* solde, double tauxIntert, double taux)
	:Compte(prop,solde),Compte_Payant(prop,solde,taux),Compte_Epargne(prop,solde, tauxIntert)
{

}

bool Bank::Compte_Epargne_Payant::retirerArgent(Devise* montant)
{
	if (this->Compte_Epargne::retirerArgent(montant))
		return this->Compte_Payant::retirerArgent(montant);
}
