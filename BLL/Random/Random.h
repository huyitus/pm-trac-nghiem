#ifndef _Random_H_
#define _Random_H_

#include <time.h>
#include <stdlib.h>

class Random {
private:
	Random();

	~Random();

public:
	Random(const Random& inst) = delete;
	void operator=(const Random& inst) = delete;

	static Random* GetInstance();

	static void DestroyInstance();

	int Next();

	int Next(int max);

private:
	static Random* instance;
};

#endif