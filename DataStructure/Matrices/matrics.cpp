#include<iostream>
#include<vector>
using namespace std;

void simpleMatrix(){
    int a[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void newMatrix(){
    int **a=new int*[2];
    for(int i=0;i<2;i++){
        a[i] = new int[3];
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            a[i][j] = i+j;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    //delete
    for(int i=0;i<2;i++){
        delete[] a[i];
    }
    delete[] a;
}
void vectorMatrix(){
    vector<vector<int>> a = {{1,2,3},{4,5,6}};
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    simpleMatrix();
    cout<<endl;
    newMatrix();
    cout<<endl;
    vectorMatrix();
    return 0;
}