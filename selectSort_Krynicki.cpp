#include <iostream>
using namespace std;

class ArrayStringContainer{
	public:
		int array[10];
		void selectSort();
	private:
		int findMaxIndex(int);
};

int ArrayStringContainer::findMaxIndex(int startingFromIndex){
	int maxIndex = startingFromIndex;
	for (int i = startingFromIndex + 1; i< 10; i++){
		maxIndex = (array[i] >array [maxIndex]) ? i : maxIndex;
	};
};

void ArrayStringContainer::selectSort(){
	for (int i = 0; i< 10; i++){
		cout<<i<<": "<<findMaxIndex(i)<<endl;
		int maxI = findMaxIndex(i);
		swap(array[i], array[maxI]);
	}
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	
	ArrayStringContainer sorting;
	for (int i = 0; i< 10; i++){
		cin>> sorting.array[i];
	}
	sorting.selectSort();
	
	for (int i = 0; i< 10; i++){
	cout<<sorting.array[i]<<" ";
	}
}
