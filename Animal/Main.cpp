#include <iostream>
#include <string>

using namespace std;

class Animal {

private:
	int height;
	int weight;
	string name;

	static int numOfAnimals;

public:
	int getHeight() { return height; }
	int getWeight() { return weight; }
	string getName() { return name; }

	void setHeight(int cm) { height = cm; }
	void setWeight(int kg) { weight = kg; }
	void setName(string animalName) { name = animalName; }


	Animal(int, int, string);

	~Animal();

	Animal();

	static int getNumOfAnimals() { return numOfAnimals; }

	void toString();



};

int Animal::numOfAnimals = 0;



Animal::Animal(int height, int weight, string name) {
	this->height = height;
	this->weight = weight;
	this->name = name;
	Animal::numOfAnimals++;

}

Animal::~Animal() {

	cout << "Animal " << this->name << " destroyed" << endl;


}

Animal::Animal() {
	Animal::numOfAnimals++;
}

void Animal::toString() {
	cout << this->name << " is " << this->height << " cms tall and " << this->weight << " kgs in weight" << endl;

}

class Dog : public Animal {
private:
	string sound = "Woof";

public:
	void getSound() { cout << sound << endl; }

	Dog(int, int, string, string);
	Dog() :Animal() {};

	void toString();

};

Dog::Dog(int height, int weight, string name, string bark) :Animal(height, weight, name) {

	this->sound = bark;

}

void Dog::toString() {
	cout << this->getName() << " is " << this->getHeight() << " cms tall and " << this->getWeight() << " kgs in weight and says "
		<< this->sound << endl;

}

void numberOfAnimals() {
	cout << "Number of Animals " << Animal::getNumOfAnimals() << endl;
}



int main()
{
	Animal blacky;

	blacky.setHeight(12);
	blacky.setWeight(13);
	blacky.setName("Blacky");

	blacky.toString();

	Animal tom(36, 15, "Tom ");

	tom.toString();

	Dog spot(38, 16, "Spot", "Woof");

	spot.getSound();
	spot.toString();

	numberOfAnimals();

	cout << "Please Press Enter :)";
	cin.get();
	return 0;

}