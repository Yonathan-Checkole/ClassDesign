#include <string>

class Image {
public:
    Image(std::string fileName, std::string imageType, int month, int day,
        int year, double size, std::string authorName, int width, int height, 
        std::string apertureSize, std::string exposureTime, int isoValue, bool flashEnabled);

    std::string getFileName();
    std::string getImageType();
    int getMonth();
    int getDay();
    int getYear();
    double getSize();
    std::string getAuthorName();
    int getWidth();
    int getHeight();
    std::string getApertureSize();
    std::string getExposureTime();
    int getIsoValue();
    bool isFlashEnabled();

    void setFileName(std::string fileName);
    void setImageType(std::string imageType);
    void setMonth(int month);
    void setDay(int day);
    void setYear(int year);
    void setSize(double size);
    void setAuthorName(std::string authorName);
    void setWidth(int width);
    void setHeight(int height);
    void setApertureSize(std::string apertureSize);
    void setExposureTime(std::string exposureTime);
    void setIsoValue(int isoValue);
    void setFlashEnable(bool flashEnabled);

private:
    std::string _fileName;
    std::string _imageType;
    int _month;
    int _day;
    int _year;
    double _size;
    std::string _authorName;
    int _width;
    int _height;
    std::string _apertureSize;
    std::string _exposureTime;
    int _isoValue;
    bool _flashEnabled;
};

void printImageMetadata(Image image);
