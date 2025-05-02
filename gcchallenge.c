//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

//I made this program for the Gym of code challenge event 2025/05/02

#include <stdio.h>

double ctof(double c)
{
    double f;
    f = (c * 9.0 / 5.0) + 32;
    return f;
}

double ftoc(double f)
{
    double c;
    c = (f - 32) * 5.0 / 9.0;
    return c;
}

int main()
{
    int choose;
    double value, result;

    printf("Escolha a conversão:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("Digite a sua escolha (1 ou 2): ");
    scanf("%d", &choose);

    if (choose == 1) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &value);
        result = ctof(value);
        printf("%.2f°C é igual a %.2f°F\n", value, result);
    } else if (choose == 2) {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &value);
        result = ftoc(value);
        printf("%.2f°F é igual a %.2f°C\n", value, result);
    } else {
        printf("Opção inválida.\n");
    }
    return 0;
}
