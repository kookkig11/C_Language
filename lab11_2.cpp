#include <iostream>
using namespace std;

class Animal
{
private:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};
Animal::Animal(int happiness, int energy, int fullness)
{
  this->happiness = happiness;
  this->energy = energy;
  this->fullness = fullness;
}

int Animal::getHappiness()
{
  return happiness;
}

int Animal::getEnergy()
{
  return energy;
}

int Animal::getFullness()
{
  return fullness;
}

void Animal::eat(int food)
{
  if (food > 0) {
    fullness += food;
    if (fullness > MAX_FULLNESS) {
      happiness -= 10;
    }
  }
  limitStat();
}

void Animal::play(int hour)
{
  if (hour > 0) {
    if (energy != 0 && fullness != 0) {
      energy -= 10 * hour;
      fullness -= 20 * hour;
      happiness += 5 * hour;
    }
  }
  limitStat();
}

void Animal::sleep(int hour)
{
  if (hour > 0) {
    energy += 10 * hour;
    fullness -= 10 * hour;
  }
  limitStat();
}

void Animal::limitStat()
{
  if (energy > MAX_ENERGY) {
    energy = MAX_ENERGY;
  } else if (energy < 0) {
    energy = 0;
  }
  
  if (happiness > MAX_HAPPINESS) {
    happiness = MAX_HAPPINESS;
  } else if (happiness < 0) {
    happiness = 0;
  }
  
  if (fullness > MAX_FULLNESS) {
    fullness = MAX_FULLNESS;
  } else if (fullness < 0) {
    fullness = 0;
  }
}

int main()
{
}