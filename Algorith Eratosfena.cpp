#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int sizeNum = 20; 
	vector<size_t> numbers;

	cout << "Enter number = ";
	cin >> sizeNum;
	cout<<endl;

	for (size_t  i = 0; i <sizeNum+1; i++) {
		numbers.push_back(i);
	}
	for (size_t num = 2; num < numbers.size(); num++) {
		
		if (numbers[num] != 0) {
			cout << numbers[num] << endl;
			for (size_t i = num * num; i < numbers.size(); i += num) numbers[i] = 0;
		}
	}
}