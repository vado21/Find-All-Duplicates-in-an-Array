#include <iostream>
#include <vector>

using namespace std;


vector<int> findDuplicates(vector<int>& nums) {
    vector <int> duplicates;
    int iN = nums.size();
    vector <bool> check(iN+1,false);
    int iNum;
    for(int iX = 0; iX<iN; iX++){
        iNum = nums.at(iX);
        if (check.at(iNum) == true){
            duplicates.push_back(iNum);
        }
        else{
            check.at(iNum) = true;
        }
    }
    return duplicates;
}

int main()
{
    vector<int> num;
    cout<<"Tamanio"<<endl;
    int iN;
    cin>>iN;
    int iNum;
    cout<<"Inserta"<<endl;
    for(int iX = 0; iX<iN; iX++){
        cin>>iNum;
        num.push_back(iNum);
    }
    vector <int> ires;
    ires = findDuplicates(num);
    cout<<"RESULTADO"<<endl;
    for(int iX = 0; iX<ires.size(); iX++){
       cout<<ires.at(iX)<<endl;
    }
    return 0;
}
