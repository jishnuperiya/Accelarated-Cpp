#include <string>
#include<iostream>

int main(){

// read name 

std::string name;
std::cout << "enter your name:" << std::endl;
std::cin >> name;

// build the greeting
const std::string greeting = "Hello, "+name+ "!";
// build the second and fourth line
const std::string spaces(greeting.size(), '\0');
const std::string second = "* "+spaces+" *";
// build the first and fourth line of the output
const std::string first (second.size(), '*');
// write it all
std::cout << std::endl;
std::cout << first << std::endl;
std::cout << second<<std::endl;
std::cout << "* "+greeting+" *" << std::endl;
std::cout << second << std::endl;
std::cout << first << std::endl;

}