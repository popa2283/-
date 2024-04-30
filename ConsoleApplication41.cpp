#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    std::string folderPath = "C:/Program Files (x86)";

    for (const auto& entry : fs::directory_iterator(folderPath)) {
        if (entry.is_directory()) {
            std::cout << entry.path().filename() << std::endl;
        }
    }

    return 0;
}
