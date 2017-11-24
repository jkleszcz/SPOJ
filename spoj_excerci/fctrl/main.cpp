//
// Created by usuryjskij on 24.11.17.
//

#include <iostream>

int tens(int a){
    if(a<=3 || a>=10)
        return 0;
    switch(a){
        case 7:
            return 4;
        case 9:
            return 8;
        default:
            return 2;
    }
}

int unity(int a){
    if(a == 0 || a>=5)
        return 0;
    if(a == 1 || a == 2 || a == 4)
        return a;
    return 6;
}

int main(){
    int D;
    std::cin >> D;
    if(D<1 && D>30)
        return 0;
    int numbers[D];
    for(int i=0 ; i<D ; ++i)
        std::cin >> numbers[i];
    for(int i=0 ; i<D ; ++i)
        std::cout << tens(numbers[i]) << " " << unity(numbers[i]) << std::endl;
    return 0;
}