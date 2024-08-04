#ifndef _CountDown_H_
#define _CountDown_H_

#include <time.h>
#include <iostream>
#include "ICountDownValue.h"

class CountDownValue : public ICountDownValue {
public:
	CountDownValue();

	CountDownValue(int min, int sec);

	int getMin();

	int getSec();

	int toSecond();

	bool isTimeOver();

	void setMin(int min);

	void setSec(int sec);
private:
	int min;
	int sec;
};

class CountDown {
public:
	CountDown(int min);

	void startCountdown();

	ICountDownValue* calRemainingTime();

	bool isHasStarted();

	int calElapsedSecond();
private:
	CountDownValue countDownValue;
	time_t startTime;
	int duration;
};

#endif