
#include <bits/stdc++.h>

 
#define MAX_PLAYERS 10010
#define MAX_TEAMS 1010
 
using namespace std;
 
struct players {
 
	string name;
	int hability;
	int team;
 
} players_info[MAX_PLAYERS];

bool compare (players first, players second) { return first.hability > second.hability; }

bool compare2 (players first, players second) { 

	if(first.team == second.team) return first.name < second.name;
	return first.team < second.team;
}
 
int main () {
 
	int number_players, number_teams, i, j;
	scanf("%d %d", &number_players, &number_teams);
 
	for(i=0; i < number_players; i++) {

		cin >> players_info[i].name;
		scanf("%d", &players_info[i].hability);
	}

	sort(players_info, players_info+number_players, compare);

	j = 1;	

	for(i=0; i < number_players; i++) {

		players_info[i].team = j;

		j++;
		if(j == number_teams+1) j = 1;
	}

	sort(players_info, players_info+number_players, compare2);

	j = 1;
	printf("Time %d\n", j);

	for(i=0; i < number_players; i++) {

		cout << players_info[i].name << "\n";

		if(players_info[i].team != players_info[i+1].team) {

			j++;
			if(j <= number_teams) printf("\nTime %d\n", j);
		}
	}

	printf("\n");
 
	return 0;
}