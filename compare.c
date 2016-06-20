#include <stdio.h>
#include <time.h>

int get(int value) {
	return value;
}

int getIf(int value) {
	if (value > 9000000)
		return value;
	if (value > 8000000)
		return value;
	if (value > 7000000)
		return value;
	if (value > 6000000)
		return value;
	if (value > 5000000)
		return value;
	if (value > 4000000)
		return value;
	if (value > 3000000)
		return value;
	if (value > 2000000)
		return value;
	if (value > 1000000)
		return value;

	return value;
}

int getIfElse(int value) {
	if (value > 9000000)
		return value;
	else if (value > 8000000)
		return value;
	else if (value > 7000000)
		return value;
	else if (value > 6000000)
		return value;
	else if (value > 5000000)
		return value;
	else if (value > 4000000)
		return value;
	else if (value > 3000000)
		return value;
	else if (value > 2000000)
		return value;
	else if (value > 1000000)
		return value;
	else
		return value;
}

void start(char title[]) {
	float startTime = (float)clock()/CLOCKS_PER_SEC;

	for (int i = 1; i < 100000000; ++i) {
		get(i);
	}

	float endTime = (float)clock()/CLOCKS_PER_SEC;

	float timeElapsed = endTime - startTime;

    printf("%s %.9f\n", title, timeElapsed);
}

void startIf(char title[]) {
	float startTime = (float)clock()/CLOCKS_PER_SEC;

	for (int i = 1; i < 100000000; ++i) {
		getIf(i);
	}

	float endTime = (float)clock()/CLOCKS_PER_SEC;

	float timeElapsed = endTime - startTime;

    printf("%s %.9f\n", title, timeElapsed);
}

void startIfElse(char title[]) {
	float startTime = (float)clock()/CLOCKS_PER_SEC;

	for (int i = 1; i < 100000000; ++i) {
		getIfElse(i);
	}

	float endTime = (float)clock()/CLOCKS_PER_SEC;

	float timeElapsed = endTime - startTime;

	printf("%s %.9f\n", title, timeElapsed);
}

int main(void) {
	start("Simple get");
	startIf("Condition getIf");
	startIfElse("Condition getIfElse");

	// your code goes here
	return 0;
}
