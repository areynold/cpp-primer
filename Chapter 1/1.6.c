// Explain whether the following program fragment is legal

std::cout << "The sum of " << v1;
	  << " and " << v2;
	  << " is " << v1 + v2 << std::endl;

// Not legal. 
// Because each statement is terminated (;), the operators in lines 2 and 3 
// do not refer to any objects. Fix by removing the ';' from lines 1 and 2
// or by beginning lines 2 and 3 with 'std::cout'
