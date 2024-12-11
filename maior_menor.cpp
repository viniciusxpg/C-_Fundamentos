#include <iostream>

int main(){
    while (true){
    int x = 34;
    std::cout << "digite um numero";
//espera o usuario digitar o valor e atribui o valor a x 
std::cin >> x;
if (x == 34){
    //break para a repetção do laço while
    break;
   
}
    if (x > 0){
       
        std::cout << "x eh positivo \n";
    }
    //da uma condição antes do else
    else if (x < 0) {
        std::cout << "x eh negativo";
    }
    else {
        std::cout << "x eh zero ";
    }
    }
}