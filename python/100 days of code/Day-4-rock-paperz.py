from random import random

rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

game_images = [rock, paper , scissors]

#Write your code below this line 👇

user_choice = int(input("Choose Rock == 0, Scissors == 1 and Paper == 2 "))
print(game_images[user_choice])

computer_choice = random.randint(0,2)
print(f"Computer choice{computer_choice}")
print(game_images[computer_choice])

if user_choice >= 3 or user_choice <0: 
    print("You have typed an invalid number, You lose !")

elif user_choice == 0 and computer_choice == 2:
    print("You Wins!!")

elif computer_choice > user_choice:
    print("You Lose")

elif computer_choice == user_choice:
    print("It's a Draw! ")

elif computer_choice == 0 and user_choice == 2:
    print("You lose")

elif user_choice > computer_choice:
    print("You Win !")


