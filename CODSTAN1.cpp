n=input()
game=input()
harshit = game.count('H') 
virat= game.count('V')
if((int(harshit))==(int(virat))):
    print("Friendship\n")
elif((int(harshit))>(int(virat))):
    print("Harshit\n")
else :
    print("Virat\n")