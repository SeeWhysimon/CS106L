#include "Lecture_10.h"

int main() {
	// Ex. 1
	// std::string str = "Tsdafafsdaf";
	// std::cout << count_occurrences(str.begin(), str.end(), 'f') << std::endl;

	// Ex. 2
	std::string str = "Xadia";
	std::cout << count_occurrences(str.begin(), str.end(), isVowel) << std::endl;
	// result : 3

	// Ex. 3, using Lambda to count occurences
	int limit = 5;
	auto isMoreThan = [limit](int n) { return n > limit; };
	std::vector<int> nums = { 3, 5, 6, 7, 9, 13 };

	std::cout << count_occurrences(nums.begin(), nums.end(), isMoreThan) << std::endl;
	// result : 4

	// Ex. 4, using the functor
	Adder<double> addDouble(5.9);
	auto result = addDouble(4.12);
	std::cout << result << std::endl;
	// result : 10.02

	// Ex. 5, using std::function
	StandardFunction<int> = addInt;
	std::cout << StandardFunction<int>(2, 3) << std::endl;
	// result : 5
	StandardFunction<int> = [](int a, int b) { return a + b; };
	std::cout << StandardFunction<int>(2, 3) << std::endl;
	// result : 5

	// Virtual functions
	Animal* animal = new Animal;
	Dog* dog = new Dog;
	AnimalFunc(animal);
	// result : Animal.speak()
	AnimalFunc(dog);
	// result : Dog.speak()

	result = std::count_if(nums.begin(), nums.end(), isMoreThan);
	std::cout << result << std::endl;
	// result : 4

	return 0;
}
