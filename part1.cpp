#include "Vector.h"
#include "List.h"
#include <iostream>
#include <time.h> 
#include <algorithm>
using namespace std;

double elapsed_time(clock_t start, clock_t finish) {
	// returns elapsed time in milliseconds
	return (finish - start) / (double)(CLOCKS_PER_SEC / 1000);
}

int main() {
	List<int> a;
	Vector<int> b;
	clock_t start, finish;
	double time = 0;
	int elements = 100000;
	cout << "Dalveer Dosanjh" << endl;
	cout << "301397398" << endl;
	cout << "dsd6" << endl;
	cout << "Program: part1" << endl;
	cout << "Type of Elements: int" << endl;
	cout << "Number of Elements: " << elements << endl;
	cout << "Time units: milliseconds" << endl;

	start = clock();
	for (int i = 0; i < elements; ++i) {
		b.push_back(i);
	}
	finish = clock();

	cout << "Time for Vector Insertion: " << elapsed_time(start, finish) << endl;

	start = clock();
	for (int i = 0; i < elements; ++i) {
		a.push_back(i);
	}
	finish = clock();

	cout << "Time for List Insertion: " << elapsed_time(start, finish) << endl;

	start = clock();
	b.visitAll();
	finish = clock();

	cout << "Time for Vector Visiting: " << elapsed_time(start, finish) << endl;

	start = clock();
	a.visitAll();
	finish = clock();

	cout << "Time for List Visiting: " << elapsed_time(start, finish) << endl;
	
	return 0;
}