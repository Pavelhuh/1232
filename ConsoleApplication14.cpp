#include <iostream>
#include <cstring123>
using namespace std;

int main() {
    setlocale(0, "");
    char fullName[100];  // масив для зберігання прізвища, імені та по батькові
    cout << "Введіть прізвище, ім'я та по батькові: ";
    cin.getline(fullName, 100);  // вводимо рядок

    // Визначаємо довжину рядка
    int length = strlen(fullName);
    cout << "Довжина рядка: " << length << endl;

    // Підрахуємо кількість букв 'a' у всьому рядку
    int totalCount = 0;
    for (int i = 0; i < length; ++i) {
        if (fullName[i] == 'a' || fullName[i] == 'A') {
            totalCount++;
        }
    }
    cout << "Кількість букв 'а' у рядку: " << totalCount << endl;

 
    int surnameCount = 0;
    int i = 0;
    while (fullName[i] != ' ' && fullName[i] != '\0') {  // шукаємо пробіл або кінець рядка
        if (fullName[i] == 'a' || fullName[i] == 'A') {
            surnameCount++;
        }
        i++;
    }

    cout << "Кількість букв 'а' у прізвищі: " << surnameCount << endl;

    return 0;
}
