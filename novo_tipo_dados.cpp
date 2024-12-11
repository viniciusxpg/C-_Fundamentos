#include<iostream>
//cria um novo tipo de dado
 struct human{
    //pre define as caracteristicas do humano com uma função
 human() {
    name = "human";
    age = 0;
    heigth = 0.10f;
    weight = 0.f;
      }
 std::string name;
      int age;
      float heigth;
      float  weight;

 
 };
 
 int main() {
    human me;
     std::cout << me.name << "\n";
     std::cout << me.heigth << "\n";
       std::cout << me.age << "\n";
         std::cout << me.weight << "\n";

  
 }