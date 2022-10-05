#include "Robot.h"
#include <iostream>

Robot::Robot() :
	name("")
	, eyeColour("")
	, weight(0.0f)
	, price(0.0f)
	, colourResponse()
	, pet()
{
	std::cout << "\nRobot constructed\n.";
}

Robot::Robot(std::string newName, std::string newEyeColour, float newWeight, float newPrice, std::string newColour, RoboDog newPet)
	: name(newName)
	, eyeColour(newEyeColour)
	, weight(newWeight)
	, price(newPrice)
	, colourResponse()
	, pet(newPet)
{
}

void Robot::IntroduceSelf()
{
	std::cout << "Hello. My name is " << name << ". I have " << eyeColour << " eyes. I weigh " << weight << std::endl << " weight units. I cost " << price << ". Nice to meet you." << std::endl;
}

void Robot::AddColourResponse(std::string colour, std::string response)
{
	colourResponse[colour] = response;
}

std::string Robot::GetColourResponseFor(std::string colour)
{
	return colourResponse[colour];
}

void Robot::SetPet(RoboDog newPet)
{
	pet = newPet;
}

