#include <bits/stdc++.h>

const double PI = 4*atan(1); // Making a constant PI variable
int x, y; // Integer x represents amount of degrees and y number of decimals
char a; // Simple char for 'Yes' and 'No'

int main() {
    std::cout << "Unesite vrednost ugla za konvertovanje u radijane: "; std::cin >> x; // "Input the value of angle: "
    double radijan = x * PI/180; // initializing radian
    std::cout << "Ugao koji ste uneli u radijanima: " << radijan << std::endl; // "Number you entered: "
    std::cout << "---------------------------------" << std::endl; 
    std::cout << "Da li zelite da zaokruglim ovaj broj na X broj decimala? "; std::cin >> a; // "Do you want me to round this number?"

    if (a == 'Y' || a == 'y') { // Simple input
        std::cout << "Vas odgovor je 'DA'. Molimo Vas da unesete broj (1-5): "; std::cin >> y; // "Your answer is 'YES'. Please enter a number (1-5): "

        switch (y) { // All those cout's say "I am rounding the number to y decimals", and then they print the rounded number 
        case 1:
            std::cout << "Uneli ste broj " << y << ". Zaokrugljujem broj na " << y << " decimalu.\nVas broj zaokrugljen na " << y << "-u decimalu: " << std::fixed << std::showpoint << std::setprecision(y) << radijan << std::endl;
            break;
        case 2:
            std::cout << "Uneli ste broj " << y << ". Zaokrugljujem broj na " << y << " decimalu.\nVas broj zaokrugljen na " << y << "-u decimalu: " << std::fixed << std::showpoint << std::setprecision(y) << radijan << std::endl;
            break;
        case 3:
            std::cout << "Uneli ste broj " << y << ". Zaokrugljujem broj na " << y << " decimalu.\nVas broj zaokrugljen na " << y << "-u decimalu: " << std::fixed << std::showpoint << std::setprecision(y) << radijan << std::endl;
            break;
        case 4:
            std::cout << "Uneli ste broj " << y << ". Zaokrugljujem broj na " << y << " decimalu.\nVas broj zaokrugljen na " << y << "-u decimalu: " << std::fixed << std::showpoint << std::setprecision(y) << radijan << std::endl; 
            break;
        case 5:
            std::cout << "Uneli ste broj " << y << ". Zaokrugljujem broj na " << y << " decimalu.\nVas broj zaokrugljen na " << y << "-u decimalu: " << std::fixed << std::showpoint << std::setprecision(y) << radijan << std::endl;
            break;
    }   
    } else if (a == 'N' || a == 'n') {
        std::cout << "Vas odgovor je 'NE'. Vas broj bez zaokrugljivanja iznosi: " << radijan << std::endl; // "Your answer is 'NO'. Your number of radians without rounding: "
    }
    return 0;
}
