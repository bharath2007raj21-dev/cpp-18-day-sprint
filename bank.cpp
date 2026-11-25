#include <iostream>

void showbalens(double balens);
double deposit();
double vidra(double balens);

int main(){

    double balens=30.4;
    int choise;

    do{
    std::cout<<"#####################\n";
    std::cout<<"welcome to the  bank\n";
    std::cout<<"#####################\n";

    std::cout<<"1. cheack your bank balens \n";
    std::cout<<"2. deposit your amount\n";
    std::cout<<"3. widra the amount\n";
    std::cout<<"4. exite\n";
    std::cout<<"now you press the optino: ";
    std::cin>>choise;

    switch (choise)
    {
    case 1 :showbalens(balens);
         break;
    case 2 :balens+=deposit(); 
           showbalens(balens); 
         break;
    case 3 :balens-=vidra(balens);
            showbalens(balens);
         break; 
    case 4 :std::cout<<"thank for coming...";  
         break;        
    
    default: std::cout<<"you enter the press the wrong number , pres 1 to 4 \n";
        break;
    }

    }while (choise!=4);
    
    
    return 0;
}

void showbalens(double balens){
    std::cout<<"hay this is your balens:"<<balens<<'\n';

}
double deposit(){
     double amount=0;
    std::cout<<"enter the deposit amount : ";
    std::cin>>amount;
    if (amount>0){
       return amount;
    }
    else{
        std::cout <<"you enter a inviled amount" ;  
        return 0;
    }
    
}
double vidra(double balens){


    double amount=0;
    std::cout<<"enter the widrall amount :";
    std::cin>>amount;

    if(amount > balens){
        std::cout<<"insifesent amount";
    }
    else if (amount<0 )
    {
        std::cout<<"this is  not a valid amount ";
    }
    else
    {
        return amount ;
    }
    

    return 0;
}