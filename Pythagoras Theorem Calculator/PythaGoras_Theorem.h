#include <iostream>
#include <cmath>
using namespace std;

void App_Banner()
{
	cout << "Code Owned By- VinayJango | https://github.com/VinayJango"<<endl;
}
/* Pythagoras Theorem is (ONE SIDE SQR) + (OTHER SIDE SQR) = (HYPO)*/
float v1, v2, Hypo;
if (user_input == "1")
{
	return Calculate_Hypo();
}
void Calculate_Hypo()
{
	while ((v1 > 0) && (v2 > 0)); // While The Given Value 1 and 2 is Greater Than Zero
	{
		cout << "Enter The Value Of The First Side: ";
		cin >> v1;
		cout << "Enter The Value Of The Second Side: ";
		cin >> v2;
		Hypo = sqrt((v1 * v1) + (v2 * v2));
		cout << "The Hypotenuse Length is: " << (Hypo);
		cout << "Bye~!" << endl;
	}
	
}



