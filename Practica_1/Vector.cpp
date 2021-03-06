#include <vector>
#include "Vector.hpp"
#include <cstdlib>
#include <cassert>
#include <algorithm>

bool Vector::estaOrdenado(){
   for(unsigned int i=1;i<v_.size();i++){
       if(v_[i]<v_[i-1]) return false;
      } 
   return true;
}

  
void Vector::rellenarVector(){
   for(unsigned int i=0;i<v_.size();i++){ 
      v_[i]=rand()%10000;
    }
}


void Vector::seleccion(){
   for(unsigned int i=0;i<v_.size();i++){
     int aux=v_[i];
     int aux_pos=i;
     
     for(unsigned int j=i+1;j<v_.size();j++){
       if(v_[j]<aux){
         aux=v_[j];
         aux_pos=j;
       }
     }
     v_[aux_pos]=v_[i];
     v_[i]=aux;
   }  
   assert(estaOrdenado());
}


void Vector::heapsort(){
   std::sort_heap(v_.begin(),v_.end());
   assert(estaOrdenado());
}




 

