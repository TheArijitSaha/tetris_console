# Console Tetris for Linux [Under development]

*Basic idea taken from [maxoverride's repo](https://github.com/maxoverride/tetris_console) (which runs on windows at the time of fork).*

This project is a remake of the classic game of Tetris for the linux console.

![Screengrab of the game](Sample_1.png)

### Tasks

- [x] ~~Refactor for Linux~~
	- [x] ~~Discard Windows Functions~~
	- [x] ~~Refactor rendering~~
	- [x] ~~Refactor key movements (ncurses used here)~~
	- [x] ~~Refactor line clearing~~
	- [x] ~~Refactor Game over functions~~
- [x] ~~Add Scoreboard~~
- [x] ~~Add incremental speed of falling blocks~~
- [ ] Add T-spins
- [ ] Add next block window

### Build

- Clone this repository
- Open the directory in your terminal
- Do:
	```
	sudo apt-get install libncursesw5-dev
	make clean && make
	```
	Installing the ncursesw library gives access to unicode character printability in ncurses mode (needed for scoreboard).

### Run

- Launch tetris_runner executable:
	```
	./tetris_runner
	```

