# captain
This is a basic C program that calculates possible moves of a ship.
Logically, a ship can go (or stay) at 9 spots.
This can be shown as a board that's 3x3.
It can always stay at the same spot. So the middle of board is always 1.
1s mean true, 0s mean false, so ship can go to 1s.

|West |Middle| East |
|-----|------|------|
|0|0     |   0   |
|1  |1    | 0     | 
| 0    | 0     | 0     |

This means ship can stay at the spot, or go to west by one square.

## To add

 - [ ] Calculating future moves.
 - [ ] Maybe UI.
