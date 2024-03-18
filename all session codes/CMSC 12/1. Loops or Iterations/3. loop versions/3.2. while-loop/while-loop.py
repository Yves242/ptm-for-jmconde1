''' This code is a while-loop version of the original version from item 3.0. '''

# variable declarations
num_variable = 0

# STOP if already in this value!
exit_value = 10


# while-loop version 
while (num_variable <= 10):    # <- do until variable <= 10!
    num_variable += 1          # <- update the number
    print(num_variable)        # <- print the number



# further explanation below for your reference

'''
#====== while-loop version (1) ======#      #========= linear version (1) =========#

num_variable = 0                            num_variable = 0

while (num_variable <= 1):                  # iteration 1
    num_variable += 1                       num_variable += 1
    print(num_variable)                     print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)                                                

#==================================#        #======================================#








#====== while-loop version (3) ======#      #========= linear version (3) =========#

num_variable = 0                            num_variable = 0

while (num_variable <= 3):                  # iteration 1
    num_variable += 1                       num_variable += 1
    print(num_variable)                     print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                
                                                
                                                
                                            # iteration 2
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                
                                                
    
                                            # iteration 3
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                
                                                
    
                                            # iteration 4
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                
                                            # ... .. ... until infinity ... .. ... #
    
#==================================#        #======================================#







#====== while-loop version (10) =====#      #========= linear version (10) ========#

num_variable = 0                            num_variable = 0

while (num_variable <= 10):                 # iteration 1
    num_variable += 1                       num_variable += 1
    print(num_variable)                     print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

    
                                            # iteration 2
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

    
                                            # iteration 3
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

        
                                            # iteration 4
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

    
                                            # iteration 5
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

        
                                            # iteration 6
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

    
                                            # iteration 7
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

        
                                            # iteration 8
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

    
                                            # iteration 9
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

        
                                            # iteration 10
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

        
                                            # iteration 11
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

        
                                            # iteration 12
                                            num_variable += 1
                                            print(num_variable)     <- prints what?
    
                                            # check if should stop now
                                            if (num_variable <= 3):
                                                exit(0)
                                                

                                            # ... .. ... until infinity ... .. ... #
    
#==================================#        #======================================#


'''