#include<iostream>
int main(){
	setlocale(0,"rus");
	int cell;
	std::cin>>cell;
	if(cell > 0) std::cout<<"Прыгаем"<<std::endl;
	else if (cell < 0) std::cout<<"Тупик :(,перезагружаемся"<<std::endl;
	else std::cout<<"Двигаемся дальше"<<std::endl; 
	return 0;
}
