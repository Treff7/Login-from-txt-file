#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string username, password;
    std::string fileName = "login.txt";

    std::cout << "Enter new username: ";
    std::cin >> username;
    std::cout << "Enter new password: ";
    std::cin >> password;

    std::ofstream loginFile(fileName.c_str(), std::ios::app);
    if (!loginFile.is_open()) {
        std::cout << "Unable to open login file" << std::endl;
        return 1;
    }
    loginFile << username << " " << password << std::endl;
    std::cout << "Credentials saved to " << fileName << std::endl;
    loginFile.close();
    return 0;
}
