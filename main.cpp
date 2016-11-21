
#include <stdio.h>
#include <random>
#include <iostream>
#include <unistd.h>
//#define ARRAY_LENGTH(array) (sizeof(array)/ sizeof(array[0]))

int main(int argc, char *argv[])
{
    std::random_device rnd;
    std::mt19937 mt(rnd());

    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string number = "0123456789";
    std::string symbol = "!\"#$%&'()*+,-./:;<=>?@[]^_`{|}~";
    std::string sumSTr = "";

    int i , opt;
    int passLength = 10;

    opterr = 0;

    while ((opt = getopt(argc, argv, "aA0_n:")) != -1){
        switch (opt){
            case 'a':
                sumSTr += alphabet;
                break;
            case 'A':
                sumSTr += ALPHABET;
                break;
            case '0':
                sumSTr += number;
                break;
            case '_':
                sumSTr += symbol;
                break;
            case 'n':
                int length;
                length = atoi(optarg);
                if(atoi(optarg) <= 0){
                    printf("Usage: %s [-a] [-A] [-0] [-n number]", argv[0]);
                    return 0;
                }
                passLength = length;
                break;
            default:
                printf("Usage: %s [-a] [-A] [-0] [-n number]", argv[0]);
                return 0;
                break;
        }
    }

    if(sumSTr.length() == 0){
        sumSTr = alphabet + ALPHABET + number + symbol;
    }

    std::uniform_int_distribution<> randRange(0, sumSTr.length() - 1);
    for (int i = 0; i < passLength ; i++) {
        std::cout << sumSTr[randRange(mt)];
    }

    return 0;
}