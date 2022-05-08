#include "ComptePayant.h"
#include "Compte_Epargne.h"
#include <iostream>
using namespace Bank;

class CompteEpargnePayant :public ComptePayant, public Compte_Epargne
{
	CompteEpargnePayant();
	CompteEpargnePayant(Client* c, Devise* s, double taux);
	bool retirerArgent(Devise* Montant) override;
	void deposerArgent(Devise* Montant) override;
};
