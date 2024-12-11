#include <iostream>
//cria uma função
void printTest(){
    std::cout << "treste\n";
    std::cout << "batata\n";
}
//cria uma função inteira
int soma(int x,int y) {
 return x+y;
}
int main (){
int x = 20;
int y = 50;

int z;
z = soma(x,y);

std::cout << z << "\n";

}