// Ikea_Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
#include<math.h>
using namespace std;

struct traits
{
	int friendly = 5;
	int flexible = 5;
	int thinking= 5;
	int honest = 5;
	int organized = 5;
	int top = 5;//hidden from viewers
};

typedef traits myTraits;
void QuestionOne(traits &myTraits);
void QuestionTwo(traits &myTraits);
void QuestionThree(traits &myTraits);
void QuestionFour(traits &myTraits);
void QuestionFive(traits &myTraits);
void QuestionSix(traits &myTraits);
void QuestionSeven(traits &myTraits);
void QuestionEight(traits &myTraits);
void QuestionNine(traits &myTraits);
void QuestionTen(traits &myTraits);
void QuestionEleven(traits &myTraits);
void QuestionTwelve(traits &myTraits);
void QuestionThirteen(traits &myTraits);
void QuestionFourteen(traits &myTraits);
void QuestionFifteen(traits &myTraits);
void DetermineFurniture(traits &myTraits);


int main()
{
	traits myTraits;
	//TODO: Put in Basic Intro
	cout << "Welcome to the IKEA Personality Quiz! This test considers your friendliness, flexibility, logical thinking, honesty, and organization. Every year, people have to buy new furniture for their homes, apartments, and living spaces. However, many find themelves unhappy with their final furniture choices. With the IKEA Personality Quiz, you can find your dream furniture and know that you\'ll always make the correct choice for all your furniture needs!\n";

    cout << "For each answer, enter the number of your answer.\n"; 

#pragma region Question Function Calls
	QuestionOne(myTraits);
	QuestionTwo(myTraits);
	QuestionThree(myTraits);
	QuestionFour(myTraits);
	QuestionFive(myTraits);
	QuestionSix(myTraits);
	QuestionSeven(myTraits);
	QuestionEight(myTraits);
	QuestionNine(myTraits);
	QuestionTen(myTraits);
	QuestionEleven(myTraits);
	QuestionTwelve(myTraits);
	QuestionThirteen(myTraits);
	QuestionFourteen(myTraits);
	QuestionFifteen(myTraits);
#pragma endregion

	DetermineFurniture(myTraits);
}
#pragma region Questions
void QuestionOne(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "1.) Your neighbor constantly parks their car across the end of your driveway. Do you:\n";
	cout << "	1) Tow it.\n";
	cout << "	2) Wait for them to move it.\n";
	cout << "	3) Drive through your yard to get around it.\n";
	cout << "	4) Cry.\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
			case 1:
				--myTraits.flexible;
				--myTraits.friendly;
				++myTraits.top;
				goodInput = true;
				break;
			case 2:
				--myTraits.top;
				++myTraits.flexible;
				goodInput = true;
				break;
			case 3:
				--myTraits.top;
				++myTraits.flexible;
				++myTraits.friendly;
				goodInput = true;
				break;
			case 4:
				--myTraits.thinking;
				goodInput = true;
				break;
			default:
				cout << "Please enter a valid input\n";
				cin >> input;
		}
	}
}

void QuestionTwo(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "2.) Your roommate showers once a month and washes their clothes once every other month. As a result, your room smells like death. Do you:\n";
	cout << "	1) Tell him.\n";
	cout << "	2) Passive-aggressively spray the room with febreze.\n";
	cout << "	3) Move out.\n";
	cout << "	4) Spend as little time in the room as possible.\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			++myTraits.honest;
			++myTraits.organized;
			goodInput = true;
			break;
		case 2:
			--myTraits.flexible;
			--myTraits.friendly;
			--myTraits.thinking;
			goodInput = true;
			break;
		case 3:
			--myTraits.honest;
			goodInput = true;
			break;
		case 4:
			--myTraits.honest;
			++myTraits.flexible;
			goodInput = true;
			break;
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionThree(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "3.) Your brother is a recovering alcoholic. You\'re planning your birthday party, but he can only come if it\'s a dry party. Do you:\n";
	cout << "	1) Decide to have no alcohol so he can come.\n";
	cout << "	2) Have alcohol, but he can\'t come.\n";
	cout << "	3) Have alcohol, but hide it so he doesn\'t know and can still come.\n";
	cout << "	4) Cancel the party.\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			++myTraits.flexible;
			++myTraits.friendly;
			goodInput = true;
			break;
		case 2:
			--myTraits.flexible;
			++myTraits.honest;
			goodInput = true;
			break;
		case 3:
			--myTraits.honest;
			++myTraits.flexible;
			goodInput = true;
			break;
		case 4:
			--myTraits.friendly;
			goodInput = true;
			break;
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionFour(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "4.) You have a large sum of money that has been saved for your child\'s college fund. Tragically, your child dies, but you recently gained a step-child who has no college fund. Do you:\n";
	cout << "	1) Donate the money to a charity in your child\'s honor.\n";
	cout << "	2) Give it to your step-child.\n";
	cout << "	3) Burn it.\n";
	cout << "	4) Keep it for yourself and buy a baller new yacht.\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			--myTraits.thinking;
			++myTraits.friendly;
			goodInput = true;
			break;
		case 2:
			++myTraits.friendly;
			++myTraits.thinking;
			++myTraits.organized;
			goodInput = true;
			break;
		case 3:
			--myTraits.organized;
			goodInput = true;
			break;
		case 4:
			--myTraits.thinking;
			--myTraits.friendly;
			--myTraits.organized;
			goodInput = true;
			break;
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionFive(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "5.) Your coworker has asked if you could provide a ride to work for them for the next month, but it adds 20 minutes to your commute. Do you:\n";
	cout << "	1) Give them a ride for free.\n";
	cout << "	2) Give them rides, but ask for gas money.\n";
	cout << "	3) Decline to give them any rides.\n";
	cout << "	4) Offer to cover half of the rides.\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			--myTraits.thinking;
			++myTraits.friendly;
			goodInput = true;
			break;
		case 2:
			++myTraits.thinking;
			goodInput = true;
			break;
		case 3:
			--myTraits.flexible;
			--myTraits.friendly;
			goodInput = true;
			break;
		case 4:
			++myTraits.thinking;
			++myTraits.flexible;
			goodInput = true;
			break;
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionSix(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "6.) You are wandering through a dungeon, and come across a split in the path. Do you:\n";
	cout << "	1) Go left.\n";
	cout << "	2) Go right.\n";
	cout << "	3) Go straight.\n";
	cout << "	4) Turn back around.\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			++myTraits.honest;
			goodInput = true;
			break;
		case 2:
			--myTraits.honest;
			goodInput = true;
			break;
		case 3:
			--myTraits.flexible;
			++myTraits.top;
			goodInput = true;
			break;
		case 4:
			--myTraits.top;
			goodInput = true;
			break;
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionSeven(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "7.) A year ago, you began scheduling a vacation from work. You\'re taking off 3 weeks, but are only travelling for 2 weeks and planning on relaxing at home for the last week. Your coworker recently tried to get some days off of work for her vacation, but had one of her days get denied. She hears that you will be at home during this time, do you give up one of your relaxation days so she can go on vacation?\n";
	cout << "	1) Yes.\n";
	cout << "	2) No.\n";
	
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			--myTraits.friendly;
			++myTraits.flexible;
			goodInput = true;
			break;
		case 2:
			++myTraits.friendly;
			--myTraits.flexible;
			goodInput = true;
			break;
		
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionEight(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "8.) Your significant other always refuses to bring a coat, no matter how often you remind them to bring one because it\'s cold. It happened again tonight. Do you:\n";
	cout << "	1) Give them your coat (but now you\'re cold).\n";
	cout << "	2) Keep your coat (they have to live with their actions).\n";
	cout << "	3) Throw out your coat (you\'re both cold).\n";
	cout << "	4) Bring an extra coat (you knew this would happen)\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			--myTraits.thinking;
			++myTraits.friendly;
			goodInput = true;
			break;
		case 2:
			--myTraits.friendly;
			--myTraits.flexible;
			goodInput = true;
			break;
		case 3:
			--myTraits.friendly;
			--myTraits.organized;
			--myTraits.thinking;
			goodInput = true;
			break;
		case 4:
			++myTraits.organized;
			goodInput = true;
			break;
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionNine(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "9.) Your cat wants a little salami.\n";
	cout << "	1) Give it to them.\n";
	cout << "	2) Don\'t give it to them.\n";
	
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			++myTraits.friendly;
			++myTraits.top;
			goodInput = true;
			break;
		case 2:
			--myTraits.friendly;
			goodInput = true;
			break;
		
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionTen(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	bool clean = false;
	cout << "10.) You set off the fire alarm at 3am, why did it happen?\n";
	cout << "	1) Burning food you were making because your significant other broke up with you.\n";
	cout << "	2) Burning food you were making because you forgot to eat all day.\n";
	cout << "	3) Smoking something.\n";
	cout << "	4) You pulled the fire alarm on purpose.\n";
	if (myTraits.organized > 5)
	{
		clean = true;
		cout << "	5) You took the fall for your roommate, you would never set the fire alarm off at 3am, what are you, an animal?\n"; //TODO:test
	}
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			--myTraits.thinking;
			--myTraits.organized;
			goodInput = true;
			break;
		case 2:
			--myTraits.organized;
			goodInput = true;
			break;
		case 3:
			--myTraits.friendly;
			--myTraits.organized;
			goodInput = true;
			break;
		case 4:
			--myTraits.friendly;
			--myTraits.thinking;
			--myTraits.organized;
			--myTraits.honest;
			goodInput = true;
			break;
		case 5:
			if (clean)
			{
				++myTraits.organized;
				--myTraits.top;
				goodInput = true;
				break;
			}
			else
			{
				cout << "Please enter a valid input\n";
				cin >> input;
				break;
			}
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionEleven(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "11.) You\'re having a dinner party. One of your guests has serious dietary restrictions. Do you:\n";
	cout << "	1) Make them their own dish.\n";
	cout << "	2) Have them bring their own food.\n";
	cout << "	3) Make nothing for them but also don\'t ask them to bring their own food.\n";
	cout << "	4) Take them off the guest list.\n";
	cout << "	5) You forgot about their dietary restrictions...this is awkward.\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			++myTraits.friendly;
			++myTraits.flexible;
			++myTraits.organized;
			goodInput = true;
			break;
		case 2:
			--myTraits.flexible;
			++myTraits.honest;
			goodInput = true;
			break;
		case 3:
			--myTraits.friendly;
			--myTraits.organized;
			goodInput = true;
			break;
		case 4:
			--myTraits.friendly;
			--myTraits.flexible;
			goodInput = true;
			break;
		case 5:
			--myTraits.thinking;
			--myTraits.organized;
			goodInput = true;
			break;
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionTwelve(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "12.) Your brother has told you he intends to propose to his girlfriend at your wedding. What do you do?\n";
	cout << "	1) Take him off the guest list.\n";
	cout << "	2) Let him propose.\n";
	cout << "	3) Ask him not to propose.\n";
	cout << "	4) Have security keep an eye on him so he cannot propose.\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			--myTraits.flexible;
			goodInput = true;
			break;
		case 2:
			--myTraits.thinking;
			++myTraits.friendly;
			goodInput = true;
			break;
		case 3:
			++myTraits.honest;
			goodInput = true;
			break;
		case 4:
			--myTraits.honest;
			--myTraits.flexible;
			goodInput = true;
			break;
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionThirteen(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "13.) You work at a coffee shop. One of the customers offered to pay you $300 to have a coffee with him at the coffee shop after your shift. You are in a serious relationship. What do you do?\n";
	cout << "	1) Have coffee with him to get the money.\n";
	cout << "	2) Refuse the offer, as your significant other would get upset.\n";
	cout << "	3) Check with your significant other if they\'d be okay with you doing this.\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			--myTraits.honest;
			++myTraits.thinking;
			++myTraits.top;
			goodInput = true;
			break;
		case 2:
			--myTraits.top;
			goodInput = true;
			break;
		case 3:
			++myTraits.friendly;
			++myTraits.thinking;
			goodInput = true;
			break;
		
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionFourteen(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "14.) Your friend is married. You find out they\'re cheating on their significant other. You don\'t know their significant other well. What do you do?\n";
	cout << "	1) Tell their significant other.\n";
	cout << "	2) Don\'t tell their significant other.\n";
	cout << "	3) Try to convince your friend to stop what they\'re doing.\n";
	cout << "	4) Tell the person they\'re cheating with in case they don\'t know.\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			++myTraits.honest;
			goodInput = true;
			break;
		case 2:
			--myTraits.honest;
			++myTraits.top;
			goodInput = true;
			break;
		case 3:
			++myTraits.organized;
			++myTraits.thinking;
			goodInput = true;
			break;
		case 4:
			--myTraits.organized;
			++myTraits.honest;
			goodInput = true;
			break;
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}

void QuestionFifteen(traits &myTraits)
{
	int input = 0;
	bool goodInput = false;
	cout << "15.) You\'ve been invited to your siblings wedding, and are in the bridal party. Your hair is blue, but your sibling wants you to dye your hair back to your natural color for the wedding. What do you do?\n";
	cout << "	1) Dye your hair to a natural color.\n";
	cout << "	2) Keep the blue hair and attempt to stay in the bridal party.\n";
	cout << "	3) Drop out of the bridal party so you can keep your hair color relatively drama-free.\n";
	cout << "	4) Don\'t come to the wedding.\n";
	cin >> input;

	while (!goodInput)
	{
		switch (input)
		{
		case 1:
			++myTraits.friendly;
			--myTraits.top;
			goodInput = true;
			break;
		case 2:
			--myTraits.flexible;
			--myTraits.organized;
			goodInput = true;
			break;
		case 3:
			--myTraits.flexible;
			++myTraits.organized;
			goodInput = true;
			break;
		case 4:
			--myTraits.thinking;
			--myTraits.friendly;
			goodInput = true;
			break;
		default:
			cout << "Please enter a valid input\n";
			cin >> input;
		}
	}
}
#pragma endregion
///<summary>This function takes the myTraits struct 
///and determines what sofa to output.</summary>
void DetermineFurniture(traits &myTraits)
{
	bool frend = false;
	bool flex = false;
	bool think = false;
	bool honor = false;
	bool organ = false;

	if (myTraits.friendly > 5 )
	{
		frend = true;//friendly is 'true', rude is 'false'
	}
	if (myTraits.flexible > 5)
	{
		flex = true;//flexible is 'true', stubborn is 'false'
	}
	if (myTraits.thinking > 5)
	{
		think = true;//thinking is 'true', feeling is 'false'
	}
	if (myTraits.honest > 5)
	{
		honor = true;//honest is 'true', liar is 'false'
	}
	if (myTraits.organized > 5)
	{
		organ = true;//organized is 'true', messy is 'false'
	}
	
	if (myTraits.top == 10)//you've got FULL top 
	{
		cout << "Your couch is: Strandmon! Congrats on being a top!\n";
		cout << "Here is a link to the Standmon: https://www.ikea.com/us/en/p/strandmon-wing-chair-nordvalla-dark-gray-90359829/";
	}
	if (myTraits.top <= 0)//you've got FULL bottom
	{
		cout << "Your couch is: Gamlehut!\n";
		cout << "Here is a link to the Gamelhut: https://www.ikea.com/us/en/p/gamlehult-ottoman-with-storage-rattan-anthracite-10434309/";
	}
	//1
	if (frend && flex && think && honor & organ)
	{
		cout << "Your couch is: Karlstad!\n";
		cout << "Here is a link to the Karlstad: https://www.ikea.com/us/en/p/karlstad-sofa-knisa-light-gray-s39132702/";
	}
	if (frend && flex && think && honor & !organ)
	{
		cout << "Your couch is: Balkarp!\n";
		cout << "Here is a link to the Kalkarp: https://www.ikea.com/us/en/p/balkarp-sleeper-sofa-vissle-gray-50307936/";
	}
	if (frend && flex && think && !honor & organ)
	{
		cout << "Your couch is: Bosnas!\n";
		cout << "Here is a link to the Bosnas: https://www.ikea.com/us/en/p/bosnaes-ottoman-with-storage-ransta-yellow-80266699/";
	}
	//4
	if (frend && flex && think && !honor & !organ)
	{
		cout << "Your couch is: Sandbacken!\n";
		cout << "Here is a link to the Sandbacken: https://www.ikea.com/us/en/p/sandbacken-sofa-lofallet-beige-s19217797/";
	}
	if (frend && flex && !think && honor & organ)
	{
		cout << "Your couch is: Vedbo!\n";
		cout << "Here is a link to the Vedbo: https://www.ikea.com/us/en/p/vedbo-armchair-gunnared-blue-50423587/";
	}
	if (frend && flex && !think && honor & !organ)
	{
		cout << "Your couch is: Buskbo!\n";
		cout << "Here is a link to the Buskbo: https://www.ikea.com/us/en/p/buskbo-armchair-rattan-djupvik-white-s69299012/";
	}
	if (frend && flex && !think && !honor & organ)
	{
		cout << "Your couch is: Friheten!\n";
		cout << "Here is a link to the Friheten: https://www.ikea.com/us/en/p/friheten-sleeper-sectional-3-seat-w-storage-skiftebo-blue-s69297560/";
	}
	//8
	if (frend && flex && !think && !honor & !organ)
	{
		cout << "Your couch is: Ekolsund!\n";
		cout << "Here is a link to the Ekolsund: https://www.ikea.com/us/en/p/ekolsund-recliner-gunnared-light-brown-pink-s89297187/ ";
	}
	if (frend && !flex && think && honor & organ)
	{
		cout << "Your couch is: Landskrona!\n";
		cout << "Here is a link to the Landskrona: https://www.ikea.com/us/en/p/landskrona-sofa-gunnared-dark-gray-wood-s99270314/";
	}
	if (frend && !flex && think && honor & !organ)
	{
		cout << "Your couch is: Knislinge!\n";
		cout << "Here is a link to the Knislinge: https://www.ikea.com/us/en/p/knislinge-sofa-idhult-black-80278923/";
	}
	if (frend && !flex && think && !honor & organ)
	{
		cout << "Your couch is: Koarp!\n";
		cout << "Here is a link to the Koarp: https://www.ikea.com/us/en/p/koarp-armchair-orrsta-light-blue-black-s29221746/";
	}
	//12
	if (frend && !flex && think && !honor & !organ)
	{
		cout << "Your couch is: Kivik!\n";
		cout << "Here is a link to the Kivik: https://www.ikea.com/us/en/p/kivik-sectional-5-seat-corner-hillared-with-chaise-hillared-dark-blue-s89193712/ ";
	}
	if (frend && !flex && !think && honor & organ)
	{
		cout << "Your couch is: Gronlid!\n";
		cout << "Here is a link to the Gronlid: https://www.ikea.com/us/en/p/groenlid-sectional-4-seat-corner-inseros-white-s19254676/";
	}
	if (frend && !flex && !think && honor & !organ)
	{
		cout << "Your couch is: Lycksele Lovas!\n";
		cout << "Here is a link to the Lycksele Lovas: https://www.ikea.com/us/en/p/lycksele-loevas-sleeper-sofa-vallarum-cerise-s09280888/";
	}
	if (frend && !flex && !think && !honor & organ)
	{
		cout << "Your couch is: Brathult!\n";
		cout << "Here is a link to the Brathult: https://www.ikea.com/us/en/p/brathult-sectional-3-seat-corner-vissle-red-orange-s29217829/ ";
	}
	//16
	if (frend && !flex && !think && !honor & !organ)
	{
		cout << "Your couch is: Havsten!\n";
		cout << "Here is a link to the Havsten: https://www.ikea.com/us/en/p/havsten-loveseat-in-outdoor-orange-beige-s09282613/";
	}
	if (!frend && flex && think && honor & organ)
	{
		cout << "Your couch is: Stocksund!\n";
		cout << "Here is a link to the Stocksund: https://www.ikea.com/us/en/p/stocksund-bench-nolhaga-gray-beige-black-wood-s69033630/";
	}
	if (!frend && flex && think && honor & !organ)
	{
		cout << "Your couch is: Vannas!\n";
		cout << "Here is a link to the Vannas: https://www.ikea.com/us/en/p/vaennaes-reclining-armchair-murum-black-80402060/";
	}
	if (!frend && flex && think && !honor & organ)
	{
		cout << "Your couch is: Vallentuna!\n";
		cout << "Here is a link to the Vallentuna: https://www.ikea.com/us/en/p/vallentuna-sleeper-module-orrsta-light-gray-s09149600/";
	}
	//20
	if (!frend && flex && think && !honor & !organ)
	{
		cout << "Your couch is: Otteron!\n";
		cout << "Here is a link to the Otteron: https://www.ikea.com/us/en/p/otteroen-innerskaer-pouffe-in-outdoor-blue-s29287563/ ";
	}
	if (!frend && flex && !think && honor & organ)
	{
		cout << "Your couch is: Agen!\n";
		cout << "Here is a link to the Agen: https://www.ikea.com/us/en/p/agen-armchair-rattan-bamboo-50058376/";
	}
	if (!frend && flex && !think && honor & !organ)
	{
		cout << "Your couch is: Lidhult!\n";
		cout << "Here is the link to the Lidhult: https://www.ikea.com/us/en/p/lidhult-corner-sleeper-sofa-6-seat-with-chaise-grann-bomstad-dark-brown-s89277617/";
	}
	if (!frend && flex && !think && !honor & organ)
	{
		cout << "Your couch is: Remsta!\n";
		cout << "Here is a link to the Remsta: https://www.ikea.com/us/en/p/remsta-armchair-djuparp-dark-green-blue-40344760/";
	}
	//24
	if (!frend && flex && !think && !honor & !organ)
	{
		cout << "Your couch is: Soderhamn!\n";
		cout << "Here is a link to the Soderhamn: https://www.ikea.com/us/en/p/soederhamn-sectional-4-seat-with-chaise-samsta-dark-gray-s99284373/";
	}
	if (!frend && !flex && think && honor & organ)
	{
		cout << "Your couch is: Lindome!\n";
		cout << "Here is a link to the Lindome: https://www.ikea.com/us/en/p/lindome-sofa-djuparp-dark-gray-50398620/";
	}
	if (!frend && !flex && think && honor & !organ)
	{
		cout << "Your couch is: Bingsta!\n";
		cout << "Here is a link to the Bingsta: https://www.ikea.com/us/en/p/bingsta-armchair-vissle-dark-gray-kabusa-dark-gray-40454230/";
	}
	if (!frend && !flex && think && !honor & organ)
	{
		cout << "Your couch is: Knopparp!\n";
		cout << "Here is a link to the Knopparp: https://www.ikea.com/us/en/p/knopparp-sofa-knisa-light-gray-20424625/";
	}
	//28
	if (!frend && !flex && think && !honor & !organ)
	{
		cout << "Your couch is: Pello!\n";
		cout << "Here is a link to the Pello: https://www.ikea.com/us/en/p/pello-armchair-holmby-natural-70078463/";
	}
	if (!frend && !flex && !think && honor & organ)
	{
		cout << "Your couch is: Ektorp!\n";
		cout << "Here is a link to the Ektorp: https://www.ikea.com/us/en/p/ektorp-sofa-lofallet-beige-s89129207/";
	}
	if (!frend && !flex && !think && honor & !organ)
	{
		cout << "Your couch is: Ikea PS Lomsk!\n";
		cout << "Here is a link to the Ikea PS Lomsk: https://www.ikea.com/us/en/p/ikea-ps-loemsk-swivel-chair-white-red-10407136/";
	}
	if (!frend && !flex && !think && !honor & organ)
	{
		cout << "Your couch is: Sandared!\n";
		cout << "Here is a link to the Sandared: https://www.ikea.com/us/en/p/sandared-pouffe-beige-20385313/";
	}
	//32
	if (!frend && !flex && !think && !honor & !organ)
	{
		cout << "Your couch is: Klippan!\n";
		cout << "Here is a link to the Klippan: https://www.ikea.com/us/en/p/klippan-loveseat-mattsbo-multicolor-s99284636/";
	}
	
	cout << "\n\n";

	cout << "Stats are given on a scale starting at a neutral 5, with higher numbers being \'more like\' the named stat. (i.e. a 10 in Friendly means you are friendly, while a 1 in friendly means you are rude)";
	cout << "\n\nThe categories are Friendly/Rude, Flexible/Stubborn, Thinking with your head/Following your heart, Honest/Liar, and Organized/Messy";

	cout << "\n\nYour stats are: ";
	cout << "\n	Friendly: " << myTraits.friendly;
	cout << "\n	Flexible: " << myTraits.flexible;
	cout << "\n	Thinking: " << myTraits.thinking;
	cout << "\n	Honesty: " << myTraits.honest;
	cout << "\n	Organized: " << myTraits.organized;
	//cout << "\n	Top: " << myTraits.top;
	cout << "\n";
}