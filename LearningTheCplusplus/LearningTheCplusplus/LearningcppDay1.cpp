#include <iostream>
#include <string> // have to include this to use string methods

// my first ever program!!!!!!!!!!!

int pointers() {
	// my most hated concept of computer science >:(
	/*
	In C++, a reference variable is an alias to an existing variable. It is declared by using an ampersand & between the reference type and the variable name:
	*/
	int score = 96;
	int& grade = score;
	grade = grade + 1;

	/*
	The score variable is an alias to the exam_grade variable. When the value of score is changed, the value of exam_grade will also change in the same way.

	The primary application for references in C++ is in function parameters. Because the reference parameter acts as an alias for the argument, a function that uses a reference parameter is able to modify the argument passed in.
	*/

	std::cout << score << "\n" << grade << "\n";

	// we can print hte address of values using the & operator, this is when its being used not in variable declaration
	std::cout << &score << "\n" << &grade << "\n";
	return 0;
}




int main() {
	int x = 1;
	std::cout << "Hello World!, today is day " << x << " of learning c++\n";

	// chracter input
	char string;
	int num;
	std::cout << "Enter some random string of characters\n";
	std::cin >> string >> num;
	std::cout << string << "\n";

	std::cout << "Enter some random number\n";
	std::cin >> num;
	std::cout << num << "\n";

	pointers();
}


/*
	Some generic multiline comment
		  ⢠⣿⣶⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣦⣄⣀⡀⣠⣾⡇⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀
⠀⠀⠀⠀⢀⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⢿⣿⣿⡇⠀⠀⠀⠀
⠀⣶⣿⣦⣜⣿⣿⣿⡟⠻⣿⣿⣿⣿⣿⣿⣿⡿⢿⡏⣴⣺⣦⣙⣿⣷⣄⠀⠀⠀
⠀⣯⡇⣻⣿⣿⣿⣿⣷⣾⣿⣬⣥⣭⣽⣿⣿⣧⣼⡇⣯⣇⣹⣿⣿⣿⣿⣧⠀⠀
⠀⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠸⣿⣿⣿⣿⣿⣿⣿⣷⠀
*/