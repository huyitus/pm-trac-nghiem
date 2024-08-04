#include "CountDown.h"

CountDownValue::CountDownValue() {
	this->min = 0;
	this->sec = 0;
}

CountDownValue::CountDownValue(int min, int sec) {
	this->min = min;
	this->sec = sec;
}

int CountDownValue::getMin() {
	return this->min;
}

int CountDownValue::getSec() {
	return this->sec;
}

int CountDownValue::toSecond() {
	return this->min * 60 + this->sec;
}

bool CountDownValue::isTimeOver() {
	return (this->toSecond() <= 0);
}

void CountDownValue::setMin(int min) {
	this->min = min;
}

void CountDownValue::setSec(int sec) {
	this->sec = sec;
}

CountDown::CountDown(int min) {
	this->duration = min;
	this->startTime = -1;
}

void CountDown::startCountdown() {
	this->startTime = time(NULL);
}

ICountDownValue* CountDown::calRemainingTime() {
	if (this->startTime > 0) {
		time_t elapsedSecond = time(NULL) - this->startTime;
		time_t remainingSecond = (this->duration * 60ll) - elapsedSecond;

		this->countDownValue.setMin(int(remainingSecond / 60));
		this->countDownValue.setSec(int(remainingSecond % 60));
	}
	return &this->countDownValue;
}

int CountDown::calElapsedSecond() {
	if (this->startTime > 0) {
		time_t elapsedSecond = time(NULL) - this->startTime;
		return int(elapsedSecond);
	}
	return 0;
}

bool CountDown::isHasStarted() {
	return this->startTime >= 0;
}
