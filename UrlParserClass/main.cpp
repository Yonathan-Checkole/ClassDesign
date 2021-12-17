#include "UrlParserClass.h"
#include <iostream>

int main() {
    std::cout << "Please enter a URL: ";
    std::string input;
    std::cin >> input;

    UrlParserClass url{input};

    printURL(url);
}
