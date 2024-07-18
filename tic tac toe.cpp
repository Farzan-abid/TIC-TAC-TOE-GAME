#include<iostream>
using namespace std;
class board{
	public :
	char frame[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
		
};
board drawboard(board b1){
	cout<<"|"<<b1.frame[0][0]<<"||"<<b1.frame[0][1]<<"||"<<b1.frame[0][2]<<"|"<<endl;
	cout<<"|"<<b1.frame[1][0]<<"||"<<b1.frame[1][1]<<"||"<<b1.frame[1][2]<<"|"<<endl;
	cout<<"|"<<b1.frame[2][0]<<"||"<<b1.frame[2][1]<<"||"<<b1.frame[2][2]<<"|"<<endl;
	return b1;
	
}
void play(){
	board b1;
		int r,c;
		for(int i=0;i<5;i++){
			
	
		do{
		
		cout<<" player x choose your mark[r][c]:";
		cin>>r>>c;
		if(b1.frame[r][c]!=' '){
			cout<<" ERROR FILL IN THE RIGHT BOX"<<endl;
		}
		}while(b1.frame[r][c]!=' ');
		b1.frame[r][c]='X';
			b1=drawboard(b1);
			if(b1.frame[0][0] =='X'&&b1.frame[0][1]=='X'&&b1.frame[0][2]=='X'||b1.frame[1][0] =='X'&&b1.frame[1][1]=='X'&&b1.frame[1][2]=='X'||b1.frame[2][0] =='X'&&b1.frame[2][1]=='X'&&b1.frame[2][2]=='X'||b1.frame[0][0] =='X'&&b1.frame[1][0]=='X'&&b1.frame[2][0]=='X'||b1.frame[0][1] =='X'&&b1.frame[1][1]=='X'&&b1.frame[2][1]=='X'||b1.frame[0][2] =='X'&&b1.frame[1][2]=='X'&&b1.frame[2][2]=='X'||b1.frame[0][0] =='X'&&b1.frame[1][1]=='X'&&b1.frame[2][2]=='X'||b1.frame[0][2] =='X'&&b1.frame[1][1]=='X'&&b1.frame[2][0]=='X'){
			cout<<" WINNER is player X"<<endl;
			return;
			}
			if(b1.frame[0][0] =='O'&&b1.frame[0][1]=='O'&&b1.frame[0][2]=='O'||b1.frame[1][0] =='O'&&b1.frame[1][1]=='O'&&b1.frame[1][2]=='O'||b1.frame[2][0] =='O'&&b1.frame[2][1]=='O'&&b1.frame[2][2]=='O'||b1.frame[0][0] =='O'&&b1.frame[1][0]=='O'&&b1.frame[2][0]=='O'||b1.frame[0][1] =='O'&&b1.frame[1][1]=='O'&&b1.frame[2][1]=='O'||b1.frame[0][2] =='O'&&b1.frame[1][2]=='O'&&b1.frame[2][2]=='O'||b1.frame[0][0] =='O'&&b1.frame[1][1]=='O'&&b1.frame[2][2]=='O'||b1.frame[0][2] =='O'&&b1.frame[1][1]=='O'&&b1.frame[2][0]=='O'){
			
				cout<<" WINNER is player O"<<endl;
			return ;}
		if(b1.frame[0][0]!=' '&&b1.frame[0][1]!=' '&&b1.frame[0][2]!=' '&&b1.frame[1][0]!=' '&&b1.frame[1][1]!=' '&&b1.frame[1][2]!=' '&&b1.frame[2][0]!=' '&&b1.frame[2][1]!=' '&&b1.frame[2][2]!=' '){
			cout<<" MATCH has been withdraw "<<endl;
			return ;
		}
			
				
			do{
			
		cout<<" player O choose your mark[r][c]:";
			cin>>r>>c;
			if(b1.frame[r][c]!=' '){
				cout<<" ERROR FILL IN THE RIGHT BOX"<<endl;
			}
			}while(b1.frame[r][c]!=' ');
		b1.frame[r][c]='O';
			b1=drawboard(b1);	if(b1.frame[0][0] =='X'&&b1.frame[0][1]=='X'&&b1.frame[0][2]=='X'||b1.frame[1][0] =='X'&&b1.frame[1][1]=='X'&&b1.frame[1][2]=='X'||b1.frame[2][0] =='X'&&b1.frame[2][1]=='X'&&b1.frame[2][2]=='X'||b1.frame[0][0] =='X'&&b1.frame[1][0]=='X'&&b1.frame[2][0]=='X'||b1.frame[0][1] =='X'&&b1.frame[1][1]=='X'&&b1.frame[2][1]=='X'||b1.frame[0][2] =='X'&&b1.frame[1][2]=='X'&&b1.frame[2][2]=='X'||b1.frame[0][0] =='X'&&b1.frame[1][1]=='X'&&b1.frame[2][2]=='X'||b1.frame[0][2] =='X'&&b1.frame[1][1]=='X'&&b1.frame[2][0]=='X'){
			cout<<" WINNER is player X"<<endl;
			return ;
			}
			if(b1.frame[0][0] =='O'&&b1.frame[0][1]=='O'&&b1.frame[0][2]=='O'||b1.frame[1][0] =='O'&&b1.frame[1][1]=='O'&&b1.frame[1][2]=='O'||b1.frame[2][0] =='O'&&b1.frame[2][1]=='O'&&b1.frame[2][2]=='O'||b1.frame[0][0] =='O'&&b1.frame[1][0]=='O'&&b1.frame[2][0]=='O'||b1.frame[0][1] =='O'&&b1.frame[1][1]=='O'&&b1.frame[2][1]=='O'||b1.frame[0][2] =='O'&&b1.frame[1][2]=='O'&&b1.frame[2][2]=='O'||b1.frame[0][0] =='O'&&b1.frame[1][1]=='O'&&b1.frame[2][2]=='O'||b1.frame[0][2] =='O'&&b1.frame[1][1]=='O'&&b1.frame[2][0]=='O'){
			
				cout<<" WINNER is player O"<<endl;
			return ;}
		}
		

}
int main(){
	board b1; 
	int r,c;
	char option;
	do{

	b1=drawboard(b1);
play();
    cout<<" DO YOU WANT TO PLAY MORE(Y/N) :";
    cin>>option;
	}while(option!='Y'||option!='y');
	
	
	
	return 0;
}
