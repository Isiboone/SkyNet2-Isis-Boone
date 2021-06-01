//Isis Boone Isiboone@uat.edu 
//Created May 31, 2021 
//Last tested: 7:29 PM May 31,2021
//This is an application for skynet and making a random numbered square.
//We will be using a Binary Search Pattern for this application.


//These are the libs for this program so everything runs.
#include <iostream> 
#include <string>
#include <stdlib.h>


using namespace std;

//This is int for target prediction
int targetLocationPrediction;
//This is for adding if the grid number is higher than prediction
int searchGridHighNumber = 64;
//This is for adding if the grid number is lower than prediction
int searchGridLowNumber = 1;
//This is the string for number of sections.
string theArray[63];
//This is the main function where everything is going to be running from when looking for enemy. 
int main()
{
	//Setting int to random number from 1-64. Location of emeny.
	int answer = rand() % 64 + 1;
	//solving where the enemy is. true or false.
	bool isSolved = false;
	//This is tracking the ping number 
	int pingNumber = 1;
	cout << "---Welcome to the generation of random enemy location on a 8x8 grid.---\n";

	cout << "~Enemy was located at #" << answer << " on 8x8 grid with 1-64 cubes!\n";

	cout << "~SkyNet HK-Aerial starting software.........~\n";

	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	//This the loop for figured where the enemy is.
	while (!isSolved)
	{
		int targetLocationPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		//This is if you get the right answer the first time
		if (targetLocationPrediction == answer)
		{
			cout << "--Congrats Solider, you have found where the enemy is located!!!!!!--\n";

			cout << " You have earned a ~Gold Star~!\n";
			isSolved = true;
		}
		//This is if your answer your guess is too high it will go through the loop again
		else if (targetLocationPrediction > answer)
		{
			cout << "This is not where your enemy is located, it is too high for this prediction.\n";

			cout << "Too bad, might want to take cover from enemy!\n";
			searchGridHighNumber = targetLocationPrediction;
		}
		//This is if your answer your guess is too low it will go through the loop again.
		else if (targetLocationPrediction < answer)
		{
			cout << "This is not where your enemy is located, it is too low for this prediction.\n";

			cout << "Too bad, may want to take cover from lurking enemy!\n";
			searchGridLowNumber = targetLocationPrediction;
		}
		//For organizational purposes.
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

		pingNumber++;
	}

	return 0;
}
