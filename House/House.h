#pragma once
#include <vector>
#include "Apartment.h"

class House
{
	std::vector <Apartment> apartmentList;

public:
	void AddApartment()
	{
		Apartment apartment;

		std::cout << "How many people to add: ";
		int count;
		std::cin >> count;

		for (int i = 0; i < count; ++i)
			apartment.AddHuman();

		if (count > 0)
			apartmentList.push_back(apartment);
	}

	void DelHuman(int apartmentIndex, int humanIndex)
	{
		apartmentList[apartmentIndex].DelHuman(humanIndex);
	}
};