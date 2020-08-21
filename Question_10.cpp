#include <iostream>
using namespace std;

struct node
{
    int counter;
    node* next;
};

int main() {
    
    int size;
    int i, j, temp;  //for bubble sort
    int max;

    cout << "Enter size: " << endl;
    cin >> size;

    int* arr;
    arr = new int[size];

    cout << "Enter array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    for (i = 1; i < size; i++)               //Bubble sort
    {
        for (j = 0; j < (size - i); j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }

    cout <<endl<< "Array after bubble sort:"<<endl;
    for (i = 0; i < size; i++) cout << " " << arr[i];

    node* n;
    node* t;
    node* h;

    n = new node;
    n->counter = 0;

    t = n;
    h = n;  // t & h are pointing the same node that n points at the beginning

    i = 0;
    while (i < (size-1)) {
       
        if ((arr[i] + 1) != arr[i + 1]) {
            i++;
        }

        else{

            n = new node;
            n->counter = 2;    //first adjacent numbers
            t->next = n;       
            i++;
            while ((arr[i] + 1) == arr[i + 1]) {
                n->counter++;
                i++;
            }
            t = t->next;
            i++;
        }
    }

    n->next = NULL;

    max = h->counter;

    node* tmp;
    tmp = h;

    while (tmp != NULL)
    {
        if (max < tmp->counter) max = tmp->counter;
        tmp = tmp->next;
    }

    cout << endl << "Number of longest consecutive is: " << max;

    return 0;
}