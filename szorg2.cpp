#include <iostream>
#include <thread>
#include <cmath>

void task1() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 1 running in thread " << std::this_thread::get_id() << std::endl;
}

void task2() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 2 running in thread " << std::this_thread::get_id() << std::endl;
}
void task3() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 3 running in thread " << std::this_thread::get_id() << std::endl;
}
void task4() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 4 running in thread " << std::this_thread::get_id() << std::endl;
}
void task5() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 5 running in thread " << std::this_thread::get_id() << std::endl;
}
void task6() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 6 running in thread " << std::this_thread::get_id() << std::endl;
}
void task7() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 1 running in thread " << std::this_thread::get_id() << std::endl;
}

void task8() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 2 running in thread " << std::this_thread::get_id() << std::endl;
}
void task9() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 3 running in thread " << std::this_thread::get_id() << std::endl;
}
void task10() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 4 running in thread " << std::this_thread::get_id() << std::endl;
}
void task11() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 5 running in thread " << std::this_thread::get_id() << std::endl;
}
void task12() {
    int num = 2147483647;
    int wo = pow(num, num);
    std::cout <<wo<< "This is task 6 running in thread " << std::this_thread::get_id() << std::endl;
}

int main() {
    while (1)
    {
        std::thread thread1(task1);
        std::thread thread2(task2);
        std::thread thread3(task3);
        std::thread thread4(task4);
        std::thread thread5(task5);
        std::thread thread6(task6);
        std::thread thread7(task7);
        std::thread thread8(task2);
        std::thread thread9(task8);
        std::thread thread10(task9);
        std::thread thread11(task10);
        std::thread thread12(task11);

        thread1.join();
        thread2.join();
        thread3.join();
        thread4.join();
        thread5.join();
        thread6.join();
        thread7.join();
        thread8.join();
        thread9.join();
        thread10.join();
        thread11.join();
        thread12.join();

        std::cout << "All of the tasks have been completed." << std::endl;
    }
}
