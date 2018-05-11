
#include "stdafx.h"
#include <iostream>
#include "Die.h"
using namespace std;

int main()
{
	int playerPoints=0, comPoints=0;
	bool status = true;
	cout << "Welcome to game of 21" << endl;
	do
	{
		Die comDie;
		Die plyDie;
		comPoints += comDie.getValue();
		cout << "Will you roll?(Y/N)" << endl;
		char roll;
		cin >> roll;
		if (roll == 'y' || roll == 'Y')
		{
			playerPoints += plyDie.getValue();
		}
		else status = false;
		if (playerPoints>21)
		{
			status = false;
		}

	} while (status == true);
	if (playerPoints <= 21 && playerPoints > comPoints)
		cout << "You win computer's points: " << comPoints << " Your points: " << playerPoints << endl;
	else if (comPoints > 21)
		cout << "You win computer's points: " << comPoints << " Your points: " << playerPoints << endl;
	else cout << "You lose, computer's points: " << comPoints << " Your points: " << playerPoints << endl;
	return 0;
}

