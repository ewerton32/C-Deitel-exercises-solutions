//Fig 2.5: fig02_05.cpp
//Programa de adi��o que exibe a soma de dois numeros

#include <iostream> //permite ao programa realizar entrada e saida

//a fun��o main inicia a execu��o do programa

int main(){

    // declara��o de vari�veis

    int number1;
    int number2;
    int sum;

    std::cout << "Enter first integer:\n"; //solicita dados do usu�rio;
    std::cin >> number1; //l� primeiro inteiro fornecido pelo usu�rio em number1;

    std::cout << "Enter second Integer\n"; // solicita dados do usu�rio;
    std::cin >> number2; //l� o segundo inteiro fornecido pelo usu�rio em number2;

    sum << number1 + number2; // adiciona os numeros; armazena os resultados em sum

    std::cout << "Sum is: " << sum << std::endl; //exib sum, termina a linha

    return 0; //indica que o programa terminou com sucesso;



}//fim da fun��o main

