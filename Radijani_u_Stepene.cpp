#include <bits/stdc++.h>

const double PI = 4*atan(1);
int x, y;
char a;

int main() {
    std::cout << "Unesite vrednost ugla za konvertovanje u radijane: "; std::cin >> x;
    double radijan = x * PI/180;
    std::cout << "Ugao koji ste uneli u radijanima: " << radijan << std::endl; 
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Da li zelite da zaokruglim ovaj broj na X broj decimala? "; std::cin >> a;

    if (a == 'Y' || a == 'y') {
        std::cout << "Vas odgovor je 'DA'. Molimo Vas da unesete broj (1-5): "; std::cin >> y;

        switch (y) {
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
        std::cout << "Vas odgovor je 'NE'. Vas broj bez zaokrugljivanja iznosi: " << radijan << std::endl;
    }

    

    return 0;
}