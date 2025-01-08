#include <iostream>

void getUserLength();
void getUserHeight();
double doCalculations(double Length, double Height);

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

    double length;
    getUserLength();
    std::cin >> length;

    double height;
    getUserHeight();
    std::cin >> height;


    std::cout << doCalculations(length, height);



    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.