// Indicate which, if any, of the following output statements are legal:
#include <iostream>

int main() {
	std::cout << "/*";			// legal
	std::cout << "*/";			// legal
	std::cout << /* "*/" */;		// not legal
	std::cout << /* "*/" */;		// not legal
	std::cout << /* "*/" /* "/*" */;	// legal
}
