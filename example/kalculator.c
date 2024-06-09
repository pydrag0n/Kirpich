// includePath kirpich.c
#include <kirpich.c>

integer main() {
    chisloSPlavayusheyTochkoy num1, num2, result;
    simvol operator;

    vivediStr("Vvedite pervoe chislo: ");
    scanf("%f", &num1);

    vivediStr("Vvedite operatsiyu (+, -, *, /): ");
    scanf(" %c", &operator);

    vivediStr("Vvedite vtoroe chislo: ");
    scanf("%f", &num2);

    yesli (operator == '+') {
        result = num1 + num2;
    } inache yesli (operator == '-') {
        result = num1 - num2;
    } inache yesli (operator == '*') {
        result = num1 * num2;
    } inache yesli (operator == '/') {
        yesli (num2 != 0) {
            result = num1 / num2;
        } inache {
            vivediStr("Delit na 0 nelzya");
            verni -1;
        }
    } inache {
        vivediStr("Nepravilnaya operatsiya");
        verni -1;
    }

    vivediStr("Rezultat: ");
    vivediFloat(result);
    endLn();

    verni 0;
}