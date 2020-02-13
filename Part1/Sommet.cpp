#include "Sommet.h"

Sommet::Sommet(string pName, int pId)
{
	id = pId;
	name = pName;
}

string Sommet::GetName()
{
	return name;
}

void Sommet::AddVoisin(Sommet* voisin)
{
	lstVoisins.push_back(*voisin);
}

void Sommet::ShowVoisins()
{
	cout << this->GetName() << " : ";
	for (Sommet v : lstVoisins) {
		cout << v.GetName() << " ";
	}
	cout << endl;
}
