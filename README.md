## RPS
### Description
So the main idea for the game is rock paper scissors. 

The player has to input any number from 1-3 representing 1 as rock , 2 as paper and 3 as scissors. The computer will randomly select any number between 1-3 and user will win by following some rules i.e 
- rock beats scissors
- paper beats rock 
- scissors beat paper.

### Pseudocode


```
Function GetValidUserChoice()
Display "Enter 1 for Rock, 2 for Paper, 3 for Scissors: "
   Read userChoice
  If userChoice is not 1, 2, or 3 Then
 Display "Invalid input. Please enter 1, 2, or 3."
 Return userChoice
End Function

Function DetermineWinner(userChoice, computerChoice)
  If userChoice equals computerChoice The
  Return "Tie"
 Else If (userChoice is 1 and computerChoice is 3) OR
     (userChoice is 2 and computerChoice is 1) OR
          (userChoice is 3 and computerChoice is 2) Then
   Return "Win"
 Else
    Return "Lose"
  End If
End Function

Start Loop
  userChoice = GetValidUserChoice()
  computerChoice = Random(1, 3)
  result = DetermineWinner(userChoice, computerChoice)
  Display "You " + result + "!"
  If computerChoice is 1 Then
    Display "Computer chose Rock."
  Else If computerChoice is 2 Then
    Display "Computer chose Paper."
  Else
    Display "Computer chose Scissors."
  End If```
