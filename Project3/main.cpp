#include<iostream>

using namespace std;

void agregar(int arr[], int n, int &len, int v);

int main(int argc, char const *argv[])
{
    int vec[6];
    int n = 6;
    int len = 0;

  agregar(vec,n,len,10); 
    agregar(vec,n,len,11);  
      agregar(vec,n,len,8);  
        agregar(vec,n,len,20);  

        cout << len << endl;

}

void agregar(int arr[], int n, int &len, int v){ 

    if(len == n){
        cout << "el vector esta lleno" << endl;
    }

    else {
        arr[len] = v;
       len++;        
    }

    return;

}




