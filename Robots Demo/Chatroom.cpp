#include <iostream>
#include "Chatroom.h"

Chatroom::Chatroom()
	: roster()
{
}

Chatroom::~Chatroom()
{
}

void Chatroom::StartChat()
{
    //Declare an instance of the robot class as a local variable.
    Robot robot1;

    robot1.name = "Atlas";
    robot1.eyeColour = "Blue";
    robot1.weight = 200.0f;
    robot1.price = 300.0f;

    Robot robot2;

    robot2.name = "Peabody";
    robot2.eyeColour = "Orange";
    robot2.weight = 150.0f;
    robot2.price = 100.0f;

    Robot robot3;

    robot3.name = "Esmerelda";
    robot3.eyeColour = "Green";
    robot3.weight = 100.0f;
    robot3.price = 700.0f;

    roster[robot1.name] = robot1;
    roster[robot2.name] = robot2;
    roster[robot3.name] = robot3;

    std::cout << "\nEnter the name of the robot you wish to chat with: ";

    std::string choice;
    std::cin >> choice;

    roster[choice].IntroduceSelf();
}
