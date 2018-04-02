#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <unordered_map>
#ifndef MATRIX_H
#define MATRIX_H
using namespace std;
class Matrix {
		int sizeOfMatrix;
		int sum;
		int **matrix;
		// int matrix[10][10];
public:
		Matrix();
		~Matrix();
		Matrix(int n);
		void writeData();
		void processData();
		void printAnswer();
		// friend void changeSize(Matrix m, int n);
};
class MatrixWithSTL {
		int sizeOfMatrix;
		int sum;
		vector< vector<int> > matrix;
public:
		MatrixWithSTL();
		~MatrixWithSTL();
		MatrixWithSTL(int n);
		void writeData();
		void sortData();
		void processData();
		void printAnswer();
};
class ListExample{
	int size;
	list <int> myList;
public:
	ListExample(int n);
	~ListExample();
	void addRandomData();
	void printList();
};
class MapComparision{
	map <string,int> m;
	unordered_map <string, int> um;
public:
	MapComparision();
	~MapComparision();
	void initializeByData(int n);
	void compareTimes();
};
#endif
