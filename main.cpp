
#include<iostream>
#include<thread>
using namespace std;

void workerfunction()
{
    cout << "hello from first thread" << "\n";
}

int main()
{
    thread mythread(workerfunction);
    mythread.join();
    return 0;
}
