#include <iostream>

int add2(int a, int b){
	return a+b;
}

int main()
{
	int a;
	
	std::cout << "Hello World!" << std::endl;
	
	std::cout << 22 << " " << 123.45 << "\n";
	
	std::cout << "Enter a number:";
	std::cin >> a;
	
	std::cout << "You entered " << a << "\n";
	
	if(a > 10){
		std::cout << "A is > 10\n";
	}else{
			std::cout << "A is pretty small\n";
	}
	
	a = 0;
	while(a<10){
		std::cout << a << " ";
		a = a+1;
	}
	std::cout << "\n";
	
	for(int i=0; i < 10; i++){
		std::cout << "i=" << i << " ";
	}
	std::cout << "\n";
	
	int c = add2(5,3);
	
	std::cout << c << std::endl;
	
	return 0;
}