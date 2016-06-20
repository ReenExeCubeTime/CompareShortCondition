#include <stdio.h>
#include <time.h>

#define delay 100000000

int get(int value) {
	return value;
}

float now() {
    return (float)clock()/CLOCKS_PER_SEC;
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
	float startTime = now();

	for (int i = 1; i < delay; ++i) {
		get(i);
	}

	float endTime = now();

	float timeElapsed = endTime - startTime;

    printf("%s %.9f\n", title, timeElapsed);
}

void startIf(char title[]) {
	float startTime = now();

	for (int i = 1; i < delay; ++i) {
		getIf(i);
	}

	float endTime = now();

	float timeElapsed = endTime - startTime;

    printf("%s %.9f\n", title, timeElapsed);
}

void startIfElse(char title[]) {
	float startTime = now();

	for (int i = 1; i < delay; ++i) {
		getIfElse(i);
	}

	float endTime = now();

	float timeElapsed = endTime - startTime;

	printf("%s %.9f\n", title, timeElapsed);
}

void startCommon(char title[], int (*callback)(int i)) {
	float startTime = now();

	for (int i = 1; i < delay; ++i) {
		callback(i);
	}

	float endTime = now();

	float timeElapsed = endTime - startTime;

	printf("%s %.9f\n", title, timeElapsed);
}

void preIncrement(char title[]) {
	float startTime = now();

    /**
     * to off optimize
     */
    int hard;

	for (int i = 1; i < delay; hard = ++i);

	float endTime = now();

	float timeElapsed = endTime - startTime;

	printf("%s %.9f\n", title, timeElapsed);
}

void postIncrement(char title[]) {
	float startTime = now();

    /**
     * to off optimize
     */
    int hard;

	for (int i = 1; i < delay; hard = i++);

	float endTime = now();

	float timeElapsed = endTime - startTime;

	printf("%s %.9f\n", title, timeElapsed);
}

int main(void) {
	start("Simple get");
    startCommon("Simple get", get);
	startIf("Condition getIf");
    startCommon("Condition getIf", getIf);
	startIfElse("Condition getIfElse");
    startCommon("Condition getIfElse", getIfElse);

    preIncrement("Pre Increment");
    postIncrement("Post Increment");

	// your code goes here
	return 0;
}
