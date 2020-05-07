

#include <iostream>
#include <thread>
#include <mutex>
#include <vector>

using namespace std;

#ifndef CONVEER_CONVEYER_H
#define CONVEER_CONVEYER_H

class Conveyer {
public:
	void calculate(vector<int> first, vector<int> second);

	static void printBinary(int numInTen);
private:
	/**
	 * Максимальное количество цифр в двоичном коде
	 */
	static const int MAX_DIGIT_INDEX = 5;
	static const int MAX_RESULT_DIGIT_INDEX = 11;
	/*
	 * Границы чисел
	 */
	static const int MAX_NUM_TO_CALC = 64;
	static const int MIN_NUM_TO_CALC = 5;

	int myTimer;
	int stager;

	vector<int> first;
	vector<int> second;
	vector<pair<int, int>> outputVec;

	mutex corPrint;

	void checkVectors(int index);

	void addToResult(int digit, int index);
	void printStep(int digit, int index);

	void printOutput();
	void printInput();

};

#endif //CONVEER_CONVEYER_H
