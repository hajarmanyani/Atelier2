#include "AppBanque.h"
using namespace std;
#include <iostream>
Bank::AppBanque::AppBanque()
{
	std::cout << "Constructeur de la classe AppBanque" << std::endl;
	this->CL = new Client();
	this->CPC = new CompteCourant();
	this->CPP = new Compte_Payant();
	this->descriptif = "";
}

Bank::AppBanque::AppBanque(Client* CL, CompteCourant* CPC, Compte_Payant* CPP, string desc)
{
	this->CL = CL;
	this->CPC = CPC;
	this->CPP = CPP;
	this->descriptif = desc;
}

Bank::AppBanque::~AppBanque()
{
	std::cout << "Destructeur de la classe AppBanque" << std::endl;
	delete this->CL;
	delete this->CPC;
	delete this->CPP;
	this->CL = 0;
	this->CPC = 0;
	this->CPP = 0;
}
