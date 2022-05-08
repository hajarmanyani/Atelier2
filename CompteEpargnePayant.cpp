
#include "CompteEpargnePayant.h"
using namespace Bank;

CompteEpargnePayant::CompteEpargnePayant(Client* c, Devise* s, double taux) :Compte_Epargne(c,s,taux)
{
    
}

bool CompteEpargnePayant::retirerArgent(Devise* Montant)
{
    if (this->Compte_Epargne::retirerArgent(Montant)) {
        return true;
    }
    return false;
}

void CompteEpargnePayant::deposerArgent(Devise* Montant)
{
    this->ComptePayant::deposerArgent(&Montant);
}
