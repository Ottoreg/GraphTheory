#include <iostream>
#include "Graphe.h"

using namespace std;

int main()
{

	int ID = 1;
	Graphe* G = new Graphe();
	Sommet* S1 = new Sommet("A", ID); ID++;
	Sommet* S2 = new Sommet("B", ID); ID++;
	Sommet* S3 = new Sommet("C", ID); ID++;
	Sommet* S4 = new Sommet("D", ID); ID++;

	S1->AddVoisin(S2);
	S1->AddVoisin(S4);

	S2->AddVoisin(S1);
	S2->AddVoisin(S3);

	S3->AddVoisin(S2);
	S3->AddVoisin(S4);

	S4->AddVoisin(S3);
	S4->AddVoisin(S1);

	G->AddSommet(S1);
	G->AddSommet(S2);
	G->AddSommet(S3);
	G->AddSommet(S4);

	vector<Sommet> lst = G->GetListSommet();

	for (Sommet s : lst) {
		s.ShowVoisins();
	}
}