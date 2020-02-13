#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Sommet
{
private:
	int id;
	string name;
	vector<Sommet*> lstVoisins;
	bool marquer;

public:
	Sommet(string pName, int pId);

	string GetName();
	void AddVoisin(Sommet* voisin);
	void ShowVoisins();
	vector<Sommet*> GetVoisins();
	bool GetMarquer();
	void SetMarquer();
};

