#include<iostream>
int getValue(){

int x{};
std::cin>>x;
return x;

}

int main(){
    std::cout<<getValue()+(getValue()*getValue());
    return 0;
}
