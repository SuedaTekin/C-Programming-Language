#include <stdio.h>
#include <stdlib.h>

//local variables...


void func1();
void func2();
void func3();



void main(){
        int i=5000;
        func2();
        printf("%d\n",i);

}

func1(){
    int i=50;
    func3();
    printf("%d\n",i);

}

func2(){
    int i=500;
    func1();
    printf("%d\n",i);
}

func3(){
    int i=5;
    printf("%d\n",i);
}
