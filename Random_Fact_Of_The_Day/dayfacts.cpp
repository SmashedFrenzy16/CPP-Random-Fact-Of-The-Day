#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    srand(time(0));


    string facts[9] = {"Like fingerprints, everyone's tongue print is different.",
	  "Ostriches can run faster than horses.",
	  "Olympic gold medals are actually made mostly of silver.",
	  "You are born with 300 bones; by the time you are an adult, you will have 206.",
	  "It takes about 8 minutes for light from the Sun to reach Earth.",
	  "It is physically impossible for pigs to look up into the sky.",
	  "It is impossible for most people to lick their own elbow.",
	  "A shrimp's heart is in its head.",
	  "A crocodile cannot stick its tongue out."};

    int random_fact = rand() % 10;

    cout << facts[random_fact] << endl;

    
}