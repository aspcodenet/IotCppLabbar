// SKapa en klass. Player Ska ha namn och Jerserynumber och Age. Man ska kunna ändra Jerseynumber. 
//SKapa en klass Team. Ska ha namn och en lista med players
//I main, skapa upp ett team och lägg två spelare i laget
// Skriv ut alla spelare i laget. Namn och Age

#include <iostream>
#include <vector>
using namespace std;

typedef enum
{
	Goalie,
	Defence,
	Forward
}POSITION;

class Player
{
private:
	int jerseynumber;
	string namn;
	int age;
	POSITION position;
public:
	void SetJerseyNumber(int n)
	{
		this->jerseynumber = n;
	}
	Player(string namn, int jerseyNumber, int age, POSITION pos)
	{
		this->position = pos;
		this->namn = namn;
		this->jerseynumber = jerseyNumber;
		this->age = age;
	}
	int GetAge()
	{
		return age;
	}

	string GetNamn()
	{
		return namn;
	}
};


class Team
{
private:
	string namn;
	vector<Player> players;
public:

	int NumberOfPlayers()
	{
		return players.size();
	}

	Player GetPlayerByIndex(int index)
	{
		return players[index];
	}
	void AddPlayer(Player p)
	{
		if (players.size() > 5)
			throw exception("Too manby players");
		players.push_back(p);
	}
	Team(string namn)
	{
		this->namn = namn;
	}
};



int main()
{
	Team t("1234123312");

	Player p("ss",12,12, Defence);
	t.AddPlayer(p);

	Player p2("aaaaa", 13, 42, Goalie );
	t.AddPlayer(p2);

	for(int i = 0; i < t.NumberOfPlayers();i++)
	{
		Player printPlayer = t.GetPlayerByIndex(i);
		cout << printPlayer.GetNamn() << " " << printPlayer.GetAge() << endl;
	}
	//for (Player printPlayer : t.players)
	
	return 0;
}