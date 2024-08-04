#include "QuizRecordsWrapper.h"

bool QuizRecordsWrapper::compareQuizRecord(QuizRecord r1, QuizRecord r2) {
	if (r1.getMark() == r2.getMark()) {// If has the same mark, then compare by examinee id
		return (r1.getExamineeID().compare(r2.getExamineeID()) < 0);
	}
	return (r1.getMark() > r2.getMark());
}

QuizRecordsWrapper::QuizRecordsWrapper() {
	//
}

QuizRecordsWrapper::QuizRecordsWrapper(vector<QuizRecord> records, bool isNeedingSorting) {
	this->records = records;
	if (isNeedingSorting) this->sort();
}

QuizRecordsWrapper::QuizRecordsWrapper(const QuizRecordsWrapper& inst) {
	this->records = inst.records;
}

QuizRecordsWrapper& QuizRecordsWrapper::operator=(QuizRecordsWrapper inst) {
	this->records = inst.records;
	return *this;
}

IQuizRecord* QuizRecordsWrapper::operator[](int index) {
	return this->getAt(index);
}

IQuizRecord* QuizRecordsWrapper::getAt(int index) {
	return (index < 0 || index >= this->records.size()) ? nullptr : &this->records[index];
}

int QuizRecordsWrapper::getLength() {
	return (int)this->records.size();
}

void QuizRecordsWrapper::sort() {
	std::sort(this->records.begin(), this->records.end(), QuizRecordsWrapper::compareQuizRecord);
}

int QuizRecordsWrapper::find(QuizRecord rec) {
	int index = 0;
	for (auto iter = this->records.begin(); iter != this->records.end(); ++iter) {
		if ((*iter).equal(rec)) return index;
		index++;
	}
	return -1;
}
