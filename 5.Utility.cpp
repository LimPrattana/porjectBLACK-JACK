#include<iostream>
#include<cmath>
using namespace std;
string num[]={"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
string sign[]={"spade","heart","dimond","club"};
int score[]={2,3,4,5,6,7,8,9,10,10,10,10,1};
int calculateScore(char card){
    int sizecard =3;
    int Sumscore=0;
    for(int i=0;i<13;i++){
        for(int j=0;j<sizecard;j++){
            if(card[j]==num[i]){
                Sumscore+= score[i];
            }
        }
        

    }
    return Sumscore;
}
void printcard(string player[],string dealer[],bool action){
    cout<<"-----------------------------\n";
    cout<<"DEALER CARDS\n";
    int ND=sizeof(dealer)/sizeof(dealer[0]);
    cout<<"dealer size"<<ND<<endl;
    if(action == true){
        for(int j=0;j<ND;j++){
            cout<<dealer[j]<<"  ";
        }
    }
    else cout<<dealer[0]<<"  ##";
    cout<<"\n-----------------------------\n";
    
    cout<<"PLAYER CARDS\n";
    int NP=sizeof(player)/sizeof(player[0]);
    for(int i=0;i<NP;i++){
    cout<<player[i]<<"  ";
    }
    cout<<"\n-----------------------------\n";


}
void printStats(){

}

int main(){
    char player[]={'8','9','5','7'};
    char dealer[]={'2','3'};
    bool action;
    cin>>action;
    return 0;
}