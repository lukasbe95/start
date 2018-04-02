#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include "matrix.h"
using namespace std;

Matrix::Matrix(){
	sizeOfMatrix = 10;
	sum = 0;
	// matrix = new int*[sizeOfMatrix];
	// for (int i = 0; i < sizeOfMatrix; i++) {
	// 	matrix[i] = new int[sizeOfMatrix];
	// }
}
Matrix::Matrix(int n){
	sizeOfMatrix = n;
	sum = 0;
	cout<<sizeOfMatrix<<endl;
	matrix = new int*[sizeOfMatrix];
	for (int i = 0; i < sizeOfMatrix; i++) {
		matrix[i] = new int[sizeOfMatrix];
	}
}
MatrixWithSTL::MatrixWithSTL(int n){
	sizeOfMatrix = n;
	for (size_t i = 0; i < sizeOfMatrix; i++) {
		std::vector< int > v;
		for (size_t j = 0; j < sizeOfMatrix; j++) {
				v.push_back( 0 );
		}
		matrix.push_back( v );
	}
}
void MatrixWithSTL::writeData(){
	srand(time(NULL));
	cout<<"RUN"<<endl;
	for (size_t i = 0; i < sizeOfMatrix; i++) {
		for (size_t j = 0; j < sizeOfMatrix; j++) {
				matrix[i][j] = rand();
		}
	}
}
void Matrix::writeData(){
	srand(time(NULL));
	cout<<"RUN"<<endl;
	int numOfDiag = rand() % sizeOfMatrix;
	for (int i = 0; i < sizeOfMatrix; i++) {
		for (int k = 0; k < sizeOfMatrix; k++) {
			matrix[i][k] = rand();
			cout<<matrix[i][k]<<endl;
		}
	}
}
void MatrixWithSTL::printAnswer(){
	for (size_t i = 0; i < sizeOfMatrix; i++) {
		for (size_t j = 0; j < sizeOfMatrix; j++) {
				cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}
void Matrix::printAnswer(){
	for (int j = 0; j < sizeOfMatrix; j++) {
		for (int i = 0; i < sizeOfMatrix; i++) {
			cout << &matrix[j][i] << " ";
		}
		cout <<""<<endl;
	}
}
void MatrixWithSTL::sortData(){
	for(auto& row: matrix){
		for(auto& col: row){
			cout<<col<<" ";
		}
		cout<<endl;
	}
	sort(matrix.begin(),matrix.end());
	cout<<"----------------------------------"<<endl;
	for(auto& row: matrix){
		for(auto& col: row){
			cout<<col<<" ";
		}
		cout<<endl;
	}
	cout<<"Capacity: "<<matrix.capacity()<<endl;
	cout<<"Size: "<<matrix.size()<<endl;
	cout<<"Max size: "<<matrix.max_size()<<endl;

}
MatrixWithSTL::~MatrixWithSTL(){
		cout<<"DESTRUCT STL!!!"<<endl;
}
Matrix::~Matrix(){
	cout<<"DESTRUCT IT!!!"<<endl;
	for (int i = 0; i < sizeOfMatrix; ++i)
	 delete [] matrix[i];

	delete [] matrix;
}
ListExample::ListExample(int n){
	size = n;
	for (size_t i = 0; i < n; i++) {
		myList.push_back((int)i*3);
	}
}
void ListExample::addRandomData(){
	srand(time(NULL));
	myList.push_front(rand()%100);
	myList.push_back(rand()%100);
}

void ListExample::printList(){
	for(auto& x: myList){
		cout<<"Adres: "<<&x<<" wartość: "<<x<<endl;
	}
	cout<<"Sorted: "<<endl;
	myList.sort();
	for(auto& x: myList){
		cout<<"Adres: "<<&x<<" wartość: "<<x<<endl;
	}
}

ListExample::~ListExample(){
	cout<<"LIST DESTRUCT!!!"<<endl;
}
MapComparision::MapComparision(){
	cout<<"Let's start"<<endl;
}
MapComparision::~MapComparision(){
	cout<<"MAP DESTRUCT!!!"<<endl;

}
void MapComparision::initializeByData(int n){
	srand(time(NULL));
	int temp {0};
	for (size_t i = 0; i < n; i++) {
		cout<<i<<endl;
		temp = rand();
		pair<string,int> p ("aaaaa",temp);
		m.insert(p);
		um.insert(p);
	}
	for(auto& x:m){
		cout<<x.first<<" "<<x.second<<endl;
	}
}
