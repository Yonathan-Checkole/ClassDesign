#include "UrlParserClass.h"
#include <iostream>

UrlParserClass::UrlParserClass(std::string url) 
    : _url{ url } { }

std::string UrlParserClass::getUrl() { return _url; }

std::string UrlParserClass::getScheme() {
    int end = _url.find(':');
    return _url.substr(0, end + 1);
}

std::string UrlParserClass::getAuthority() {
    int start = _url.find('/');
    int end = _url.find('/', start + 2);
    return _url.substr(start, end - start);
}

std::string UrlParserClass::getPath() {
    int start = _url.find('/', _url.find('/') + 2);
    return _url.substr(start);
}

void printURL(UrlParserClass url) {
    std::string scheme = url.getScheme();
    std::cout << "scheme = " << scheme << "\n";

    std::string authority = url.getAuthority();
    std::cout << "authority = " << authority << "\n";

    std::string path = url.getPath();
    std::cout << "path = " << path << "\n";
}