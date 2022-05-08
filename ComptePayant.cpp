#include "ComptePayant.h"

double Bank::ComptePayant::Taux = 5;

Bank::ComptePayant::ComptePayant(Client* prop, Devise* solde)
:Compte(prop,solde)
{
   
}

bool Bank::ComptePayant::retirerArgent(Devise* Montant)
{
    Devise com = (*Montant * Taux/100);
    this->Compte::retirerArgent(&com.operator+(*Montant));
}

void Bank::ComptePayant::deposerArgent(Devise* Montant)
{
    Devise com = (*Montant * Taux / 100);
    this->Compte::deposerArgent(&(Montant->operator-(com)));
}
