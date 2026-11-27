#include <iostream>

int spedo_meter (int array[], int size,int element );

int main(){

    int car_mealage []= {20,30,40,50,60,70,80,100};
    int size = sizeof(car_mealage)/sizeof(car_mealage[0]);
    int car;
    int myrang;

    std::cout<<"enter the mealage to yu searc :";
    std::cin>>myrang;

    car=spedo_meter(car_mealage ,size,myrang); 

    if (car!=-1){
        std::cout<<myrang << " thait ia the you get :"<<car;  
    }
    else
    {
        std::cout<<myrang<<" thait  not in your mailage...";
    }
    
    

    return 0;
}

int spedo_meter (int array[], int size,int element ){
    for (int i=0 ; i< size ;i++){
        if(array[i]==element){
            return i;
        }    
    }
    return -1;
}