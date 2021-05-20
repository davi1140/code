import random
import numpy as np

# Analytical: First: I analyze you. I start:
# Silent, Silent, Truth, Silent.
# If you "tell the truth", I'll act like [Tit for Tat] while still analyzing.
# If you never "tell the truth", I'll act like [alwaysTellTruth] while still analyzing, because I'd rather try and get the best out of the situation. 
# The world's a grim place, and I need to keep my head in it. Things can change on the fly whenever.

# Basically, analyzing the entire situation rather than just one sample size should help increase point total.
# Reminder: For the history array, "tell truth" = 0, "stay silent" = 1

def strategy(history, memory):
    Schedule = ["stay silent","stay silent","tell truth","stay silent"]
    gLength = history.shape[1]
    Speak = memory
    choice = [None] * (gLength / 4)
    test = None
    Switches = 0
    counter = 0
    
    test = gLength
    while(test > 1): # Testing whether the cycle has reached 4  or not
        test = test % 4
        if(test > 0)
            Switches = 0 
        elif(test == 1):
            Switches = 1
            break
            
    if (gLength < 4): # Testing range
        choice = Schedule[gLength]
    elif (Switches == 1): # Time to analyze the testing stage and decide what to do based on what the opponent did in that time!
        opponentsActions = history[1]
        if np.count_nonzero(opponentsActions-1) == 0: # The opponent stayed silent all 4 turns! Never "told the truth"!
            Speak = True # Let's switch to exploitation.
        else:
            Speak = False # Let's switch to Tit For Tat.
    elif (Switches == 0):
        if Speak:
            choice = "tell truth"
        else:
            choice = "stay silent" if history[1,-1] == 1 else "tell truth" # Do Tit for Tat
    
    return choice, Speak
