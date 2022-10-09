//Fig 2.5: fig02_05.cpp
//Programa de adição que exibe a soma de dois numeros

#include <iostream> //permite ao programa realizar entrada e saida

//a função main inicia a execução do programa

int main(){

    // declaração de variáveis

    int number1;
    int number2;
    int sum;

    std::cout << "Enter first integer:\n"; //solicita dados do usuário;
    std::cin >> number1; //lê primeiro inteiro fornecido pelo usuário em number1;

    std::cout << "Enter second Integer\n"; // solicita dados do usuário;
    std::cin >> number2; //lê o segundo inteiro fornecido pelo usuário em number2;

    sum << number1 + number2; // adiciona os numeros; armazena os resultados em sum

    std::cout << "Sum is: " << sum << std::endl; //exib sum, termina a linha

    return 0; //indica que o programa terminou com sucesso;



}//fim da função main

