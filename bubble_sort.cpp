#include <iostream>
#include <vector>

void Swap(int *FirstInt, int *SecondInt) {
	
	int temp = *FirstInt;
	*FirstInt = *SecondInt;
	*SecondInt = temp;

}
std::vector<int> BubbleSort(void) {

	std::vector<int> MockVector = {1, 3, 5, 19, 7, 4, 10};

	for (int i = 0; i < MockVector.size() - 1; i++) {

		for (int j = 0; j < MockVector.size() - 1 - i; j++) {

		int CurrentElement = MockVector[j];
		int NextElement = MockVector[j + 1];


		if (CurrentElement > NextElement) Swap(&MockVector[j], &MockVector[j + 1]);

		}
	}
	return MockVector;

}
int main(void) {

	for (int i = 0; i < BubbleSort().size(); i++) {

		std::cout << BubbleSort()[i] << "\n";
	}

	
}
