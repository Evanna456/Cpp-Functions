#include <iostream>
#include <vector>

void program(std::vector <int>& numbers);
void printNumber(std::vector <int>& numbers);
void addNumber(std::vector <int>& umbers);
void meanNumber(std::vector <int>& numbers);
void smallestNumber(std::vector <int>& numbers);
void largestNumber(std::vector <int>& numbers);

int main()
{
	std::vector <int> numbers;
	program(numbers);
	return 0;
}

void program(std::vector <int>& numbers) {
	std::string choice;
	std::cout << "\n" << "What to do? " << "\n";
	std::cout << "P - Print Number" << "\n" << "A - Add Numbers" << "M - Display Mean of the number" << "\n" << "S - Display the smallest number" << "L - Display the largest number" << "\n" << "Q - Quit" << "\n";
	std::cin >> choice;

	if (choice == "P" || choice == "p") {
		printNumber(numbers);
	}
	else if (choice == "A" || choice == "a") {
		addNumber(numbers);
	}
	else if (choice == "M" || choice == "m") {
		meanNumber(numbers);
	}
	else if (choice == "S" || choice == "s") {
		smallestNumber(numbers);
	}
	else if (choice == "L" || choice == "l") {
		largestNumber(numbers);
	}
	else if (choice == "Q" || choice == "q") {
		std::cout << "Press any key to exit the console...";
		std::cin.ignore();
		std::cin.get();
	}
	else {
		std::cout << "\n";
		program(numbers);
	}
}

void printNumber(std::vector <int>& numbers) {
	std::cout << "\n";
	for (auto number : numbers) {
		std::cout << number << "\n";
	}
	program(numbers);
}

void addNumber(std::vector <int>& numbers) {
	int number;
	std::cout << "\n" << "What is the number? " << "\n";
	std::cin >> number;
	numbers.push_back(number);
	program(numbers);
}

void meanNumber(std::vector <int>& numbers) {
	std::cout << "\n";
	int numbers_length = numbers.size();
	int total = 0;
	int mean = 0;
	for (int it = 0; it < numbers_length; it++) {
		total = total + numbers[it];
	}
	mean = total / numbers_length;
	std::cout << mean << "\n";
	program(numbers);
}

void smallestNumber(std::vector <int>& numbers) {
	std::cout << "\n";
	int smallest = numbers.at(0);
	for (auto number : numbers) {
		if (number < smallest) {
			smallest = number;
		}
	}
	std::cout << smallest << "\n";
	program(numbers);
}

void largestNumber(std::vector <int>& numbers) {
	std::cout << "\n";
	int largest = 0;
	for (auto number : numbers) {
		if (number > largest) {
			largest = number;
		}
	}
	std::cout << largest << "\n";
	program(numbers);
}