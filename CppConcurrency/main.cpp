#include <iostream>
#include <thread>


void Hello()
{
	std::cout << "Hello world !" << std::endl;
}

int main()
{
	std::thread t(Hello);

	t.join();
}