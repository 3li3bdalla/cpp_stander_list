#include <stdio.h>
#include "List.hpp"


int main()
{
        
    List<char> list = *new List<char>;
    
    List<double> double_list = *new List<double>;
    
    list.add('u');
    list.add('o');
 
    
    
    double_list.add(23.34);
    double_list.add(433.43);
    printf("double_list list size %d \n" , double_list.size());
    
    
    for (int i=0; i<double_list.size(); i++) {
        printf("%.2f \n ",double_list.get(i));
    }
    
//
//    printf("remote value with index 2 \n");
//    list.remove(0);
//
//
//    for (int i=0; i<list.size(); i++) {
//        printf("%c \n ",list.get(i));
//    }
//
//
    return  0;
}






