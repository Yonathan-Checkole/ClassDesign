#include "Image.h"

int main() {
    Image image{"pic", "GIF", 12, 28, 2003, 82.1, "Yonathan Checkole", 100, 100, "f/20", "1/1000", 900, false};

    printImageMetadata(image);

    image.setFileName("anotherimage");
    image.setImageType("JPEG");
    image.setDay(2);
    image.setMonth(6);
    image.setYear(820);
    image.setSize(14912);
    image.setAuthorName("John Doe");
    image.setWidth(2);
    image.setHeight(348);
    image.setApertureSize("f/9000");
    image.setExposureTime("1/7900");
    image.setIsoValue(2300);
    image.setFlashEnable(false);

    printImageMetadata(image);

    image.setFileName("");
    image.setImageType("");
    image.setDay(49);
    image.setMonth(13);
    image.setYear(-820);
    image.setSize(-1);
    image.setAuthorName("");
    image.setWidth(-2);
    image.setHeight(-2);
    image.setApertureSize("f/-900");
    image.setExposureTime("1/-2000");
    image.setIsoValue(-10);
    image.setFlashEnable(23);

    printImageMetadata(image);
}
