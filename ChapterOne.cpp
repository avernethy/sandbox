#include <iostream>

int main()
{
    std::cout<<"Hello World!\n";
    std::cout << "Enter two numbers:" << std::endl;

    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    std::cout << "The sum of " << v1 << " and " << v2 << " is: " << v1 + v2 << std::endl;

    std::cout << "The product of " << v1 << " and " <<  v2 << " is: " << v1 * v2 << std::endl;

    //See if this is legal
    /*
    std::cout << "The sume of " << v1;
    << "and " v2;
    << " is " << v1 + v2 << std::endl;
    */
    // not legal due the semi-colons

    //testing out comments
    std::cout << "/*"; //legal
    std::cout << "*/"; //legal
    std::cout << /* "*/" */"; //legal
    std::cout << /* "*/" /* "/* */<<std::endl; //legal

    //excersize 1.9
    int val = 50, sum = 0;
    while(val <= 100){
        sum+=val++;
        //val++;
    }
    std::cout << "The sum of values from 50 to 100 is: " << sum << std::endl;

    //excersize 1.10
    int count = 10;
    while(count > -1){
        std::cout << count-- << std::endl;
        //count--;
    }

    //exercise 1.11
    while (v2 >= v1){
        std::cout << v2-- <<std::endl;
    }

    //excercise 1.12
    int sum12 = 0;
    for (int i = -100; i <= 100; ++i){
        sum12 +=i;
        std::cout << "i: " << i << std::endl;
        std::cout << "Sum: " << sum12 << std::endl;
    }

    //exercise 1.13
        

    return 0;
}