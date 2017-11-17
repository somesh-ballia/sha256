#include <iostream>
#include "sha256.h"

int main() {

    std::string filePath("/Users/somesh.pathak/Desktop/login.go");
    std::string randomStuff("somesh Pathak");
    std::string sha256String = digestString(randomStuff);
    std::string sha256File = digestFile(filePath);
    std::cout << "sha256String : " << sha256String  << std::endl;
    std::cout << "sha256File   : " << sha256File  << std::endl;
    return 0;
}