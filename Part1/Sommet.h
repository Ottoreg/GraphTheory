#pragma once

#include <string>
#include <iostream>
#include <list>

using namespace std;

class Sommet
{
private:
	int id;
	string name;
	list<Sommet> lstVoisins;

public:
	Sommet(string pName, int pId);

	string GetName();
	void AddVoisin(Sommet* voisin);
	void ShowVoisins();

};

