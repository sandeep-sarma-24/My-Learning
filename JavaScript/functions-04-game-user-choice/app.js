const startGameBtn = document.getElementById('start-game-btn'); 

const ROCK = 'ROCK';
const PAPER = 'PAPER';
const SCISSORS = 'SCISSORS';
const DEFAULT_USER_CHOICE = ROCK;
const RESULT_DRAW = 'DRAW';
const RESULT_COMPUTER_WINS = 'COMPUTER_WINS';
const RESULT_PLAYER_WINS = 'PLAYER_WINS'

let gameIsRunning = false

const getPlayerChoice = function() {
  const selection = prompt(`${ROCK}, ${PAPER} or ${SCISSORS}?`, '').toUpperCase();
  if (
    selection !== ROCK &&
    selection !== PAPER &&
    selection !== SCISSORS
  ) {
    alert(`Invalid choice! We chose ${DEFAULT_USER_CHOICE} for you!`);
    return DEFAULT_USER_CHOICE;
  }
  return selection;
};

const getComputerChoice = function(){
const randomValue = Math.random();
if(randomValue < 0.34){
  return ROCK;
} else if (randomValue < 0.67){
  return PAPER;
} else {
  return SCISSORS;
}
};

const getWinner = function(cChoise, pChoise){
  if(cChoise === pChoise){
    return 'DRAW';
  } else if (pChoise === ROCK && pChoise === PAPER 
    || cChoise === PAPER && pChoise === SCISSORS 
    || cChoise === SCISSORS && pChoise === ROCK){
    return RESULT_PLAYER_WINS;
  } else{
    return RESULT_COMPUTER_WINS;
  }
}

startGameBtn.addEventListener('click',function(){
  if(gameIsRunning){
    return;
  }

  gameIsRunning = true;
  console.log('Game is starting...');
  const playerChoice = getPlayerChoice();
  const ComputerChoice = getComputerChoice();
  const winner = getWinner(ComputerChoice, playerChoice)
  let message = 'You picked $(playerChoice), computer picked $(computerChoice), therefore you  ';
  if (winner === RESULT_DRAW){
   message = message + 'had a draw.';
  } else if (winner === RESULT_PLAYER_WINS){
    message = message + 'won';
  } else{
    message = message + 'lost';
  }
  alert(message);
  gameIsRunning = false

});
