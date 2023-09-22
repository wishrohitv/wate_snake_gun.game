import random


def gameWin(comp, you):
    if comp == 'you':
        return None
    elif comp == 's':
        if you == 'w':
            return False
        elif you == 'g':
            return True
    elif comp == 'w':
        if you == 'g':
            return False
        elif you == 's':
            return True
    elif comp == 'g':
        if you == 's':
            return False
        elif you == 'w':
            return True


randNo = random.randrange(1, 3)
# print(randNo)
comp = "comp Turn: snake(s) Water(w) or Gun(g)?"
if randNo == 1:
    comp = 's'
elif randNo == 2:
    comp = 'w'
elif randNo == 3:
    comp = 'g'


you = input("Player's Turn: Enter snake(s) or Water(w) or Gun(g)? ")
a = gameWin(comp, you)
print(f"computer choose '{comp}'")
print(f"You choose '{you}'")

if a is None:
    print("The game is tie!")

elif a:
    print("Congratulation! You win, \nyour opponent lose!")

else:
    print("You lose!")
    #break
