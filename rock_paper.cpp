#include <iostream>
#include <ctime>


char userchoise();
char computerchoise();
void showchoise(char chois);
void chosewiner(char plyer, char compchois);

int main (){

    char plyer;
    char computer;

    plyer=userchoise();
    std::cout<<"your choise: ";
    showchoise(plyer);
    std::cout<<'\n';

    
    computer=computerchoise();
    std::cout<<"computer chois: ";
    showchoise(computer);
    std::cout<<'\n';

    chosewiner( plyer , computer);
    

    return 0;
}

char userchoise(){

    std::cout<<"hay this is rock ,paper, sward... game...\n";
    char plyer ;
    do
    {
        std::cout<<" you have a to chose the rock , paper , sward\n";
        std::cout<<"r-rock\n";
        std::cout<<"p-paper\n";
        std::cout<<"s-sward\n";
        std::cin>>plyer;
        /* code */
    } while (plyer!='r' && plyer!='p' && plyer!='s');


    return plyer;
}
char computerchoise(){
    int num=rand()%3+1;
    switch (num)
    {
    case 1: return 'r';
        break;
    case 2: return 'p';
        break;
    case 3: return 's';
        break;
    }

    return 0;
}
void showchoise(char chois){
    
    switch (chois)
    {
    case 'r':std::cout<<"rock";
        break;
    case 'p':std::cout<<"paper";
        break;
    case 's':std::cout<<"sward";
        break;
    
    default:std::cout<<"pres onmy any of this  (p,r,s)";
        break;
    }


}
void chosewiner(char plyer, char compchois){

    switch (plyer)
    {
    case 'r': if (compchois =='r'){
                  std::cout<<" the match is tie\n";
                 }
              else if (compchois == 'p')
               {
                std::cout<<"you loss the game \n";
               }
              else
              {
                std::cout<<" you win\n ";
              }
              break;
    case 'p': if (compchois =='p'){
                  std::cout<<" the match is tie\n";
                 }
              else if (compchois == 's')
               {
                std::cout<<"you loss the game \n";
               }
              else
              {
                std::cout<<" you win\n ";
              }
              break;
    case 's': if (compchois =='s'){
                  std::cout<<" the match is tie\n";
                 }
              else if (compchois == 'r')
               {
                std::cout<<"you loss the game \n";
               }
              else
              {
                std::cout<<" you win\n ";
              }
              break;             
                 



    }
}

