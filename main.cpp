#include <iostream>
using namespace std;
int location;
template <class T>
T search(const T a[], T first, T last, T key){
                                //cout<<"In search.\n";
    int mid;

    if(first > last){
                                //cout<<"In first > last.\n";
        return -1;
    }else{
                                //cout<<"In mid = (first+last)/2.\n";
        mid = (first + last)/2;
        if(key == a[mid]){
                                //cout<<"If key = mid.\n";
            location = mid;
            return 1;
        }else if(key < a[mid]){
            search(a, first, mid -1, key);
        }else if(key > a[mid]){
            search(a, mid+1, last, key);
        }
    }
}

int main(){
    int key, found;

    int  arr[] = {3,9,12,17,21,24,27,33,34,46,65,77,82,94,95};

    cout<<"Enter key from 1 - 100: \n";
    cin>>key;
    found = search(arr, 0, 14, key);
    if(found == 1){
        cout<<key<<" is in index location "<<location<<endl;
    }else if(found == -1){
        cout<<key<<" is not in the array.\n";
    }

    return 0;
};
