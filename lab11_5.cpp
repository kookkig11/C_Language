#include <iostream>
using namespace std;

class Animal
{
protected:
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

class Bird:public Animal

{
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

class Pet
{
protected:
    string name;
public:
    Pet(string);
    string getName();
    void setName(string);
};

class OwnedBird:public Pet, public Bird

{
public:
    OwnedBird(string, int, int, int);
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

Bird::Bird(int bird_happiness,int bird_energy,int bird_fullness):Animal(bird_happiness,bird_energy,bird_fullness) {}

void Bird::fly(int hour)
{
  if (hour > 0) {
    energy -= 5 * hour;
    limitStat();
  }
}

void Bird::sing()
{
  happiness += 5;
  limitStat();
}

Pet::Pet(string pet_name):name(pet_name) {}

string Pet::getName()
{
  return name;
}

void Pet::setName(string name)
{
  this->name = name;
}

OwnedBird::OwnedBird(string name, int happiness, int energy, int fullness):Pet(name), Bird(happiness, energy, fullness){}



int main()
{
    char action;
    int hour;
    int happiness, energy, fullness;
    cin >> happiness >> energy >> fullness;
    OwnedBird animal("Dobby", happiness, energy, fullness);
    while (1) {
        cin >> action;
        if (action == 'q') break;
        cin >> hour;
        switch (action) {
            case 'e':
                animal.eat(hour);
                break;
            case 'p':
                animal.play(hour);
                break;
            case 's':
                animal.sleep(hour);
                break;
            case 'f':
                animal.fly(hour);
                break;
            case 'i':
                for (int i = 0; i < hour; i++)
                    animal.sing();
                break;
            case 'n':
                if (hour < 5)
                    animal.setName("Debby");
                else
                    animal.setName("Shogun");
                break;
        }
        test(animal);
    }
}