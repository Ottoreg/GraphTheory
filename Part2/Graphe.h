#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Sommet.h"

using namespace std;

class Graphe
{
private:
	vector<Sommet> lstSommet;

public:
	Graphe();
	
	void AddSommet(Sommet* sommet);
	void findSommetByIndex(int index);

	vector<Sommet> GetListSommet();

};

