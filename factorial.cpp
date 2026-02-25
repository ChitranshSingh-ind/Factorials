#include<iostream>
unsigned long factorial(unsigned long inp);

int main(){
    unsigned long inp, outp;
    std::cout<<"Enter a no. to calculate its factorial:: ";
    std::cin>>inp;
    outp = factorial(inp);
    std::cout<<"\n The factorial of "<<inp<<" is ="<<outp;


}
unsigned long factorial(unsigned long inp){
   unsigned long outp;
    if (inp == 0||inp == 1){
        return 1;
    }
    else{
        outp = inp*factorial(inp-1);
    }
    return outp;
}