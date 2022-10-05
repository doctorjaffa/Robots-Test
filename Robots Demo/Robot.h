#pragma once

#include <string>
#include <map>
#include "RoboDog.h"

class Robot
{
public:

	Robot();
	Robot(std::string newName, std::string newEyeColour, float newWeight, float newPrice, std::string newColour, RoboDog newPet);

	//~Robot();

	void IntroduceSelf();
	void AddColourResponse(std::string colour, std::string response);
	std::string GetColourResponseFor(std::string colour);
	void SetPet(RoboDog newPet);

	std::string name;
	std::string eyeColour;
	float weight;
	float price;
	std::map<std::string, std::string> colourResponse;
	RoboDog pet;
	
};

