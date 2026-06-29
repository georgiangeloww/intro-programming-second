#include <iostream>

int main(){
    bool polqti = false;
    int n;
    std::cin >> n;
    int* flowers = new int[n];
    
    for (int i = 0; i < n; i++) {
        std::cin >> flowers[i];
    }
    
    int index;
    std::cin >> index;

    while (index != -1 && !polqti) {
        if (flowers[index] > 0) {
            flowers[index]--;
        }
        else if (flowers[index] < 0) {
            flowers[index] = 0;
        }
        
        polqti = true;
        for (int i = 0; i < n; i++) {
            if (flowers[i] != 0) {
                polqti = false;
            }
        }

        std::cin >> index;
    }

    for (int i = 0; i < n; i++) {
        std::cout << flowers[i] << " ";
    }

    if (flowers != nullptr) {
        delete[] flowers;
    }
    flowers = nullptr;

    return 0; 
}