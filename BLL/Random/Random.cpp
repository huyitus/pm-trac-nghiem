#include "Random.h"

Random* Random::instance = nullptr;

Random::Random() {
	srand((unsigned int)(time(NULL))); // initialize random seed
}

Random::~Random() {
	//
}

Random* Random::GetInstance() {
	if (Random::instance == nullptr) {
		Random::instance = new Random();
	}
	return Random::instance;
}

void Random::DestroyInstance() {
	delete Random::instance;
	Random::instance = nullptr;
}

int Random::Next() {
	return rand();
}

int Random::Next(int max) {
	return Next() % max;
}