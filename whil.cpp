#include <iostream>

int main (){
    int num;
    int sum;

    std::cout<<"welcome to the your number , your time \n";
    std::cout<<" enter any  anumber number :";
    std::cin>>num;
    std::cout<<" and tnter how many time the  i want to repit :";
    std::cin>>sum;

    while (sum>0){
        std::cout<<num<<"\n";
        break;
       sum--;
    }



    return 0;   
}