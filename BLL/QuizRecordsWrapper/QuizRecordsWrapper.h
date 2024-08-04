#ifndef _QuizRecordsWrapper_H_
#define _QuizRecordsWrapper_H_

#include <vector>
#include <algorithm>
#include "../../DAL/QuizRecord.h"
#include "../../DAL/IQuizRecord.h"
#include "../../DAL/TimeStamp.h"

using namespace std;

class QuizRecordsWrapper {
private:
	static bool compareQuizRecord(QuizRecord r1, QuizRecord r2);

public:
	QuizRecordsWrapper();

	QuizRecordsWrapper(vector<QuizRecord> records, bool isNeedingSorting = false);

	QuizRecordsWrapper(const QuizRecordsWrapper& inst);

	QuizRecordsWrapper& operator=(QuizRecordsWrapper inst);

	IQuizRecord* operator[](int index);

	IQuizRecord* getAt(int index);

	int getLength();

	int find(QuizRecord rec);

private:
	vector<QuizRecord> records;

	void sort();
};

#endif