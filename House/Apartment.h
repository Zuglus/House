#pragma once
#include <iostream>
#include <vector>
#include "Human.h"

class Apartment
{
	std::vector <Human> humanList;
public:
	void AddHuman()
	{
		Human human;
		std::cin >> human;

		humanList.push_back(human);
	}

	void DelHuman(int index)
	{
		if (index >= 0
			&& index < humanList.size())
		{
			std::vector<Human>::iterator iterator = humanList.begin();
			humanList.erase(iterator + index);
		}
	}
};