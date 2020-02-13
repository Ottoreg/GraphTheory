#include "Sommet.h"

Sommet::Sommet(string pName, int pId)
{
	id = pId;
	name = pName;
	marquer = false;
}

string Sommet::GetName()
{
	return name;
}

void Sommet::AddVoisin(Sommet* voisin)
{
	lstVoisins.push_back(voisin);
}

void Sommet::ShowVoisins()
{
	cout << this->GetName() << " : ";
	for (Sommet* v : lstVoisins) {
		cout << v->GetName() << " ";
	}
	cout << endl;
}

vector<Sommet*> Sommet::GetVoisins()
{
	return lstVoisins;
}

bool Sommet::GetMarquer()
{
	return marquer;
}

void Sommet::SetMarquer()
{
	marquer = true;
}

