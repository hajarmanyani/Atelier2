#pragma once
#include "Client.h"
#include "CompteCourant.h"
#include "Payant.h"
#include <iostream>
using namespace std;

namespace Bank {
	class AppBanque
	{
	private:
		Client* CL;
		CompteCourant* CPC;
		Compte_Payant* CPP;
		string descriptif;
	public:
		AppBanque();
		AppBanque(Client* CL, CompteCourant* CPC, Compte_Payant* CPP, string desc);
		~AppBanque();
	};

};