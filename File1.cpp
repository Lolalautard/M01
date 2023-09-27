#include <iostream>
using namespace std;

int main()
{
	float val1,val2;
	char operateur;

	cout <<"Saisir l'opération  : ";
	std::cin >> val1 >> operateur >> val2;

	if (operateur == '+')
	{
		float resultat;
		resultat=val1+val2;
		cout<< "voici la somme : " <<resultat <<std::endl;
	}
	else if (operateur == '-')
	{
	float resultat;
		resultat=val1-val2;
		cout<< "voici la difference : " <<resultat <<std::endl;
	}
	else if (operateur == '*')
	{
	float resultat;
		resultat=val1*val2;
		cout<< "voici le produit : " <<resultat <<std::endl;
	}
	else if (operateur == '/')
	{
	float resultat;
		resultat=val1/val2;
		cout<< "voici le quotient : " <<resultat <<std::endl;
	}
	else {
		cout<< "erreur";
		system("PAUSE");
		return -1;
    }

system("PAUSE");

return 0;

  }

