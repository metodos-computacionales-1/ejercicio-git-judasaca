#include <iostream>

int main(void)
{
    int n1;
    int n2;
    int n3;
    float pi=3.14159265359;
    std::cout<<"el primer numero"<<std::endl;
    std::cin>>n1;
    std::cout<<"el segundo numero"<<std::endl;
    std::cin>>n2;
    std::cout<<"el tercer numero"<<std::endl;
    std::cin>>n3;
    
    if(n1>n2 && n1>n3){
        if(n1*n1==((n2*n2)+(n3*n3))){
            std::cout<<"Los lados corresponden a un triangulo rectangulo"<<std::endl;
                      
        }
        else{
            std::cout<<"Los lados NO corresponden a un triangulo rectangulo"<<std::endl; 
        }
        
            
        }
        
    
    if(n2>n1 && n2>n3){
        if(n2*n2==((n3*n3)+(n1*n1))){
            std::cout<<"Los lados corresponden a un triangulo rectangulo"<<std::endl;
                      
        }
        else{
            std::cout<<"Los lados NO corresponden a un triangulo rectangulo"<<std::endl; 
        }
        
    }
    else{
        if(n3*n3==((n2*n2)+(n1*n1))){
            std::cout<<"Los lados corresponden a un triangulo rectangulo"<<std::endl;
                      
        }
        else{
            std::cout<<"Los lados NO corresponden a un triangulo rectangulo"<<std::endl; 
        }
        
        
        
    }
    return 0;
}
