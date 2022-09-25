/* Write a program to swap the values of a pair of integers using call by value,
call by address and reference variables as argument to the functions */
#include <iostream>
#define log(x) std::cout<<x

void swap_by_ref(int &p,int &q){
    int temp;
    temp = p;
    p = q;
    q = temp;
}

void swap_by_val(int p,int q){
    swap_by_ref(p, q);
}

void swap_by_add(int *p,int *q){
    swap_by_ref(*p, *q);
}

int main() {
    int a = 29, b = 34;
    log(a << " " << b<<" <-- initially a & b\n");
    swap_by_val(a, b); //doesn't swap
    log(a << " " << b<<" <-- call by value\n");
    swap_by_add(&a, &b);
    log(a << " " << b<<" <-- call by reference\n");
    swap_by_ref(a, b);
    log(a << " " << b<<" <-- call by address\n");
    return 0;
}