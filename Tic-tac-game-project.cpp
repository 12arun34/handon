#include<iostream>
using namespace std;

void guidance_matrix(){
      cout<<"\n Positions for marking : "<<endl;
     int d=1;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<d<<" ";d++;
        }
        cout<<endl;
     }
}

void display_current_matrix(char** board){
   
    cout<<"\n  Current board as : \n";
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          cout<<board[i][j]<<" ";
        }
        cout<<endl;
      }
}

 int  check_winner(char** board){
      for(int i=0;i<3;i++){
        int flag=0;
        for(int j=0;j<3;j++){
            if(board[i][j]!=board[i][0]  || board[i][j]=='-'){flag=1;break;}
        }
        if(flag==0){
            return 1;
        }
      }
      for(int j=0;j<3;j++){
        int flag=0;
        for(int i=0;i<3;i++){
            if(board[i][j]!=board[0][j] || board[i][j]=='-'){flag=1;break;}
        }
        if(flag==0){
            return 1;
        }
      }
     int  flag=0;
      for(int i=0;i<3;i++){
        if(board[i][i]!=board[0][0] || board[i][i]=='-'){
            flag=1;break;
       }
      }
      if(flag==0){
        return 1;
      }
     flag=0;
        for(int i=0;i<3;i++){
        if(board[i][2-i]!=board[0][2] || board[i][i]=='-'){
            flag=1;break;
       }
      }
      if(flag==0){
        return 1;
      }
      else{
        return 0;
      }

      
 }

 int check_draw(char** board){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(board[i][j]=='-'){
                return 0;
            }
        }
    }
    return 1;
 }     

int main (){
    cout<<" \n ------WELCOME TO TIC-TAC-TOE GAME------"<<endl;
    for(int  i=0;i<100000000;i++){}
    
    cout<<"Enter name of first participant : ";
    string s1;cin>>s1;
    cout<<s1<<" got sign O"<<endl;

    cout<<"\nEnter name of second participant : ";
    string s2;cin>>s2;
    cout<<s2<<" got sign X \n"<<endl;
    for(int  i=0;i<1000000000;i++){}
    

    char ** board;
    board=new char*[3];
    for(int i=0;i<3;i++){
        board[i]=new char[3];
        board[i][0]={'-'};
        board[i][1]={'-'};
        board[i][2]={'-'};
      }
    cout<<"Tic-tac-toe board is empty now : "<<endl;
    
   
   
   
   while(1){
    display_current_matrix(board);
    cout<<endl;guidance_matrix();cout<<endl;
    label:
     cout<<s1<<" turn to enter positon to mark sign O : ";
    int p;cin>>p;
    while(p<1 || p>9 ){
      cout<<"You entered WRONG input....."<<endl;
      cout<<"Re-entered  position :";
      cin>>p;  
    }
    switch(p){
    case 1 : if(board[0][0]!='-'){goto label; }board[0][0]='O';break;
    case 2 : if(board[0][1]!='-'){goto label; }board[0][1]='O';break;
    case 3 : if(board[0][2]!='-'){goto label; }board[0][2]='O';break;
    case 4 : if(board[1][0]!='-'){goto label; }board[1][0]='O';break;
    case 5 : if(board[1][1]!='-'){goto label; }board[1][1]='O';break;
    case 6 : if(board[1][2]!='-'){goto label; }board[1][2]='O';break;
    case 7 : if(board[2][0]!='-'){goto label; }board[2][0]='O';break;
    case 8 : if(board[2][1]!='-'){goto label; }board[2][1]='O';break;
    case 9 : if(board[2][2]!='-'){goto label; }board[2][2]='O';break;
    
    }
    if(check_winner(board)){
        cout<<" \n CONGRATS--"<<s1<<" WON the match"<<endl;break;
    }
    if(check_draw(board)){
        cout<<" \n ------MATCH DRAW--------------"<<endl;break;
    }
    
          display_current_matrix(board);
        cout<<endl;guidance_matrix();cout<<endl;
        label1:
         cout<<s2<<" turn to enter positon to mark sign X : ";
        p;cin>>p;
    while(p<1 || p>9 ){
      cout<<"You entered WRONG input....."<<endl;
      cout<<"Re-entered  position :";
      cin>>p;  
    }
    switch(p){
    case 1 : if(board[0][0]!='-'){goto label1; }board[0][0]='X';break;
    case 2 : if(board[0][1]!='-'){goto label1; }board[0][1]='X';break;
    case 3 : if(board[0][2]!='-'){goto label1; }board[0][2]='X';break;
    case 4 : if(board[1][0]!='-'){goto label1; }board[1][0]='X';break;
    case 5 : if(board[1][1]!='-'){goto label1; }board[1][1]='X';break;
    case 6 : if(board[1][2]!='-'){goto label1; }board[1][2]='X';break;
    case 7 : if(board[2][0]!='-'){goto label1; }board[2][0]='X';break;
    case 8 : if(board[2][1]!='-'){goto label1; }board[2][1]='X';break;
    case 9 : if(board[2][2]!='-'){goto label1; }board[2][2]='X';break;
    
    }
    if(check_winner(board)){
        cout<<"\n CONGRATS--"<<s2<<" WON the match"<<endl;break;
    }
    if(check_draw(board)){
        cout<<" \n ------MATCH DRAW--------------"<<endl; break;
     }

    
   }
   return 0;
}
