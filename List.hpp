//
//  List.hpp
//  todo
//
//  Created by laravel on 25/02/1441 AH.
//  Copyright © 1441 learning. All rights reserved.
//



#ifndef List_hpp
#define List_hpp


template <class T>
class List {
    
    int length = 0;
    T *list = new T [100000];
public:
    void    add(T item);
    int     size();
    void    remove(int index);
    T       get(int index);
    T**     items();
};


template<class T>
void List<T>::add(T item)
{
    list[length] = item;
    length++;
}

template<class T>
void List<T>::remove(int index)
{
    
    T *templist = new T[100000];
 
    int counter = 0;
    for (int i=0; i<length; i++) {
        if(i!=index)
        {
            templist[counter] = get(i);
            counter++;
        }
    }
    
    list = templist;
    
    length--;
}


template<class T>
T** List<T>::items()
{
    return *list;
}


template<class T>
T List<T>::get(int index)
{
    return list[index];
}



template<class T>
int List<T>::size(){
    return length;
}




#endif /* List_hpp */
