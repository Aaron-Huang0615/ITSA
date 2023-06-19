#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

int main() {
    int arr[1000];
    char buffer[1024];

    while (fgets(buffer, 1024, stdin) != NULL) {
        int size = 0, sum = 0;
        for (char *ptr = buffer; *ptr != '\0';) {
            int offset;
            if (sscanf(ptr, "%d%n", &arr[size], &offset) != 1)
                break;
            sum += arr[size++];
            ptr += offset;
        }
        cout << "Size: " << size << endl;
        cout << "Average: " << fixed << setprecision(3) << static_cast<double>(sum) / size << endl;
    }

    return 0;
}
