#include<iostream>
#include<string>
using namespace std;

class Node{
   public:
     string songs;
     Node *next;
     Node *prev;
};

Node *head = NULL;

class Song_Playlist{
    public:
      int no_of_songs;

    public:
      void Add_Song(string song_name){
        Node *curr;
        Node *newSong = new Node;
        newSong->songs = song_name;
        newSong->next = NULL;
        newSong->prev = NULL;

        if(head==NULL){
            head = newSong;
        }
        else{
            curr = head;
            while(curr->next!=NULL){
                curr = curr->next;
            }
            curr->next = newSong;
            newSong->prev = curr;
        }
      }

      void Delete_Song(string song_delete){
          Node *curr = head;
          int posn_of_song=1;
          while(curr!=NULL){
            if(song_delete == curr->songs){
                break;
            }
            curr = curr->next;
            posn_of_song++;
          }

          if(head!=NULL){
           if(posn_of_song == 1){
            curr = head;
            head = head->next;
            delete curr;
           }
           
           else if(posn_of_song == no_of_songs){
            curr = head;
            while(curr->next->next!= NULL){
                curr = curr->next;
            }
            curr->next->prev = NULL;
            curr->next = NULL;
           }

           else{
            curr = head;
            for(int i=1; i<posn_of_song-1; i++){
                curr = curr->next;
            }
            curr->next = curr->next->next;
            curr->next->prev = curr;
           }
            cout << "\n>>> Deletion Completed";
        }
        else{
            cout << "\nOops!Your playlist is already empty";
        }
      }

      void display_Playlist(){
        Node *curr = head;
        int i=1;
        if(curr==NULL){
            cout << "\n>>> Your current playlist is empty\n";
            return;
        }
        cout << "Your current Playlist is: " << endl;
        while(curr!=NULL){
            cout << "  " << i << ":" << curr->songs << endl;
            curr = curr->next;
            i++;
        }
      }

      void new_Song_Add(string new_Song_name){
           Node *newSong = new Node;
           newSong->songs = new_Song_name;
           newSong->next = NULL;
           newSong->prev = NULL;

           Node *curr = head;
           while(curr->next!=NULL){
               curr = curr->next;
           }
           curr->next = newSong;
           newSong->prev = curr;
      }

};

int main(){
    Song_Playlist list;
    string song_name;
    string song_delete;
    string new_Song_name;
    int choice;

    while(1){
        cout << "\nEnter----\n1. To add songs to your playlists: \n2. To display your playlist: \n3. To delete songs that you don't like: \n4. To add new song: \n5. To exit: \n";
        cin >> choice;

             switch(choice){
                case 1: 
                       cout << "\nEnter number of songs you want to add initially: ";
                       cin >> list.no_of_songs;
                       cin.ignore();
                       if(list.no_of_songs!=0){
                       cout << "\nEnter the songs: " << endl;
                       for(int i=0; i<list.no_of_songs; i++){
                            getline(cin,song_name);
                            list.Add_Song(song_name);
                       }
                       cout << "\nSongs added to your playlist" << endl;
                    }
                       break;

                case 2: 
                       list.display_Playlist();
                       break;

                case 3: 
                       cout << "\nEnter the song that you want to remove from your playlist: ";
                       cin.ignore();
                       getline(cin,song_delete);
                       list.Delete_Song(song_delete);
                       break;

                case 4:
                       cout << "\nEnter the new song that you want to add: ";
                       cin.ignore();
                       getline(cin,new_Song_name);
                       list.new_Song_Add(new_Song_name);
                       cout << "\nNew Song Added Successfully";
                       break;

                case 5:
                       return 0;
                       break;

                default: cout << "\nWrong input given! Please check and try again!";
             }
    }
}