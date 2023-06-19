#include <iostream>
#include <cstring>
#include <sstream>

struct element {
    int value;
    int count;
};

int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        int arr[20], size = 0;

        for (int i = 0; i < 20; i++) {
            if (!(ss >> arr[i])) {
                break;
            }
            size++;
        }

        struct element count[size];
        int c_size = 0;
        std::memset(count, 0, sizeof(count));

        for (int i = 0; i < size; i++) {
            int insert = arr[i];
            int j = 0;

            for (; j < c_size; j++) {
                if (arr[i] == count[j].value) {
                    count[j].count += 1;
                    break;
                }
            }

            if (j == c_size) {
                count[c_size].value = arr[i];
                count[c_size].count = 1;
                c_size++;
            }
        }

        int half = size / 2;
        bool flag = false;

        for (int i = 0; i < c_size; i++) {
            if (count[i].count > half) {
                std::cout << count[i].value << "\n";
                flag = true;
                break;
            }
        }

        if (!flag) {
            std::cout << "NO\n";
        }
    }

    return 0;
}