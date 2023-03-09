#include <stdio.h>
#include <stdlib.h>

//register

void main(){

    register int i;
    char name[100];
    printf("enter a string:");
    gets(name);
    printf("the reverse of the string is:");

    for(i=strlen(name)-1;i>=0;i--)
        printf("%c",name[i]);

}
//static

void main(){
    int i;
    for(i=1;i<5;i++) //i=2 i=3
        start();  //son degerini korur.. 6  7  8

}
//extern
void start()
{
    static int p = 5;
    p=p+1;
    printf("p=%d\n",p);

}
*/
//prototip
int g;
void func1();
void func2();
void func3();


main(){
    int i;
    printf("enter value of g:");
    scanf("%d",&g);
    func1();
    func2();
    func3();
}
void func1(){
    printf("\n in func1 %d\n",g+1);
}

extern int g;

void func2(){
    printf("in MFILE2 and func2 %d\n",g+2);
}
void func3()
{
    printf(" in MFILE2 and func3 %d\n",g+3);

}







