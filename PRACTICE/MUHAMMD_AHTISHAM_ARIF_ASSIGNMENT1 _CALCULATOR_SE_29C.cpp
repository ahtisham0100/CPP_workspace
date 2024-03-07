#include<iostream>
#include<cmath>

int main()
{
    char choice;
    float pi = 3.1415;
    float angle, angle_radians, base, exponent, num;

    do {
      
        std::cout << "PLEASE ENTER THE FUNCTION YOU WANT TO PERFORM" << std::endl;
        std::cout << "1. sin    2. cosine    3. tan    4. square of number" << std::endl;
        std::cout << "5. raised to the power    6. natural log    7. common log    8.square root" << std::endl;
        std::cout << "Enter the corresponding number of function you want to perform (for example \"1\" for sin)." << std::endl;
           int function;
        std::cin >> function;

        switch (function) {
            case 1:
                std::cout << "You selected sine function. Enter the angle in degrees: ";
                std::cin >> angle;
                angle_radians = angle * pi / 180;
                std::cout << "The sine of " << angle << " degrees = " << sin(angle_radians) << std::endl;
                break;
                
            case 2:
   std::cout<<" You selected cosine  function. enter the angle " << std::endl;
    std::cin>>angle;
    angle_radians = angle * pi/180 ;
 
    std::cout<<"the cosine of " <<  angle <<  " = " << cos(angle_radians) << " degrees"  << std::endl; 
    break;

case 3:
   std::cout<<" You selected tangent function. enter the angle " << std::endl;
    std::cin>>angle;
    angle_radians = angle * pi/180 ;
   std::cout<< "the tan of " <<  angle  <<  " = " << tan(angle_radians) << "radians" << std::endl; 
    break;

case 4:
std::cout<<" YOU SELECTED TO CALCULATE THE SQUARE OF NUMBER. ENTER THE NUMBER " << std::endl;
std::cin>>base;
std::cout<<" THE SQUARE OF "<< base << " = " << base * base << std::endl;
break;

case 5:
std::cout<<"YOU OPTED TO CALCULTAE THE BASE RAISED TO CERTAIN EXPONENT  " << std::endl;
std::cout<<"ENTER THE BASE OF EXPONENT " << std::endl;
std::cin>>base;
std::cout<<"ENTER THE EXPONENT \( POWER TO WHICH BASE IS RAISED \) " << std::endl;
std::cin>>exponent;
// pow (base , exponent) is used to calculate base raised to the power exponent in c++
std::cout<< " THE ANSWER OF " << base << "RAISED TO POWER " << exponent << " = " << pow(base, exponent) << std::endl;
break;

    case 6: 
    std::cout << "You opted to calculate the natural logarithm of a number." << std::endl;
    std::cout << "Enter the number whose natural logarithm you want to calculate: ";
    std::cin >> num;
    std::cout << "The natural log of " << num << " = " << log(num) << std::endl;
    break;

            case 7:
                std::cout << "Please enter the number whose common logarithm you want to calculate: ";
                std::cin >> num;
                std::cout << "The common logarithm of " << num << " = " << log10(num) << std::endl;
                break;
case 8:
std::cout<<" YOU OPTED TO CALCULATE THE SQUARE ROOT. " << std::endl;
std::cin>>num;
std::cout<<"THE square root of " << num << " = " << sqrt(num)<< std::endl;
break;
            default:
                std::cout << "Invalid choice. Please enter a valid function number." << std::endl;
        }

        std::cout << "Do you want to perform further operations? (Y/N): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
