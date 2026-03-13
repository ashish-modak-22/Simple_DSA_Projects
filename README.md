# Music Playlist Manager (C++)

## Overview
This is a console-based music playlist manager implemented using Doubly Linked List in C++.  
The program allows users to add, delete, and display songs in a playlist.  
It demonstrates how DSA concepts like linked lists can be applied to real-world scenarios like managing a playlist.

---

## Features
* Add multiple songs to the playlist initially
* Display all songs in the playlist
* Delete a song by its name
* Add new songs at any time
* Menu-driven user interface for easy interaction

---

## Data Structure Used
* Doubly Linked List
  * Each song is stored as a node containing:
    * `string songs` → song name
    * `Node* next` → pointer to the next song
    * `Node* prev` → pointer to the previous song
* Head pointer tracks the first song
* Efficient traversal in both directions

---

## How It Works
1. Add Songs: Users can enter multiple songs initially. Each song is added at the end of the playlist.
2. Display Playlist: Prints all songs in order, numbered sequentially.
3. Delete Song: Removes a song by its name. Handles:
   * First song
   * Last song
   * Any middle song
4. Add New Song: Adds a new song at the end of the playlist.
5. Exit: Closes the program.

---

## Menu
```
1. Add songs to your playlist
2. Display your playlist
3. Delete songs you don't like
4. Add a new song
5. Exit
```

---

## Example Usage
```
Enter----
1. To add songs to your playlists
2. To display your playlist
3. To delete songs that you don't like
4. To add new song
5. To exit
Choice: 1
Enter number of songs you want to add initially: 3
Enter the songs:
Believer
Shape of You
Faded
Songs added to your playlist

Choice: 2
Your current Playlist is:
 1: Believer
 2: Shape of You
 3: Faded

Choice: 3
Enter the song that you want to remove from your playlist: Faded
>>> Deletion Completed
```

---

## Key Points / DSA Concepts
* Dynamic Memory Allocation using `new` and `delete`
* Pointer manipulation for doubly linked list (`next` and `prev`)
* Traversal for adding, deleting, and displaying songs
* Menu-driven design using loops and switch-case
* String input handling using `getline` and `cin.ignore()`

---

## Future Improvements
* Implement Next / Previous / Repeat / Shuffle functionality
* Allow duplicate songs
* Save playlist to a file and load on program start
* Convert to a graphical user interface (GUI)
