#include <iostream>
#include <cstdlib>
#include <ctime>


void Introduction(){
	//Print Text Adventrure Introduction
	std::cout << "\n\nWelcome to my text adventure game.\n";
	
	std::cout << "In this game you will be taking the role of a souilder who is about to land on Omaha Beach.\n";
	
	std::cout << "If he makes it out or not is down to the desitions you make on the battle feild.\n";
	
	std::cout << "You will be given different options through out the adventure and what you choose will have an impact\n";
	
	std::cout << "on the ending that you get.\n\n\n";
}

/*
void PInventroy(){
	//Print Player inventory
		std::cout << "You check your self and you have " << PHealth << " Health.\n";
		std::cout << "You look down at your rifle and ammo pockets and see that you have " << PAmmo << " bullets.\n";
		std::cout << "You check you explosives pouch and find " << PGrenaides << "grenaides.\n";
		std::cout << "You check your back pocket and find " << PHealthKit << " first aid kit\n\n";
}
*/

int main(){
	
	//Inisialise health, ammo, grenaides
	int PHealth = 20;
	int PAmmo = 15;
	int PGrenaides = 2;
	int PHealthKit = 1;
	int GameOver = 1;
	int PChoise;
	
	//Inisiate Random Number generator
	srand(time(NULL));
	
	//Print Intorduction
	Introduction();
	
	while( PHealth > 0 && GameOver == 1){
		
		//Start
		std::cout << "It is June 6th, 1944 and you are apart of an invation squade heading for Omaha Beach.\n";
		std::cout << "You look down from the overcast sky to the squad around you, this band of misplaced men who where never destined for war, half of witch couldn't even by a drink back home.\n";
		
		std::cout << "The mejority of men on this Landing craft were green not just for the fact that the whether around them was causing the sea to churn and boil making the craft we all stood on rock violently, but also in the sense that this was the first taste of real combat other than the rushed and execelorated training we were given before this deploymeant that many of us including myself would be encountering.\n";
		
		std::cout << "How did the men come to turms with this impending doom?\n";
		
		std::cout << "The only man really knows what horrors await us beyond at ramp was Captin Harlon Nail.\n";
		
		std::cout << "His battle scared face which is said to have looked into the face of death multiple times during the great war looked on straight ahead at all of his men, giving no reaction to how they where responding to this chrisis of corrage.\n\n";
		
		std::cout << "Captin Harlon: 'Charlie Squad to attention!!'\n\n";
		
		std::cout << "The nervous, socked men of charile squad stopped what they where doing to console themselves and stood to attention focusing on Captin Harlon. You feel your legs adgust to the landing crafts unpredictable movements stopping yourself from crashing forwad into the man infront of you.\n\n";
		
		std::cout << "Captin Harlon: 'Unfortunatly we have not been able to establish any communications with the first wave. Due to this I would suggest that you prepare yourselfs for the worst.'\n";
		
		std::cout << "Captin Harlon: 'I cannot prommise that you will make it through this day but as long as you keep moving forward then you will have half a chance of surviving.'\n\n";
		
		std::cout << "You look around at your fellow man and wonder which of them will make it to the end of this day or if you will even make it to the end of this day.\n\n";
		
		std::cout << "Captin Harlon: 'Ready up men, check you self and your equipment we make land fall in 2 minutes.'\n\n";
		
		//Print Inventory
		//PInventroy();
		std::cout << "You check your self and you have " << PHealth << " Health.\n";
		std::cout << "You look down at your rifle and ammo pockets and see that you have " << PAmmo << " bullets.\n";
		std::cout << "You check you explosives pouch and find " << PGrenaides << " grenaides.\n";
		std::cout << "You check your back pocket and find " << PHealthKit << " first aid kit\n\n";
		
		//Start Beach Encounter
		std::cout << "You look up from checking your self to see everyone else brasing themselves for a quick disembark from the landing craft.\n";
		
		std::cout << "You focus on your surroundings and hear the air cracking in the distance as if a impossible amount of men where cracking the whips of war all at the same time.\n\n";
		
		std::cout << "Captin Harlon: 'One minute until land fall.\n\n'";
		
		std::cout << "Bang, bang, bang, 10 shots rung against the hard outter shell of the landing craft leaving huge dents against bulging towards the center of the craft.\n";
		
		std::cout << "Bang, bang, bang, 20 shots this time, The air around us is now crackeling with constant gun fire.\n\n";
		
		std::cout << "Captin Harlon: '20 Seconds, ready to disembark'\n\n";
		
		std::cout << "Everyone around you bet themselfs into a brased position to be able to run out of the lander and onto the beach as soon as the ramp drops.\n\n";
		
		std::cout << "Captin Harlon: '5,4,3,2,1,go,go,go!'\n\n";
		
		std::cout << "The Ramp Drops and the world around you comes alive with suppressive fire. The men at the front of the lander bearly makes it 3 steps before they are vapourised into a fine bloody mist by fire raining down apon them from the garasoned bunkers. Some of the men are trying to climb over the sides of the lander and jumping into the sea to try and avoid the impending slaughter infront of them.\n\n";
		
		std::cout << "Captin Harlon: 'Everybody off of the landing craft now lets go people!'.\n\n";
		
		
		//First Player Choice
		std::cout << "Your head is raicing and can't deside which way to go!\n";
		std::cout << "1. Down the Ramp\n";
		std::cout << "2. Over the side of the boat\n";
		
		std::cin >> PChoise;
		
	
		//Evaluate Choice
		if(PChoise == 1){
			
			std::cout << "Your training kicks in and your legs start moving forward towards the ramp of the lander. Stumbeling over the dead bodys of some of the unlucky people who died where they were standing you make it to the edge of the ramp and see that the landing craft had run aground 20m away from the beach.\n";
			std::cout << "You get into the water and start moving towards the beach making sure to keep your rifle above your head to ensure it does not get wet. As you make your we towards the beach you see the swolen bodys of the first wave and the new bodys from the second floating peacfuly in the water, a red sickly liquid poring from their wounds. The closer that you get to the beach the darker the liquid becomes within it slowly becomeing thicker and thicker the taste and smell of iorn start to paint the back of your knose and mouth. The water around you springs to life from a burst of bullets. You suddenly feel and intense heat coming from your leg you look down to see that one of those bullets have gone straight through your leg. The crimson blood start to stain your trousers and run down to your knees to add itself to the red soup around you.\n";
			
			PHealth -5;
			//Does the player Heal
			std::cout << "You foundle around your pockets and grasp onto the first aid kit do you use it now are do you take your chances and hope you don't bleed out before the day is done?\n";
			std::cout << "1. Yes\n";
			std::cout << "2. No\n";
			
			std::cin >> PChoise;
			
			if(PChoise == 1){
				PHealth + 5;
				std::cout << "You rip open the first aid kit and pull out the alchole and apply it to sterilise the wound. You feel and intense burining coming from within your leg as the alchole makes it way into the wound. You then grab the morphen shot and stab it inot your leg to releave the pain.\n";
				std::cout << "Pull out the tunakit from your pouch and ratchet tight round your upper thigh to try and restrict the flow of blood, you then tear open a battle dreassing and wind around your leg.\n";
				std::cout << "Your effort to stop the bleading seams to have worked for now but your leg is numb and your movement in your left leg is restricted.\n";
			}else if (PChoise == 2){
				
				std::cout << "With Blood pulsating from the wound in your left leg you struggle on forward. Every step is a labour, paine flaires up your leg with every inch you move but you manage the impossible task that Captin Harlon gave you. To keep moving forward.\n";
			}
			
			
			
		}else if (PChoise == 2){
			std::cout << "This is a placeholder for now just to prove that the if statment works.\n";
			PHealth - 20;
		}
		
	}
	
	
	
	
	return 0;
	
}
