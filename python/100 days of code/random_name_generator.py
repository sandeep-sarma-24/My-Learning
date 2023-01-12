# Split string method
names_string = input("Give me everybody's names, separated by a comma. ")
names = names_string.split(", ")
# 🚨 Don't change the code above 👆

#Write your code below this line 👇
import random
num_items = len(names)
random_choice = random.randint(0, num_items -1)

print(names[random_choice])

#Random Choice function 
#print(names[random.choice()]) 