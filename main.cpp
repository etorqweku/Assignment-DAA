#include <iostream>

using namespace std;
int LnSearch(int A[],int k, int iN){
if (iN==0){
    return -1;
}
else if(k==A[iN-1]){
    return iN;
}
else{
    return LnSearch(A,k,iN-1);
}
}

int main()
{
    int Arr[20];
    int iNum,iKEY,i;
    int iPos =0;
    cout<<"Enter the size of the array"<<endl;
    cin>>iNum;
    cout<<"Enter elements"<<endl;
    for(i=0;i<=iNum;i++){
        cin>>Arr[i];
    }
    cout<< "Enter Key element"<<endl;
    cin>>iKEY;

     iPos=LnSearch(Arr,iKEY,iNum);
     cout<<iPos;
    return 0;
}
