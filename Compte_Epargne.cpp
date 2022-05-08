#include "Compte_Epargne.h"
#include<assert.h>
Bank::Compte_Epargne::Compte_Epargne()
{
}
Bank::Compte_Epargne::Compte_Epargne(Client* prop, Devise* solde,
    double tauxIntert)
    : Compte(prop,solde)
{
    assert(tauxIntert >= 0 && tauxIntert <= 100);
    this->tauxIntret = tauxIntert;
}

void Bank::Compte_Epargne::calcul_interet()
{
    Devise taux = this->solde->operator*(this->tauxIntret / 100);
    this->deposerArgent(&taux);
}

bool Bank::Compte_Epargne::retirerArgent(Devise* montant)
{
    Compte_Epargne Ce;
    if (*(this->solde) / 2 >= *montant)
    {
        if (typeid(*this) == typeid(Ce))
             return this->Compte::retirerArgent(montant);
        else return true;
    }

    return false;
}
