#include <iostream>
#include <cstlib>
#include <ctime>


void Introduction(){
	//Print Text Adventrure Introduction
	std::cout << "\n\nWelcome to my text adventure game.\n";
	std::cout << "In this game you will be taking the role of a souilder who is about to land on Omaha Beach.\n";
	std::cout << "If he makes it out or not is down to the desitions you make on the battle feild.\n";
	std::cout << "You will be given different options through out the adventure and what you choose will have an impact\n";
	std::cout << "on the ending that you get.\n\n\n";
}

void PInventroy(){
	//Print Player inventory
		std::cout << "You check your self and you have " << PHealth << " Health.\n";
		std::cout << "You look down at your rifle and ammo pockets and see that you have " << PAmmo << " bullets.\n";
		std::cout << "You check you explosives pouch and find " << PGrenaides << "grenaides.\n";
		std::cout << "You check your back pocket and find " << PHealthKit << " first aid kit";
}

int main(){
	
	//Inisialise health, ammo, grenaides
	int PHealth = 20;
	int PAmmo = 15;
	int PGrenaides = 2;
	int PHealthKit = 1;
	int GameOver = 1;
	
	//Inisiate Random Number generator
	srand(time(NULL));
	
	//Print Intorduction
	Introduction();
	
	while( PHealth > 0 && GameOver == 1){
		
		//Start
		sdt::cout << "It is June 6th, 1944 and you are apart of an invation squade heading for Omaha Beach.\n";
		std::cout << "You look down from the overcast sky to the squad around you, this band of misplaced men who where never destined for war, half of witch couldn't even by a drink back home.\n";
		std::cout << "The mejority of men on this Landing craft were green not just for the fact that the whether around them was causing the sea to churn and boil making the craft we all stood on rock violently, but also in the sense that this was the first taste of real combat other than the rushed and execelorated training we were given before this deploymeant that many of us including myself would be encountering.\n";
		std::cout << "How did the men come to turms with this impending doom?";
		std::cout << "The only man really knows what horrors await us beyond at ramp was Captin Harlon Nail.\n";
		std::cout << "His battle scared face which is said to have looked into the face of death multiple times during the great war looked on straight ahead at all of his men, giving no reaction to how they where responding to this chrisis of corrage.\n";
		std::cout << "Captin Harlon: 'Charlie Squad to attention!!'\n";
		std::cout << "The nervous, socked men of charile squad stopped what they where doing to console themselves and stood to attention focusing on Captin Harlon. You feel your legs adgust to the landing crafts unpredictable movements stopping yourself from crashing forwad into the man infront of you.\n";
		std::cout << "Captin Harlon: 'Unfortunatly we have not been able to establish any communications with the first wave. Due to this I would suggest that you prepare yourselfs for the worst.\n'";
		std::cout << "Captin Harlon: 'I cannot prommise that you will make it through this day but as long as you keep moving forward then you will have half a chance of surviving.\n\n'";
		std::cout << "You look around at your fellow man and wonder which of them will make it to the end of this day or if you will even make it to the end of this day.\n\n";
		std::cout << "Captin Harlon: 'Ready up men, check you self and your equipment we make land fall in 2 minutes.'\n\n";
		
		PInventroy();
		
		
 		
		
	}
	
	
	
	
	return 0;
	
}


