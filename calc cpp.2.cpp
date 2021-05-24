#include <iostream>
using namespace std;

int loop();

int main(){
    int op;
    float num1, num2;
    
    cout << "Ola, bem vindo a calculadora feita em C++!" << endl;
    
    cout << "Qual o primeiro numero?" << endl;
    cin >> num1;

    cout << "Qual operador voce ira usar? 1- Somar // 2- Subtrair // 3- Muriplicacao // 4- Divisao" << endl;
    cin >> op;

    switch(op){
        case 1: //Soma
            cout << "Qual o segundo numero?" << endl;
            cin >> num2;

            cout << "O resultado da soma e: " << num1 + num2 << endl;
            
            loop();
        break;

	    case 2: //Subtração
            cout << "Qual o segundo numero?" << endl;
            cin >> num2;

            cout << "O resultado da subtração e: " << num1 - num2 << endl;
            
            loop();
	    break;
	    
	    case 3: //Multiplicacao
            cout << "Qual o segundo numero?" << endl;
            cin >> num2;

            cout << "O resultado da Multiplicacao e: " << num1 * num2 << endl;
            
            loop();
	    break;
	    
	    case 4: //Divisao
            cout << "Qual o segundo numero?" << endl;
            cin >> num2;

            cout << "O resultado da Divisao e: " << num1 / num2 << endl;
            
            loop();
	    break;
    }
}

int loop(){
    int desejo;
    
    cout << "Voce deseja: 1- Parar por aqui // 2- Fazer outro calculo" << endl; //Reutilizar ou não
    cin >> desejo;
            
    switch(desejo){
        case 1:
		    cout << "Tudo bem, ate mais!";
        break;
                
        case 2:
            main();
        break;
       
	    default:
            cout << "Opção nao encontrada!";
        break;
    }
    return desejo;
}

