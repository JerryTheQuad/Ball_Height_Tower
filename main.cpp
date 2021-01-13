#include "constants.h"
#include <iostream>

double getHeight()
{
  std::cout << "Enter the height of the tower in meters: ";
  double height {};
  std::cin >> height;

  return height;
}

double findDistance(double height, double second)
{
  double distance {(constants::gravity * (second * second)) / 2};

  double finalDistance {height - distance};

  return finalDistance;
}

void result(double height, double second)
{
  if (height > 0.0)
    std::cout << "At " << second << " seconds, the ball is at height: " << height << "\n";
  else
    std::cout << "At " << second << " seconds, the ball is on the ground";
}

void calculateAndPrintHeight(double towerHeight, int seconds)
{
	double height { findDistance(towerHeight, seconds) };

	result(height, seconds);
}

int main()
{

  double height {getHeight()};

  calculateAndPrintHeight(height, 0);
  calculateAndPrintHeight(height, 1);
  calculateAndPrintHeight(height, 2);
  calculateAndPrintHeight(height, 3);
  calculateAndPrintHeight(height, 4);
  calculateAndPrintHeight(height, 5);

  return 0;
}