#ifndef _ICountDownValue_H_
#define _ICountDownValue_H_

class ICountDownValue {
public:
	virtual int getMin() = 0;

	virtual int getSec() = 0;

	virtual int toSecond() = 0;

	virtual bool isTimeOver() = 0;
};


#endif

