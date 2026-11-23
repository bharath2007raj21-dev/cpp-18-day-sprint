#include <iostream>

int main (){

    // std::string number = "B";
    // number=="B"? std ::cout <<"you pass": std ::cout << "you feail";





    int temp = -20 ;
    std::cout <<"enter the  temperature: \n";

    bool sunny = false;
    

    // temp>0 && temp<30 ? std::cout<<"the temparater is good": std::cout<<"the temparature is bad";
    // !sunny?std::cout<<"it is cloudy ":std::cout<<"it is sunny ";


    if(temp>0 && temp<30){
        std::cout<<"the temparature is good\n";
    }
    else if(temp<0 || temp>30){
        std::cout<<"the temparature is bad\n";
    }
    else{
        std::cout<<"the temparature is bad\n";
    }

    if( sunny == false){
        std::cout<<"it is cloudy outside\n";
    }
    else{
        std::cout<<"it is sunny outside\n";
    }

    return 0;
}