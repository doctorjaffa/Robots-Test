// Robots Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "Robot.h"
#include "RoboDog.h"
#include "Chatroom.h"

void IntroduceRobot(std::string name, std::string colour, float weight)
{
    std::cout << "Hello. My name is " << name << ". I have " << colour << " eyes. I weigh " << weight << std::endl << " weight units. Nice to meet you." << std::endl;
}

void IntroduceRobot(Robot toIntroduce)
{
    std::cout << "Hello. My name is " << toIntroduce.name << ". I have " << toIntroduce.eyeColour << " eyes. I weigh " << toIntroduce.weight << std::endl << " weight units. I cost " << toIntroduce.price << ". Nice to meet you." << std::endl;
}

int main()
{
    /*
    //Make some data representing the robots.
    //Use said data to introduce the robots.

    std::string robotName1 = "Atlas";
    std::string robotName2 = "Peabody";
    std::string roboteyeColour1 = "Blue";
    std::string roboteyeColour2 = "Orange";
    float robotWeight1 = 200.0f;
    float robotWeight2 = 150.0f;

    IntroduceRobot(robotName1, roboteyeColour1, robotWeight1);
    IntroduceRobot(robotName2, roboteyeColour2, robotWeight2);
    

    //Declare an instance of the robot class as a local variable.
    Robot robot1;

    robot1.name = "robot1";
    robot1.eyeColour = "Blue";
    robot1.weight = 200.0f;
    robot1.price = 300.0f;

    Robot robot2;

    robot2.name = "robot2";
    robot2.eyeColour = "Orange";
    robot2.weight = 150.0f;
    robot2.price = 100.0f;

    Robot robot3;

    robot3.name = "Esmerelda";
    robot3.eyeColour = "Green";
    robot3.weight = 100.0f;
    robot3.price = 700.0f;

    /*
    IntroduceRobot(atlas);
    IntroduceRobot(peabody);
    IntroduceRobot(robot3);
    

    atlas.IntroduceSelf();
    peabody.IntroduceSelf();
    robot3.IntroduceSelf();

    

    std::vector<Robot> robotVector; 

    robotVector.push_back(atlas);
    robotVector.push_back(peabody);
    robotVector.push_back(robot3);

    for (int i = 0; i < robotVector.size(); ++i)
    {
        robotVector[i].IntroduceSelf();
    }

    RoboDog dog1("Potato");
    robot3.pet = dog1;

    std::cout << "\nRobot " << robot3.name << " has a dog named " << robot3.pet.name << ".\n";

    std::map<std::string, Robot> robotMap;
    robotMap[atlas.name] = atlas;
    robotMap[peabody.name] = peabody;
    robotMap[robot3.name] = robot3;

    if (robotMap.find("Esmerelda") != robotMap.end())
    {
        robotMap["Esmerelda"].IntroduceSelf();
    }
    */

    Chatroom room1;
    room1.StartChat();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
