''' This code is a for-loop version of the original version from item 3.0. '''

# variable declarations
num_variable = 0

# STOP if already in this value!
exit_value = 10


# for-loop version 
for current_number in range(10):    # <- take note! 'current_number' is a different variable now
    num_variable += 1               # <- update the number
    print(num_variable)             # <- print the number



# further explanation below for your reference

'''
#====== for-loop version (1) ======#        #========= linear version (1) =========#

num_variable = 0                            num_variable = 0

for current_number in range(1):             # iteration 1
    num_variable += 1                       num_variable += 1
    print(num_variable)                     print(num_variable)     <- prints what?

#==================================#        #======================================#





#====== for-loop version (3) ======#        #========= linear version (3) =========#

num_variable = 0                            num_variable = 0

for current_number in range(3):             # iteration 1
    num_variable += 1                       num_variable += 1
    print(num_variable)                     print(num_variable)     <- prints what?
    
                                            # iteration 2
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # iteration 3
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
#==================================#        #======================================#





#====== for-loop version (10) =====#        #========= linear version (10) ========#

num_variable = 0                            num_variable = 0

for current_number in range(10):             # iteration 1
    num_variable += 1                       num_variable += 1
    print(num_variable)                     print(num_variable)     <- prints what?
    
                                            # iteration 2
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # iteration 3
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
        
                                            # iteration 4
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # iteration 5
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
        
                                            # iteration 6
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # iteration 7
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
        
                                            # iteration 8
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # iteration 9
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
        
                                            # iteration 10
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
#==================================#        #======================================#


'''