#include <iostream>
#include<ctime>

// int main (){
//     int num;
//     int sum;

//     // std::cout<<"welcome to the your number , your time \n";
//     // std::cout<<" enter any  anumber number :";
//     // std::cin>>num;
//     // std::cout<<" and tnter how many time the  i want to repit :";
//     // std::cin>>sum;

//     // while (sum>0){
//     //     std::cout<<num<<"\n";
        
//     //    sum--;
//     // }

//     int age ;
//     std::string name;

//     // while(name.empty()){
//     //     std::cout<<"enter your age :";
//     //     std::getline(std::cin, name) ;

//     // }
//     // std::cout<<"wellcome "<<name  ;

// whil loop

//     int number;

//     do{
//         std::cout<<"enter the  positive number :  ";
//         std::cin>>number;
//     }while(number>0);

//     std::cout<<" your number is  "<< number;

//     return 0;   
// }
//  do whil loop


int main (){

    // for(int i=1 ; i <= 3 ;i++){
    //     std::cout<< i<<"..."<< "  \n";
    // }
    // std::cout<<"rocket is now lounching...🚀🚀🚀";

    

    std::cout<<"welcome to the spase  stanre \n";
    std::cout<<"this is the juany of the spase...hhhh...\n";

    std::string y;
    std::string l;

    do{
        std::cout<<"press Y  we start thr rocket : ";
        std::getline( std::cin, y) ;
    }while( y.empty());

    for(int i=1 ; i <= 3 ;i++){
        std::cout<< i<<"..."<< "  \n";
    }
    std::cout<<"rocket is now lounching...🚀🚀🚀\n";

    std::cout<<" now we  to near  a light spead \n";
    
    for (int i=0; i<=5; i++){
        std::cout<<"::::::::\n";
    }

    std::cout<<"now  we leanding in the moan";

    do{
        std::cout<<"now you press the L  we land in the moan ";
         std::getline( std::cin, l) ;

    }while(l.empty());

    std::cout<<"now we land in the moan...\n";
    for (int i=0; i<=5; i++){
        std::cout<<"::::::::\n";
    }
    std::cout<<"lock at thare  thar is a sumthing moving...";

    std::string M;
    std::cout<<"if you press M we do to  see what is that... or press N we go back to the rocket";
    std::cin>>M;
    M=="m"? std::cout<<" yes now we move  to see what is that...\n" : std::cout<<"ok then we back  to the rocker...\n";

    std::cout<<"you have a gutes to waht is thar... i feal so proud of you ";
    std::cout<<"now we go to the thar... \n";
    for (int i=0; i<=5; i++){
        std::cout<<"::::::::\n";
    }

    std::cout<<"look...look at the a  wh gat...\n...😲😲😲\n";
    std::cout<<"wight fo the part 2 😅😊";

    int b;
    std::cout<<"the huma are go to the moon.... and the find the sum ting... this is apen in the part 1 \n  now this is  the contintio of the part 2 , is you want to continu you say pres  2 to continu...";
    std::cin>>b;

    std::string G;

    std::cout<<"look at we want to go closly to  and we see waht that... ( if you want go closer pres g or o)";
    std::cin>>G;
    if(G == "g"){
        std::cout<<"then now we start the story \n";
        for (int i=0; i<=5; i++){
             std::cout<<"::::::::\n";
        }

    }

    else if (G=="n"){
        std::cout<<"take your time...man...";
        for (int i=0; i<=5; i++){
             std::cout<<"::::::::\n";
        }
    }

    std::cout<<"that is sum type of charecher...";
    std::cout<<"lock that is  coming this side...";
    std::cout<<"this is not a a one , a lot...";
    std::cout<<"thake the randam bage , we get any this that help us...";


    srand(time(0));

    int randam_num=(rand() % 5 )+ 1;
    switch (randam_num)
    {
    case 1 : std::cout<<"what  i geta a umbrala";
        break;
    case 2 : std::cout<<"what  i geta a  a shack gun ";
        break;
    case 3 : std::cout<<"what  i geta a water botle";
        break;
    case 4 : std::cout<<"what  i geta a electricke rad";
        break;
    case 5 : std::cout<<"what  i geta  the onmitrex";
        break;    

    default: std::cout<<"whit i get is ARK reactor...";

        break;
    }

    





    return 0 ;
}