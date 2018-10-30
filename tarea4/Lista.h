//
//  Lista.h
//  tarea4
//
//  Created by Pepe Hdez hdez on 8/27/18.
//  Copyright © 2018 Pepe Hdez hdez. All rights reserved.
//

#ifndef Lista_h
#define Lista_h
using namespace std;
class Lista{
public:
    Lista();
    Lista(Lista<T> &d);
    int getCant();
    T getDato(int i);
    bool add(T q);
    int search(T q);
    void sort(bool az);
    Lista<T>operator = (Lista d);
    bool operator == (Lista d);
    void print();
private:
    T arr[10];
    int quant;
};
template<class T>
Lista<T>::Lista(){
    this->quant=0;
}
template<class T>
Lista<T>::Lista(Lista &d){
    for (int i=0; i<d.quant; ++i){
        this->arr[i]=d.arr[i];
    }
    this->quant=d.quant;
}
template<class T>
T Lista<T>::getDato(int T){
    return this->arr[i];
}
template<class T>
bool Lista<T>::add(T q){
    if(quant<10){
        arr[quant]=q;
        quant++;
        return true;
    }
    else{
        return false;
    }
}
template<class T>
int Lista<T>::search(T q){
    for (int i=0; i<quant; ++i){
        if(this->arr[i]==q){
            return i;
        }
    }
    return -1;
}
template<class T>
void Lista<T>::sort(bool az){
    bool t=1;
    T c;
    if (az){
        for (int i=0; i,quant-1 && t; i++){
            t=0;
            for(int j=0; j<quant-1; j++){
                if(arr[j]>arr[j+1]){
                c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
                t=1;
                }
            }
        }
    }
    else{
        for(int i=0; i<quant-1 && t; i++){
            t=0;
            for (int j=0; j<quant; j++){
                if (arr[j]<arr[j+1]){
                    c=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=c;
                    t=1;
                }
            }
        }
    }
}
template<class T>
Lista<T> Lista<T>::operator=(Lista d){
    for (int i=0; i<d.quant; ++i){
        this->arr[i]=d.arr[i];
    }
    this->quant=d.quant;
}
template<class T>
bool Lista<T>::operator == (Lista d){
    if(this->quant==d.quant){
        for (int i=0; i<this->quant; ++i){
            if(this->arr[i]!=d.arr[i]){
                return false;
            }
        }
        return true;
    }
    else{
        return false;
    }
}
template<class T>
void Lista<T>::print(){
    for (int i=0; i<quant; ++i){
        cout << i << " - " << arr[i] << endl;
    }
}

#endif /* Lista_h */
