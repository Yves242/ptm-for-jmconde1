''' This code is for showcasing different forms of for-loops. '''



# print console text
print(f"\nUsing the for-loop you are familiar with (e.g. 'for current_number in range(10)'):")

# PART 1: This is the structure you are currently familiar with
for current_number in range(10):            # <- remember, current_number is a variable!
    print(f"{current_number}, ", end='')      # <- print the current number.
    
    # Notice new format of printing! Much nicer this way.
    # Also, yung "end=''" just removes yung space na parang nag-eenter sa console.
    # you can compare it on your own if you want.



''' To do for-loops from x to n in ASCENDING order, 
        the range must be: range(x, n+1, y)
        
    where: 
        x = starting point
        n = ending point
        y = increment, aka ilang number yung nadadagdag per iteration
'''

# print console text
print(f"\n\nUsing 'range(1, 10+1, 1)' to initiate ascending order from 1 to 10:")

# PART 2: from 0 to 10 (ASCENDING)
for current_number in range(1, 10+1, 1):
    print(f"{current_number}, ", end='')





''' To do for-loops from x to n in DESCENDING order, 
        SAME range function! BUT add [::-1] at the end of the range.
'''

# print console text
print(f"\n\nUsing 'range(1, 10+1, 1)[::-1]' to initiate DESCENDING order from 10 to 1:")


# from 10 to 0 (NOW REVERSED)
for current_number in range(1, 10+1, 1)[::-1]:
    print(f"{current_number}, ", end='')


# exiting prints
print("\n\nFinished.\n")