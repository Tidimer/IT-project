#include<iostream>
using namespace std;
int main(){
	setlocale(0,"rus");
	int cell; //текущая клетка
	int i = 0;//количество ходов
	int Stop = 1;//остановка цикла
	int memory; //запоминающая переменная текущей клетки
	//int hp = 5;
	
	while(Stop != 0){
	std::cin>>cell;
	if (cell == memory) std::cout<<"та же высота"<<std::endl; //продвижение по уровню
	else if(cell > 0 && cell<=10) std::cout<<"Прыгаем"<<std::endl; //поднятие на уровень
	
	else if (cell < 0){
		 std::cout<<"спуск"<<std::endl;//падение на один уровень
		 //hp--;
	}
	else std::cout<<"не можем прыгать, высоко"<<std::endl;//слишком высокая стена
	//else std::cout<<"Двигаемся дальше"<<std::endl; 
	if(cell<=-10 || memory>=10 && cell<=0){
		std::cout<<"вы умерли"<<std::endl; //слишком глубокое падение
		break;
	}
	
	memory = cell;//запоминает местонахождения игрока
	
		if(i>10){ //если вы сделали больше 10 ходов и выжили,то вы выйграли
		Stop--;
		std::cout<<"You won"<<std::endl; //конец игры
	}
	i++;
	}

	return 0;
}

