//
// Created by AKASH KHANRA on 2019-01-23.
//

#include<iostream>
using namespace std;

struct prq{
    int id,priority;
}heap[11];

int N;

int parent(int k)
{

    return k/2;
}


void shiftup(int k){
    while(k>1 && heap[parent(k)].priority < heap[k].priority)

    swap(heap[parent(k)],heap[k]);

};

int getmax()
{
    return heap[1].id;
}

void shiftdown(int k)
{
    while(2*k<=N)
    {
        int j=2*k;
        if(j<N && heap[1].priority<heap[j+1]

    swap(heap[k])

    }


}
void ins(prq num)
{
    heap[++N]=num;
    shiftup(N);
}

int extractmax()
{
    int ID=heap[1].id;
    swab(heap[1],heap[N--1]);
    shiftdown(1);
    return ID;

}
void display()
{
    for(int i=1;-<=n;i++)
    cout<<"ID: "<<heap[i].id<<"priority: "<<heap[i].priority<<endl;
}



int main() {

    prq, temp;
    for (int i = 0; i < 4; i++){
        cin >> temp.id >> temp.priority;
    cout << extractmax() << endl;
}

    return 0;
}