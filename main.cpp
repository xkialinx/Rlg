#include <iostream>

double get_number(std::string message) {
    double n;
    while (true) {
        std::cout << message;
        std::cin >> n;

        if (std::cin.fail()) { // Если ввели буквы
            std::cin.clear(); 
            std::cin.ignore(10000, '\n');
            std::cout << "Ошибка! Введите число цифрами.\n";
        } else {
            return n;
            
        }
    }
}



int main() {

setlocale(LC_ALL, "ru_RU.UTF-8");

   std::string name;
   int age;
   double weight;
   double height;
   double bmi;
   double bmi_below;
   double bmi_over;
   char choice;


   choice = 'y';
while ( choice == 'y')
{

   bmi_below = 18.5;
   bmi_over = 25;

   std::cout << "Добро пожаловать! Введите имя: ";
   std::cin >> name;
  std::cout << std::endl;
    age = get_number("Введите возраст: ");
    std::cout << std::endl;
    weight = get_number("Введите вес: ");
    std::cout << std::endl;
    height = get_number("Введите рост: ");
    std::cout << std::endl;
  

   if (height > 3) {
        height = height / 100;
    } 

    bmi = weight / (height * height);

    if ( bmi < 18.5 ) {
        std::cout << name << ", у вас дефицит массы! ниже нормы на " << bmi_below - bmi<< std::endl;
    }
    else if (bmi < 25) {
        std::cout << name << ", масса в норме";
        }

    else { 
        std::cout << name << ", у вас избыточный вес! выше нормы на " << bmi - bmi_over<< std::endl;
    }

    
    std::cout << "Произвести расчет еще раз? y/n: "<< std::endl;
    std::cin >> choice;
  
}

std::cout << "Расчеты завершены, до встречи!";
 return 0;
}