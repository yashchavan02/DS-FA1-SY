#include<iostream>
#include<cmath>
using namespace std;

struct Song {
	int Id;
	string Title, Artist;
	float Duration;
	Song* next;
};

class playList {
private:
public:
	Song * head;
	playList() {
		head = nullptr;
	}

	void AddAtBeginSong(void);
   bool ispresent(Song*,string);
};

void playList :: AddAtBeginSong() {
	Song* newSong = new Song;
	cout<<"Enter /> Title | Artist | Duration : ";
	cin>>newSong->Title>>newSong->Artist>>newSong->Duration;
	newSong->Id = rand() % 1000;
	newSong->next = nullptr;
	if(head == nullptr) {
		head = newSong;
		return;
	}
	else {
		newSong->next = head;
		head = newSong;
	}
}

bool playList :: ispresent(Song* ptr,string SongNam){
    if(ptr == nullptr) return false;
    if(ptr->Title == SongNam) return true;
    return ispresent(ptr->next,SongNam);
}


int main(){
   playList p;
   p.AddAtBeginSong();
   p.AddAtBeginSong();
   p.AddAtBeginSong();
   cout<<p.ispresent(p.head,"yash");
   return 0;
}
