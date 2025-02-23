#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
string num[]={"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
string sign[]={"spade","heart","dimond","club"};
int score[]={2,3,4,5,6,7,8,9,10,10,10,10,1};
int calculateScore(vector<string> &card){
    //int sizecard=sizeof(card)/sizeof(card[0]);
    int sizecard = card.size();
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
void printcard(vector<string> &player, vector<string> &dealer, char action) {
    cout << "-----------------------------\n";
    cout << "DEALER CARDS\n";
    
    int ND = dealer.size();
    
    if(action == '1') {
        for(int j = 0; j < ND; j++) {
            cout << dealer[j] << "  ";
        }
    } else if(action == '0') {
        cout << dealer[0] << "  ##";
    }

    cout << "\n-----------------------------\n";

    cout << "PLAYER CARDS\n";
    int NP = player.size();
    for(int i = 0; i < NP; i++) {
        cout << player[i] << "  ";
    }
    
    cout << "\n-----------------------------\n";
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