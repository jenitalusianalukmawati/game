#include <iostream>
#include <ncurses/ncurses.h>
#include <unistd.h>
#include <windows.h>
#include <string.h>
#include <time.h>

using namespace std;

#define KEY_UP 0403
#define KEY_DOWN 0402
#define KEY_LEFT 0404
#define KEY_RIGHT 0405
#define KEY_BACKSPACE 0407

struct stats{
	char name[30];
	int atk;
	int hp;
};

struct stats champions[10];

void championsStats(){
	strcpy(champions[0].name,"Kindred"); (champions[0].atk=250); (champions[0].hp=480); 
	strcpy(champions[1].name,"Garen"); (champions[1].atk=410); (champions[1].hp=680); 
	strcpy(champions[2].name,"Nautilus"); (champions[2].atk=230); (champions[2].hp=1000); 
	strcpy(champions[3].name,"Le Blanc"); (champions[3].atk=200); (champions[3].hp=360); 
	strcpy(champions[4].name,"Teemo"); (champions[4].atk=100); (champions[4].hp=400); 
	strcpy(champions[5].name,"A-Sol"); (champions[5].atk=600); (champions[5].hp=1000); 
}

int main(){
	stats champ[2];
	char status;
	int rChamp;
	int rand1=0, rand2=0, rand3=0, rand4=0;
	int pChamp=0, cChamp=0;
	int pAtk, pHp;
	int cAtk, cHp;
	int pAtkTemp, cAtkTemp;
	int critM=1, healM=1;
	char p1champ[30], p2champ[30];
	
	championsStats();
	srand (time(0));
	
	for (int i=0; i<6; i++){
		cout<<"\n"<<i+1<<") "<<"Champion: "<<champions[i].name<<"\t"<<"ATK: "<<champions[i].atk<<"\t"<< "HP: "<<champions[i].hp;
	}
	
	cout << "\n\nTekan Enter Untuk Random Character Player 1\n";
	cin.get();
	
	while(rand1<60){
		cChamp=rand() % 600+1;
		rand1++;
	}
	cout << "Hash #" <<cChamp <<"\n";
	//roll chara 1
	if(cChamp>0 && cChamp<=150){
		strcpy(p1champ, champions[0].name);
		cAtk=champions[0].atk;
		cHp=champions[0].hp;
		cout << "Anda Dapat: " << champions[0].name << "\n" << "Dengan ATK: " << champions[0].atk << " Dan HP: " << champions[0].hp << "\n" << "\n";
	}else if(cChamp>150 && cChamp<=200){
		strcpy(p1champ, champions[1].name);
		cAtk=champions[1].atk;
		cHp=champions[1].hp;
		cout << "Anda Dapat: " << champions[1].name << "\n" << "Dengan ATK: " << champions[1].atk << " Dan HP: " << champions[1].hp << "\n" << "\n";
	}else if(cChamp>200 && cChamp<=295){
		strcpy(p1champ, champions[2].name);
		cAtk=champions[2].atk;
		cHp=champions[2].hp;
		cout << "Anda Dapat: " << champions[2].name << "\n" << "Dengan ATK: " << champions[2].atk << " Dan HP: " << champions[2].hp << "\n" << "\n";
	}else if(cChamp>295 && cChamp<=390){
		strcpy(p1champ, champions[3].name);
		cAtk=champions[3].atk;
		cHp=champions[3].hp;
		cout << "Anda Dapat: " << champions[3].name << "\n" << "Dengan ATK: " << champions[3].atk << " Dan HP: " << champions[3].hp << "\n" << "\n";
		champ[0] = champions[3];
	}else if(cChamp>390 && cChamp<=590){
		strcpy(p1champ, champions[4].name);
		cAtk=champions[4].atk;
		cHp=champions[4].hp;
		cout << "Anda Dapat: " << champions[4].name << "\n" << "Dengan ATK: " << champions[4].atk << " Dan HP: " << champions[4].hp << "\n" << "\n";
	}else if(cChamp>590 && cChamp<=600){
		strcpy(p1champ, champions[5].name);
		cAtk=champions[5].atk;
		cHp=champions[5].hp;
		cout << "Anda Dapat: " << champions[5].name << "\n" << "Dengan ATK: " << champions[5].atk << " Dan HP: " << champions[5].hp << "\n" << "\n";
	}
	
	cout << "Tekan Enter Untuk Random Character Player 2" << "\n";
	cin.get();
	while(rand2<100){
		rChamp=rand() % 600+1;
		rand2++;
	}
	cout << "Hash #" << rChamp <<"\n";
	//roll chara 2
	if(rChamp>0 && rChamp<=150){
		strcpy(p2champ, champions[0].name);
		pAtk=champions[0].atk;
		pHp=champions[0].hp;
		cout << "Anda Dapat: " << champions[0].name << "\n" << "Dengan ATK: " << champions[0].atk << " Dan HP: " << champions[0].hp << "\n" << "\n";
	}else if(rChamp>150 && rChamp<=200){
		strcpy(p2champ, champions[1].name);
		pAtk=champions[1].atk;
		pHp=champions[1].hp;
		cout << "Anda Dapat: " << champions[1].name << "\n" << "Dengan ATK: " << champions[1].atk << " Dan HP: " << champions[1].hp << "\n" << "\n";
		champ[1] = champions[1];
	}else if(rChamp>200 && rChamp<=295){
		strcpy(p2champ, champions[2].name);
		pAtk=champions[2].atk;
		pHp=champions[2].hp;
		cout << "Anda Dapat: " << champions[2].name << "\n" << "Dengan ATK: " << champions[2].atk << " Dan HP: " << champions[2].hp << "\n" << "\n";
		champ[1] = champions[2];
	}else if(rChamp>295 && rChamp<=390){
		strcpy(p2champ, champions[3].name);
		pAtk=champions[3].atk;
		pHp=champions[3].hp;
		cout << "Anda Dapat: " << champions[3].name << "\n" << "Dengan ATK: " << champions[3].atk << " Dan HP: " << champions[3].hp << "\n" << "\n";
		champ[1] = champions[3];
	}else if(rChamp>390 && rChamp<=590){
		strcpy(p2champ, champions[4].name);
		pAtk=champions[4].atk;
		pHp=champions[4].hp;
		cout << "Anda Dapat: " << champions[4].name << "\n" << "Dengan ATK: " << champions[4].atk << " Dan HP: " << champions[4].hp << "\n" << "\n";
		champ[1] = champions[4];
	}else if(rChamp>590 && rChamp<=600){
		strcpy(p2champ, champions[5].name);
		pAtk=champions[5].atk;
		pHp=champions[5].hp;
		cout << "Anda Dapat: " << champions[5].name << "\n" << "Dengan ATK: " << champions[5].atk << " Dan HP: " << champions[5].hp << "\n" << "\n";
		champ[1] = champions[5];
	}
	
	Sleep(2000);
	system("CLS");
	
	cout << "Match Dimulai Dalam 3 Detik\n\n";    

	Sleep(2000);
	system("CLS");
	Sleep(1000);
	
	initscr();
  noecho();
  curs_set(FALSE);
  keypad(stdscr, TRUE);

  WINDOW *field1 = newwin(20, 35, 0, 0);
  WINDOW *field2 = newwin(20, 35, 0, 36);

  box(field1, 0, 0);
  box(field2, 0, 0);

	mvwprintw(field1, 1, 14, "Player 1");
	mvwprintw(field1, 2, 14, p1champ);
    mvwprintw(field2, 1, 14, "Player 2");
    mvwprintw(field2, 2, 14, p2champ);

    // refresh each window
    wrefresh(stdscr);
    wrefresh(field1);
    wrefresh(field2);
    
    char key = getch();
	int value = key;

    while(value != KEY_BACKSPACE){
        switch(getch()){
        case KEY_UP:
        	mvwprintw(field1, 15, 9, "Player 1 Healing");
			wrefresh(field1);
			Sleep(2000);
			mvwprintw(field1, 15, 9, "                   ");
			wrefresh(field1);
			while(rand4<100){
				healM=rand() % 200+1;
				rand4++;
			}
			if(healM<100){
				healM=100;
			}
			cHp=cHp+healM;
			mvwprintw(field1, 5, 9, "%d HP Terheal", healM);
			wrefresh(field1);
			mvwprintw(field1, 10, 9, "%d HP", cHp);
			wrefresh(field1);
			Sleep(3000);
			for(int i=4; i<18; i++){
				mvwprintw(field1, i, 1, "                              ");
				mvwprintw(field2, i, 1, "                              ");
			}
			Sleep(3000);
			wrefresh(field1);
			wrefresh(field2);
			rand3=0;
            break;
        case KEY_DOWN:
			mvwprintw(field1, 15, 9, "Player 1 attacking");
			wrefresh(field1);
			Sleep(2000);
			mvwprintw(field1, 15, 9, "                   ");
			wrefresh(field1);
			while(rand3<100){
				critM=rand() % 150+1;
				rand3++;
			}
			if(critM<50){
				critM=50;
			}else if(critM>50){
				mvwprintw(field1, 15, 9, "Critical");
				wrefresh(field1);
			}
			cAtkTemp=cAtk*critM/50;
			mvwprintw(field1, 8, 9, "%d Crit", critM);
			mvwprintw(field1, 5, 9, "%d Damage", cAtkTemp);
			wrefresh(field1);
			pHp=pHp-cAtkTemp;
			mvwprintw(field2, 10, 9, "%d HP", pHp);
			wrefresh(field2);
			Sleep(3000);
			for(int i=4; i<18; i++){
				mvwprintw(field1, i, 1, "                              ");
				mvwprintw(field2, i, 1, "                              ");
			}
			Sleep(3000);
			wrefresh(field1);
			wrefresh(field2);
			rand3=0;
			if(pHp<=0){
				endwin();
				goto concl;
			}
            break;
        case KEY_LEFT:
			mvwprintw(field1, 15, 9, "Player 1 attacking");
			wrefresh(field1);
			Sleep(2000);
			mvwprintw(field1, 15, 9, "                   ");
			wrefresh(field1);
			while(rand3<100){
				critM=rand() % 80+1;
				rand3++;
			}
			if(critM<50){
				critM=50;
			}else if(critM>50){
				mvwprintw(field1, 15, 9, "Critical");
				wrefresh(field1);
			}
			cAtkTemp=cAtk*critM/50;
			mvwprintw(field1, 8, 9, "%d Crit", critM);
			mvwprintw(field1, 5, 9, "%d Damage", cAtkTemp);
			wrefresh(field1);
			pHp=pHp-cAtkTemp;
			mvwprintw(field2, 10, 9, "%d HP", pHp);
			wrefresh(field2);
			Sleep(3000);
			for(int i=4; i<18; i++){
				mvwprintw(field1, i, 1, "                              ");
				mvwprintw(field2, i, 1, "                              ");
			}
			Sleep(3000);
			wrefresh(field1);
			wrefresh(field2);
			rand3=0;
			if(pHp<=0){
				endwin();
				goto concl;
			}
            break;
        case KEY_RIGHT:
			mvwprintw(field1, 15, 9, "Player 1 attacking");
			wrefresh(field1);
			Sleep(2000);
			mvwprintw(field1, 15, 9, "                   ");
			wrefresh(field1);
			while(rand3<100){
				critM=rand() % 100+1;
				rand3++;
			}
			if(critM<50){
				critM=50;
			}else if(critM>50){
				mvwprintw(field1, 15, 9, "Critical");
				wrefresh(field1);
			}
			cAtkTemp=cAtk*critM/50;
			mvwprintw(field1, 8, 9, "%d Crit", critM);
			mvwprintw(field1, 5, 9, "%d Damage", cAtkTemp);
			wrefresh(field1);
			pHp=pHp-cAtkTemp;
			mvwprintw(field2, 10, 9, "%d HP", pHp);
			wrefresh(field2);
			Sleep(3000);
			for(int i=4; i<18; i++){
				mvwprintw(field1, i, 1, "                              ");
				mvwprintw(field2, i, 1, "                              ");
			}
			Sleep(3000);
			wrefresh(field1);
			wrefresh(field2);
			if(pHp<=0){
				endwin();
				goto concl;
			}
			rand3=0;
            break;
        case 'w':
        	mvwprintw(field2, 15, 9, "Player 2 Healing");
			wrefresh(field2);
			Sleep(2000);
			mvwprintw(field2, 15, 9, "                   ");
			wrefresh(field2);
			while(rand4<100){
				healM=rand() % 200+1;
				rand4++;
			}
			if(healM<100){
				healM=100;
			}
			pHp=pHp+healM;
			mvwprintw(field2, 5, 9, "%d HP Terheal", healM);
			wrefresh(field2);
			mvwprintw(field2, 10, 9, "%d HP", pHp);
			wrefresh(field2);
			pHp=pHp-cAtk;
			Sleep(3000);
			for(int i=4; i<18; i++){
				mvwprintw(field1, i, 1, "                              ");
				mvwprintw(field2, i, 1, "                              ");
			}
			Sleep(3000);
			wrefresh(field1);
			wrefresh(field2);
			rand4=0;
            break;
        case 's':
			mvwprintw(field2, 15, 9, "Player 2 attacking");
			wrefresh(field2);
			Sleep(2000);
			mvwprintw(field2, 15, 9, "                   ");
			wrefresh(field2);
			while(rand3<100){
				critM=rand() % 150+1;
				rand3++;
			}
			if(critM<50){
				critM=50;
			}else if(critM>50){
				mvwprintw(field2, 15, 9, "Critical");
				wrefresh(field2);
			}
			pAtkTemp=pAtk*critM/50;
			mvwprintw(field2, 8, 9, "%d Crit", critM);
			mvwprintw(field2, 5, 9, "%d Damage", pAtkTemp);
			wrefresh(field2);
			cHp=cHp-pAtkTemp;
			mvwprintw(field1, 10, 9, "%d HP", cHp);
			wrefresh(field1);
			Sleep(3000);
			for(int i=4; i<18; i++){
				mvwprintw(field1, i, 1, "                              ");
				mvwprintw(field2, i, 1, "                              ");
			}
			Sleep(3000);
			wrefresh(field1);
			wrefresh(field2);
			rand3=0;
			if(cHp<=0){
				endwin();
				goto concl;
			}
            break;
        case 'a':
			mvwprintw(field2, 15, 9, "Player 2 attacking");
			wrefresh(field2);
			Sleep(2000);
			mvwprintw(field2, 15, 9, "                   ");
			wrefresh(field2);
			while(rand3<100){
				critM=rand() % 80+1;
				rand3++;
			}
			if(critM<50){
				critM=50;
			}else if(critM>50){
				mvwprintw(field2, 15, 9, "Critical");
				wrefresh(field2);
			}
			pAtkTemp=pAtk*critM/50;
			mvwprintw(field2, 8, 9, "%d Crit", critM);
			mvwprintw(field2, 5, 9, "%d Damage", pAtkTemp);
			wrefresh(field2);
			cHp=cHp-pAtkTemp;
			mvwprintw(field1, 10, 9, "%d HP", cHp);
			wrefresh(field1);
			Sleep(3000);
			for(int i=4; i<18; i++){
				mvwprintw(field1, i, 1, "                              ");
				mvwprintw(field2, i, 1, "                              ");
			}
			Sleep(3000);
			wrefresh(field1);
			wrefresh(field2);
			rand3=0;
			if(cHp<=0){
				endwin();
				goto concl;
			}
            break;
        case 'd':
			mvwprintw(field2, 15, 9, "Player 2 attacking");
			wrefresh(field2);
			Sleep(2000);
			mvwprintw(field2, 15, 9, "                   ");
			wrefresh(field2);
			while(rand3<100){
				critM=rand() % 100+1;
				rand3++;
			}
			if(critM<50){
				critM=50;
			}else if(critM>50){
				mvwprintw(field2, 15, 9, "Critical");
				wrefresh(field2);
			}
			pAtkTemp=pAtk*critM/50;
			mvwprintw(field2, 8, 9, "%d Crit", critM);
			mvwprintw(field2, 5, 9, "%d Damage", pAtkTemp);
			wrefresh(field2);
			cHp=cHp-pAtkTemp;
			mvwprintw(field1, 10, 9, "%d HP", cHp);
			wrefresh(field1);
			Sleep(3000);
			for(int i=4; i<18; i++){
				mvwprintw(field1, i, 1, "                              ");
				mvwprintw(field2, i, 1, "                              ");
			}
			Sleep(3000);
			wrefresh(field1);
			wrefresh(field2);
            rand3=0;
			if(cHp<=0){
				endwin();
				goto concl;
			}
			break;
        }
        key = getch();
        value = key;
    }
    concl:
    if(cHp==-999 || pHp==-999 ){
			cout << "Match Terminated";
		}else if(cHp>0){
			cout << "Player 1 Wins";
			goto end;
		}else if(pHp>0){
			cout << "Player 2 Wins";
			goto end;
		}
	end:
	return 0;	
    key = getch();
  endwin();
  
	
}
