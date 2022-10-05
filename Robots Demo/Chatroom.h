#pragma once
#include <string>
#include <map>
#include "Robot.h"

class Chatroom
{
public:

	//Constructors/Desctructors.
	Chatroom();
	~Chatroom();

	//Public functions.
	void StartChat();

	//Data members.
	std::map<std::string, Robot> roster;

};

