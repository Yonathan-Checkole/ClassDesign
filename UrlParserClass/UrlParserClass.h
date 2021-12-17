#include <string>

class UrlParserClass {
public:
    UrlParserClass(std::string url);

    std::string getUrl();
    std::string getScheme();
    std::string getAuthority();
    std::string getPath();
private:
    std::string _url;
};

void printURL(UrlParserClass url);