// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

// Pointers are not only used to store address but also to change the data at stored address


#include <iostream>
#include <string>

/*
int main(){
    int a = 37;
    int *ptr;       //int here specifies the datatype of var to which ptr is pointing (i.e datatype of a in this case. * is in-direction operator. refers to the data of memory address to which ptr is pointing)

    ptr = &a;       //assigning address of a to the ptr. when read ptr, it will give address of a

    std::cout << "Data of a is: " << a << std::endl;
    std::cout <<  "Address of a is: " << &a << std::endl;
    // & is address-of operator, returns addr of mentioned variable
    std::cout << "Data of ptr is(i.e addrs stored at ptr is): " << ptr << std::endl;
    // ptr itself is a var stored at another mem location and it stores addr of a
    std::cout << "Address of ptr is: " << &ptr << std::endl;
    std::cout << "Data of a, accessed thru ptr is: " << *ptr << std::endl;

    // pointer to a pointer
    int x = 6;
    int *p;         //pointer declaration
    p = &x;

    int **q;        //need to declare q as **(pointer to a ptr)
    q = &p;

    int ***r = &q;      //r is ptr to q, whch is a ptr to p, which is ptr to x

    std::cout << "value at x: " << *p << std::endl;
    std::cout << "value at p: " << *q << std::endl;
    std::cout << "value at x, accessed via q: " << **q << std::endl;
    std::cout << "value at x, accessed via r: " << ***r << std::endl;

    ***r = 12;
    std::cout << "value at x, changed via r: " << x << std::endl;

    **q = *p + 2;
    std::cout << "value at x, changed via q: " << **q << std::endl;

    // Pointers and Arrays
    int A[] = {1,2,3,4,5};
    int *ptr01;
    ptr01 = &A[0];

    std::cout << "Addr of array- by showing the array name only" << A << std::endl;
    
    std::cout << "Address of the array- using pointer(shows 1st index address): " << ptr01 << std::endl;

    std::cout << "1st element in array via ptr" << *ptr01 << std::endl;
    std::cout << A[0] << std::endl;

    std::cout << "checking addr of next index element" << ptr01+1 << std::endl;
    //Use of ptr to increment and check the next address. For int, addr pf next index should be +4.

    std::cout << "checking value at next index element" << *(ptr01+1) << std::endl;       //This is the use of ptr with array, where value of next indices can be accessed by incrementing


    std::cout << std::endl << std::endl;
    return (0);
}
*/

/*
// Using ptr to pass arguments to a fn as reference

void addition (int *ptr10) {    //Rxing value from the addr of a
    *ptr10 += 10;               //locally playing with value frm addr of a.
}       //In this case, by passing arg as value, we can't use an inline fn to give result as the scope of a in fn and a in main are totally different. So, here in inline fns, we can pass arg as reference using ptr

int main () {
    int a = 10;
    int *ptr9;
    ptr9 = &a;

    addition(ptr9);    //declare a ptr to a and pass it to fn (arg as ref). passing the addr of a.
    
    std::cout << "Result is: " << *ptr9 << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
*/


// passing array as Fn argument
// Here as well the ptr is useful. By-default, compiler considers the array passed as arg as a ptr with its index 0 address(called by reference). So, even if the whole array is passed to a Fn, its not the actual case

// To read the code, commented lines represent 1st case where size of Array is calculated in main and passed to Fn addition to represent normal case. Current code is 2nd case, where size calculation logic is shifted to Fn addition and since sizeof() needs whole array, it is shown how only ptr to array is passed to Fn and not total array as sizeof gives size of only first index of the array. 2nd case is the non-working case, just to prove the point


int addition(int A[]){
    int i;
    int sum=0;

    std::cout << *A;
    int size_Arr = sizeof(A)/sizeof(A[0]);
    std::cout << "size of Array calculated from the Fn: " << size_Arr << std::endl;

    for(i=0;i<size_Arr; i++) {
        sum = sum + A[i];
    }
    return sum;
}

int main(){
    int Arr[] = {1,2,3,4,5};
 // int size_Arr = sizeof(Arr)/sizeof(Arr[0]);     //sizeof() returns size in bytes. Here, since array has 5 Int, size is 5x4 = 20 bytes. To get no. of ele in array, divide this size by size of 1 element.

 //   int res = addition (Arr, size_Arr);
    int res = addition (Arr);

    std::cout << "Addition of all elements in Array is: " << res ;

    std::cout << std::endl << std::endl;
    return 0;
}