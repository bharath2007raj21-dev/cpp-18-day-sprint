#include <iostream>

int main()
{

    double prs;
    double total;
    int item;
    int kg;
    double tax=1.18;
    std::string that;

    std::cout<<"wellcome to the SM smart store\n";
    std::cout<<"now you gat a bumper sale for a fuw items\n";
    std::cout<<"if you intersted in the sale , you  say yes or no :";
    std::cin>>that;
    that=="yes"? std::cout<<"you now chouse the item in the list \n": std::cout<<"thank you for your time \n";
    std::cout<<"1. 1kg of rice = 5rs\n";
    std::cout<<"2. 1kg of sugar = 6rs\n";
    std::cout<<"3. 1kg of salt = 4rs\n";
    std::cout<<"4. 1kg of wheat = 7rs\n";
    std::cout<<"5. 1kg of dal = 8rs\n";

    std::cout<<"you can buy any three items in the list  :";
    std::cin>>item;
    std::cout<<"you enter your 1st item in the list :";
    std::cin>>item;
    std::cout<<"you enter your 2nd item in the list :";
    std::cin>>item;
    std::cout<<"you enter your 3rd item in the list :";
    std::cin>>item;


    std::cout<<"enter the  1st item quantity in kg :";
    std::cin>>kg;
    std::cout<<"enter the  2nd item quantity in kg :";
    std::cin>>kg;   
    std::cout<<"enter the  3rd item quantity in kg :";
    std::cin>>kg;

   
    switch(item){
        case 1:
        prs= 5*kg+tax;
        std::cout<<"you have choosen "<<kg<<"kg of rice and the price is "<<prs<<"rs\n";
        break;
        case 2:
        prs=6*kg+tax;
        std::cout<<"you have choosen "<<kg<<"kg of sugar and the price is "<<prs<<"rs\n";
        break;
        case 3:
        prs=4*kg+tax;
        std::cout<<"you have choosen "<<kg<<"kg of salt and the price is "<<prs<<"rs\n";
        break;
        case 4:
        prs=7*kg+tax;
        std::cout<<"you have choosen "<<kg<<"kg of wheat and the price is "<<prs<<"rs\n";
        break;
        case 5:
        prs=8*kg+tax;
        std::cout<<"you have choosen "<<kg<<"kg of dal and the price is "<<prs<<"rs\n";
        break;

    }



    std::cout<<"thank you for your time and have a nice day \n";







    return 0;
}