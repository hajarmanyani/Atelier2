#pragma once
#include<iostream>
#include<vector>
//#include"Compte.h"

using namespace std;


 namespace Bank{
	 class Compte;
class Client
{
private: 
	int matricule; 
	static int compt; 
	string nom; 
	string prenom; 
	string addresse; 
	vector<Compte*>MesComptes;

public: 
	Client(); 
	Client(string n, string p, string add); 
	~Client();
};

 };