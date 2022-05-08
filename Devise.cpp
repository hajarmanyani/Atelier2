#include "Devise.h"
#include <iostream>

Devise::Devise()
{
}

Devise::Devise(double val)
{
	this->valeur = val;
}

bool Devise::operator>=(const Devise& D) const
{
	
	return (this->valeur>= D.valeur);
}

Devise Devise::operator-(const Devise& D)
{
	Devise res;
	res.valeur = this->valeur - D.valeur;
	return res;
}
Devise Devise::operator+(const Devise& D)
{
	Devise res;
	res.valeur = this->valeur + D.valeur;
	return res;
}

Devise Devise::operator*(double v)
{
	Devise res;
	res.valeur = this->valeur * v;
	return res;
}
Devise Devise::operator/(double v)
{
	Devise res;
	if(v!=0){
	res.valeur = this->valeur / v;
	}
	return res;
}


void Devise::afficher() const
{
	std::cout << "le solde est : " << this->valeur;
}
