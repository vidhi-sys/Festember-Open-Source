#include <iostream>
using namespace std;
    const int MAX = 10;
    int list[MAX];
    int lp;

int is_Full(){
        if(lp==MAX){
            return 1;

        }
        else{
            return 0;
        }
    }


    void insert_end(int element){
        if(!is_Full()){
        list[lp++] = element;
        cout<<"insertion done"<<endl;
    }
    else{
        cout<<"List is full, cannot insert "<<element<<endl;
    }
    }

    
    void traverse(){
        for(int i = 0; i<lp; i++)
        {
            cout<<list[i]<<"\t";
        }
    }
    int main(){
    lp = 0;
    insert_end(1);
    traverse();
    insert_end(2);
    traverse();
    insert_end(3);
    traverse();
    insert_end(4);
    traverse();
    insert_end(5);
    traverse();
    insert_end(6);
    traverse();
    insert_end(7);
    traverse();
    insert_end(8);
    traverse();
    insert_end(9);
    traverse();
    insert_end(10);
    traverse();
    insert_end(11);
    traverse();
    return 0;

    }