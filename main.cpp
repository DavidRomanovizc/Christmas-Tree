#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-msc50-cpp"
#pragma ide diagnostic ignored "cert-msc51-cpp"

#include <iostream>
#include "rlutil-master/rlutil.h"
#include <random>
#include <chrono>


#pragma clang diagnostic push
#pragma ide diagnostic ignored "EndlessLoop"

int main() {
    srand(time(nullptr));
    while (true) {

        for (auto i = 0; i < 20; i++) {
            for (auto j = 0; j < 22 - i; j++)
                std::cout << " ";

            for (auto k = 0; k <= i * 2; k++) {
                int random = rand() % 40;
                if (random == k) {
                    setColor(rlutil::YELLOW);
                    std::cout << "O";
                } else if (random + k % 2 == 0) {
                    setColor(rlutil::RED);
                    std::cout << "@";
                } else {
                    setColor(rlutil::GREEN);
                    std::cout << "*";
                }

            }
            std::cout << std::endl;
        }


        setColor(rlutil::GREY);
        for (int t = 0; t < 3; t++) {
            for (int o = 0; o < 19; o++) {
                std::cout << " ";
            }
            setColor(rlutil::BROWN);
            std::cout << "#####" << std::endl;
        }
        Sleep(300);
        system("CLS");
    }
}

#pragma clang diagnostic pop
#pragma clang diagnostic pop