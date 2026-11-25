#include <iostream>

int main (){


    std::string cartons[]={"BEN 10\n", "poverpop girls\n","ultmeat spaider-man\n"};

    std::string rank[3];

    rank[0]=" the G.O.A.T";
    rank[2]=" master peas";
    rank[1]=" not bad";

    int score[]={10 , 7, 10};

    std::cout<<sizeof(cartons)<< " the byts take by the  carton varibale\n";

    std::cout<<sizeof(rank)<< " this is the byts of  rank get  the byts....\n";

    std::cout<<sizeof(score)<< " this is the  byts the the score...\n";
     //foreach loop

     for(std::string carton : cartons){
        std::cout<< carton ;
     }
   return 0;
}