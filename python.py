# print("Ankit is my name")

# print("o----")
# print(" ||||")
# print("@" * 50)
# a=5
# b=7
# c=2
# b=12
# a=3
# print(a+b*c)

# name= input("What is your name?")
# age= input("what is your age?")
# new_patient=input("Are you a new patient,type yes or no:-")
# response = 'yes'
# if response == new_patient:
#     print("you are eligible for scholarship grant")
# else :
#    print("Please come another day")

# name = input('what is your name? ')
# color = input('what is your favorite color? ')
# print(name + " likes " + color)

# birth_year = int(input("what's your birth year "))
# c_y = 2020
# d_v = input('do you wish to know your age- 1)yes  2)no :-')
# response = "no"
# if response == d_v:
#     print(c_y - birth_year)
#     print("Now you know your age! ")
# else :
#     print("please use me when you wish to know your age")
#     print("Thank you")

# birth_year = int(input(' Birth Year:- '))
# age = 2020 - birth_year
# print(age)
# print(type(age))
# print(type(birth_year))

# weight = float(input(" weight:- "))
# w_i_k = weight * 2.2
# print(w_i_k)
# name = 'Jennifer'
# print(name[1 : -1])

# first = 'Ankit'
# last = 'Upadhyay'
# print(first + ' [' +  last + '] is a coder')
# print( f'{first} [{last}] is a coder')

# message = input('Please type your message:- ')
# if len(message) > 30:
#     print("you exceeded the word limit.Please type again ")
# else:
#     print(message.upper())
# print(message.find('c'))

# print(name.replace( either a whole word or character, is case sensitive))
# print(name.replace(cat,tac))
# Boolean expression    'python' in (string) will print "yes" or "no"

# print(''' 
# Twinkle twinkle little star
#     How I wonder what you are
#         Up above the world so high
#                Like a diamond in the sky''')

# Name = input('Name:- ')
# Class = input('class:- ')
# Marks_e = int(input('marks in english:- '))
# Marks_m = int(input('marks in maths:- '))
# Marks_s = int(input('marks in science:- '))
# Marks_ss = int(input('marks in social science:- '))
# Marks_sa = int(input('marks in sanskrit:- '))
# Marks_computer = int(input('marks in computer:- '))
# Avg = (Marks_e + Marks_m + Marks_s + Marks_sa + Marks_ss) / 450
# Percentage = Avg*100
# if Marks_computer >44:
#     print("You got an A grade")
#     print(Name + ' of ' + 'class ' + str(Class) + ' secured percentage of ' + str(Percentage) + '% ')
# else: print("Try for an A grade")

# import math
# print(math.factorial(6))

# good_credit= True
# price = 1000000
# if good_credit:
#     down_payment = 0.1 * price
# else:
#    down_payment = 0.2 * price
# print(f" Down Payment:- ${down_payment}")

# temperature = int(input("temperature:- "))
# if temperature > 30:
#     print("It's a hot day")
# elif temperature < 10:
#     print("It's a cold day")
# else:
#     print("It's neither hot nor cold day")

# name = input("please enter your name:- ")
# if len(name) < 3:
#     print("name must be atleast three characters long")
# elif len(name) > 50:
#     print("name can be maximum of 50 charaters")
# else:
#     print("Name looks good")

# weight = int(input("Your weight:- "))
# unit = str(input(" kg or lbs " ))
# if  unit == 'kg':
#     print( str( weight * 2.203) +' lbs ')
# else:
#     print( str( weight * 0.4) +' kg ')

# i = 1
# while i <= 5:
#     print('*' * i)
#     i= i + 1

# number = 9
# print("GUESSING GAME")
# Guess_count = 0
# Guess_limit = 3
# while Guess_count < Guess_limit:
#     guess = int(input("Guess the number:- "))
#     Guess_count += 1
#     if guess == number:
#         print("You won")
#         break
# else:
#     print("try again")


# while True:
#     b= input( "> ").lower()
#     started = False
#     if b== "start":
#             if started:
#                 print("Car is already started")
#             else:
#                 started= True
#                 print(' car started...Ready to go! ')
#     elif b== "stop":
#             if not started:
#                 print(" car is already stopped")
#             else:
#                 started = False
#                 print("Car stopped")
#     elif b == "help":
#         print(''' 
# start- to start the car
# stop - to stop the car
# quit - to exit ''')
#     elif b== "quit" :
#         break
#     else:
#         print(" I don't understand that! ")


# for item in ["Mosh", "John", "Sarah"]:
#     print(item)


# for item in range(50):
#     print(item)
# range( start, end, step)

# prices = [ 10, 20, 30]
# total = 0
# for i in prices:
#     total += i
# print(f'Total:- {total}')

# Nested loop
# for x in range (10):
#     for y in range (9):
#         print(f'( {x}, {y})')

# numbers = [ 1, 1, 1, 1, 5]
# for i in numbers:
#     print("x" * i )

# number = [1, 1, 1, 1, 5]
# for i in number:
#     output= ""
#     for z in range(i):
#         output+= 'x'
#     print(output)

# Largest number in the list
# numbers = [5, 10, 15, 20, 25]
# i= 0
# for z in numbers:
#     if z > i:
#         i=z
# print(i)


# 2-D list
# matrix = [
#     [1, 2, 4],
#     [4, 7, 6],
#     [7, 1, 10]
# ]
# print(matrix)
# for column in matrix:
#     for item in column:
#         print(item)

# numbers= [1, 2, 3, 4, 5]
# numbers.append(15)
# print(numbers)
# numbers.insert(1,15)
# print(numbers)
# numbers.clear()
# print(numbers)
# numbers.pop()
# print(numbers)
# print(numbers.index(5))

# numbers2= numbers.copy()
# numbers.append(9)
# print(numbers2)

# numbers= [1, 2, 3, 4, 5, 5, 2, 2, 1, 1, 5, 4, 2]
# for i in numbers:
#     while numbers.count(i)>1:
#         numbers.remove(i)
#         numbers.sort()
# print (numbers)

# numbers= [1, 2, 3, 4, 5, 5, 2, 2, 1, 1, 5, 4, 2]
# unique= []
# for number in numbers:
#     if number not in unique:
#         unique.append(number)
# print(unique)

# Tuple:
# numbers= (1, 2, 3, 4, 5, 5, 2, 2, 1, 1, 5, 4, 2)
# numbers[0]=10
# print(numbers[0])

# Unpacking: can be used in lists and tuples
# coordinates = (1, 3, 5)
# x, y, z = coordinates
# print(x*y*z)
# print(x)

#dictionaries
# a = input("Phone number:- ")
# Dictionary = {
#     '0' : "zero",
#     '1' : "one",
#     '2' : "two",
#     '3' : "three",
#     '4' : "four",
#     '5' : "five",
#     '6' : "six",
#     '7' : "seven",
#     '8' : "eight",
#     '9' : "nine"
# }
# output = ""
# for i in a:
#     output += Dictionary.get(i) + " "
# print(output)

# message = input(">")
# words = message.split(' ')
# emojis = {
#     ":)" : "😊",
#     ":(" : "😒"
#     }
# output = " "
# for i in words:
#     output += emojis.get( i, i) + " "
# print (output)
    
# def greet_user(name,age):
#     b= input("What role do you wanna play?- ")
#     in_level = int(input("What is interest level on scale 1-10 for the role?- "))
#     if in_level > 6:
#         print(f'Hi {name}')
#         print(f'your interest level is {in_level}')
#         print(f'You are {age} yrs age and selected for {b} ')
#     else:
#         print(f'Your interest level is {in_level}. You are unqualified for your role')

# print("Welcome to the work selection terminal")
# name = input("What is your name? ")
# age = input("What is your age?- ")
# greet_user(name, age)


# try:
#     age = int(input(' Age: '))
#     print(age)
# except ValueError:
#     print(" Invalid Value")



# Total_cost = float(input("Cost of the house:- "))
# portion_down_payment= 0.25
# down_payment = Total_cost * portion_down_payment
# annual_salary= float(input("The starting annual salary:- "))
# portion_saved= float(input("Portion of salary to be saved:- "))
# current_savings= 0
# r= 0.04
# count=0
# while current_savings<= down_payment:
#     current_savings= current_savings + current_savings*(r/12) + (annual_salary/12)*portion_saved
#     count+=1
# print(count)



# Total_cost = float(input("Cost of the house:- "))
# portion_down_payment= 0.25
# down_payment = Total_cost * portion_down_payment
# annual_salary= float(input("The starting annual salary:- "))
# semi_annual_salary_raise= flaot(input("Semi annual salary raise:- "))
# portion_saved= float(input("Portion of salary to be saved:- "))
# current_savings= 0
# r= 0.04
# count=0
# while current_savings<= down_payment:
#     current_savings= current_savings + current_savings*(r/12) + (annual_salary/12)*portion_saved
#     count+=1
# print(count)







# an_characters = "aefhilmnorsxAEFHILMNORSX"
# a= input("I will cheer for you! Enter a word: ")
# b= int(input("Enthusiasm level: "))
# i=0
# while i< len(a):
#     char = a[i]
#     if char in an_characters:
#         print(f'Give me an {a[i]}! {a[i]}')
#     else:
#         print(f'Give me a {a[i]}! {a[i]}')
#     i= i + 1
# print("What does that spell?")
# j = 0
# while j<= b:
    # print(f'{a} !!! ')
#     j = j + 1




# an_characters = "aefhilmnorsxAEFHILMNORSX"
# a= input("I will cheer for you! Enter a word: ")
# b= int(input("Enthusiasm level: "))
# for char in a:
#     if char in an_characters:
#         print(f'Give me an {a[i]}! {a[i]}')
#     else:
#         print(f'Give me a {a[i]}! {a[i]}')
# print("What does that spell?")
# for j in range(b):
#     print(f'{a} !!! ')
    





# a= [5, 12, 9, 11, 10]

# for i in a:
#     a.sort()
# print (a)



# L1 = [ 1, 2, 3, 4]
# L1.pop()
# print(L1)
# del(L1[1])
# print(L1)
# L1.remove(3)
# print (L1)

# s= "I love my Mom and Dad!"
# # print(list(s))
# print(s.split(' '))


# L= [ '1', '2', '3', '4', '5']
# L2 = L[:]
# print(L2)
# L2.append(9)
# print(L2)
# print(L)



#GET TOP STORIES FROM GOOGLE NEWS FEED
# import bs4
# from bs4 import BeautifulSoup as soup
# from urllib.request import urlopen
# news_url="https://news.google.com/news/rss"
# Client=urlopen(news_url)
# xml_page=Client.read()
# Client.close()

# soup_page=soup(xml_page,"xml")
# news_list=soup_page.findAll("item")
# for news in news_list:
#     print(news.title.text)
#     print(news.link.test)
#     print(news.pubDate.text)
#     print("-"*60)

# list_of_numbers= [1,2, 3, 4, 5, 6, 7, 8, 9,0, 10, 50, 100]
# max=0
# for numbers in list_of_numbers:
#     if numbers>max:
#         max=numbers
# print(max)
    
# list_of_numbers.sort()
# print(list_of_numbers.pop())


# list_of_numbers= [1,2, -3, 4, 5, 6, 7, 8, -9,0, 10, 50, -100]
# counter_positive=0
# counter_negative=0
# counter_zero=0

# for i in list_of_numbers:
#     if i>= 1:
#         counter_positive+=1
    
#     elif i<0:
#         counter_negative+=1
    
#     else:
#          i==0
#          counter_zero+=1
    
# print(f'Total positive numbers are {counter_positive} in list.')
# print(f'Total negative numbers are {counter_negative} in list.')
# print(f'Total number of zeroes are {counter_zero} in list.')



# while i in range (len(list_of_numbers))>=1:
#     counter_positive+=1
# print(counter_positive)

# while  i in range (len(list_of_numbers))<0:
#     counter_negative+=1
# print(counter_negative)

# while  i in range (len(list_of_numbers))==0:
#     counter_zero+=1
# print(counter_zero)




# def mult_iter(a,b):
#     result=0
#     while b>0:
#         result+=a
#         b-=1
#     return result

# print(mult_iter(3,5))



# def mult(a,b):

#     if b==1:
#         return a
#     else:
#         return a+ mult(a,b-1)

# print(mult(1,5))


# def fib(x):
#     if x==0 or x==1:
#         return 1
#     else:
#         return fib(x-1) + fib(x-2)
# print(fib(5))

# def is_palindrome(s):

#     def toChars(s):
#         s=s.lower()
#         ans=''
#         for c in s:
#             if c in "abcdefghijklmnopqrstuvwxyz":
#                 ans=ans+c
#         return ans

#     def isPal(s):
#         if len(s)<=1:
#             return True
#         else:
#             return s[0]==s[-1] and isPal(s[1:-1])

#     return isPal(toChars(s))

# print(is_palindrome('stopots'))
# print(is_palindrome('Hope is a good thing'))




# Total_cost = float(input("Cost of the house:- "))
# portion_down_payment= 0.25
# down_payment = Total_cost * portion_down_payment
# annual_salary= float(input("The starting annual salary:- "))
# portion_saved= float(input("Portion of salary to be saved:- "))
# current_savings= 0
# r= 0.04
# count=0
# while current_savings<= down_payment:
#     current_savings= current_savings + current_savings*(r/12) + (annual_salary/12)*portion_saved
#     count+=1
# print(count)



# Total_cost = float(input("Cost of the house:- "))
# annual_salary= float(input("The starting annual salary:- "))
# semi_annual_salary_raise= float(input("The semi annual salary raise percentage:- "))
# portion_saved= float(input("Portion of salary to be saved:- "))
# portion_down_payment= 0.25
# down_payment = Total_cost * portion_down_payment
# current_savings= 0
# r= 0.04
# count=0


# new_annual_salary= (annual_salary) + (annual_salary*semi_annual_salary_raise)

# while current_savings<= down_payment:
    
#     if count%6==0:
#         current_savings= current_savings + current_savings*(r/12) + (float(new_annual_salary)/12)*portion_saved
#     annual_salary=new_annual_salary
       
#     if count%6!=0:
#         current_savings= current_savings + current_savings*(r/12) + (annual_salary/12)*portion_saved
        
#     count+=1
    
# print(count)


# Total_cost = float(input("Cost of the house:- "))
# portion_down_payment= 0.25
# down_payment = Total_cost * portion_down_payment
# annual_salary= float(input("The starting annual salary:- "))
# portion_saved= float(input("Portion of salary to be saved:- "))
# semi_annual_salary_raise= float(input("The semi annual salary raise percentage:- "))
# current_savings= 0
# r= 0.04
# count=0
# while current_savings<= down_payment:
#     current_savings= current_savings + current_savings*(r/12) + (annual_salary/12)*portion_saved
#     count+=1
#     if count%6==0:
#         annual_salary=(annual_salary) + (annual_salary*semi_annual_salary_raise)
#     else:
#         continue
# print(count)



# l=[1,2,3,8,5]
# # l.pop()   pop without any parameter removes the las element
# print (l)
# # l.remove(2)     remove takes the element of the list that needs to be removed.
# print(l)


# def genSubsets(L):
#     res=[]
#     if len(L)==0:
#         return [[]]
#     smaller= genSubsets(L[:-1])
#     extra= L[-1:]
#     new=[]
#     for small in smaller:
#         new.append(small+extra)
#     return smaller+new

# print(genSubsets([1,2,3]))

# L= [4,2,1, 3,5, 4, 5, 9,9]

# for i in range(len(L)):
#     if 0<i<L:

#         if L[i]>=L[i-1] and L[i]>=L[i+1]:
#              peak= L[i]
#              print(peak)
#         else:
#             continue
#     elif i==8:
#         if L[i]>=L[i-1]:
#             peak=L[i]
#             print (peak)
#     else:
#         if L[i]>=L[i+1]:
#             peak=L[i]
#             print(peak)
    


# import trace

# ################################################################################
# ########################### Class for Peak Problems ############################
# ################################################################################

# class PeakProblem(object):
#     """
#     A class representing an instance of a peak-finding problem.
#     """

#     def __init__(self, array, bounds):
#         """
#         A method for initializing an instance of the PeakProblem class.
#         Takes an array and an argument indicating which rows to include.

#         RUNTIME: O(1)
#         """

#         (startRow, startCol, numRow, numCol) = bounds

#         self.array = array
#         self.bounds = bounds
#         self.startRow = startRow
#         self.startCol = startCol
#         self.numRow = numRow
#         self.numCol = numCol

#     def get(self, location):
#         """
#         Returns the value of the array at the given location, offset by
#         the coordinates (startRow, startCol).

#         RUNTIME: O(1)
#         """

#         (r, c) = location
#         if not (0 <= r and r < self.numRow):
#             return 0
#         if not (0 <= c and c < self.numCol):
#             return 0
#         return self.array[self.startRow + r][self.startCol + c]

#     def getBetterNeighbor(self, location, trace = None):
#         """
#         If (r, c) has a better neighbor, return the neighbor.  Otherwise,
#         return the location (r, c).

#         RUNTIME: O(1)
#         """

#         (r, c) = location
#         best = location

#         if r - 1 >= 0 and self.get((r - 1, c)) > self.get(best):
#             best = (r - 1, c)
#         if c - 1 >= 0 and self.get((r, c - 1)) > self.get(best):
#             best = (r, c - 1)
#         if r + 1 < self.numRow and self.get((r + 1, c)) > self.get(best):
#             best = (r + 1, c)
#         if c + 1 < self.numCol and self.get((r, c + 1)) > self.get(best):
#             best = (r, c + 1)

#         if not trace is None: trace.getBetterNeighbor(location, best)

#         return best
    
#     def getMaximum(self, locations, trace = None):
#         """
#         Finds the location in the current problem with the greatest value.

#         RUNTIME: O(len(locations))
#         """
   
#         (bestLoc, bestVal) = (None, 0)
    
#         for loc in locations:
#             if bestLoc is None or self.get(loc) > bestVal:
#                 (bestLoc, bestVal) = (loc, self.get(loc))
    
#         if not trace is None: trace.getMaximum(locations, bestLoc)

#         return bestLoc

#     def isPeak(self, location):
#         """
#         Returns true if the given location is a peak in the current subproblem.

#         RUNTIME: O(1)
#         """

#         return (self.getBetterNeighbor(location) == location)

#     def getSubproblem(self, bounds):
#         """
#         Returns a subproblem with the given bounds.  The bounds is a quadruple
#         of numbers: (starting row, starting column, # of rows, # of columns).

#         RUNTIME: O(1)
#         """

#         (sRow, sCol, nRow, nCol) = bounds
#         newBounds = (self.startRow + sRow, self.startCol + sCol, nRow, nCol)
#         return PeakProblem(self.array, newBounds)

#     def getSubproblemContaining(self, boundList, location):
#         """
#         Returns the subproblem containing the given location.  Picks the first
#         of the subproblems in the list which satisfies that constraint, and
#         then constructs the subproblem using getSubproblem().

#         RUNTIME: O(len(boundList))
#         """

#         (row, col) = location
#         for (sRow, sCol, nRow, nCol) in boundList:
#             if sRow <= row and row < sRow + nRow:
#                 if sCol <= col and col < sCol + nCol:
#                     return self.getSubproblem((sRow, sCol, nRow, nCol))

#         # shouldn't reach here
#         return self

#     def getLocationInSelf(self, problem, location):
#         """
#         Remaps the location in the given problem to the same location in
#         the problem that this function is being called from.

#         RUNTIME: O(1)
#         """

#         (row, col) = location
#         newRow = row + problem.startRow - self.startRow
#         newCol = col + problem.startCol - self.startCol
#         return (newRow, newCol)

# ################################################################################
# ################################ Helper Methods ################################
# ################################################################################

# def getDimensions(array):
#     """
#     Gets the dimensions for a two-dimensional array.  The first dimension
#     is simply the number of items in the list; the second dimension is the
#     length of the shortest row.  This ensures that any location (row, col)
#     that is less than the resulting bounds will in fact map to a valid
#     location in the array.

#     RUNTIME: O(len(array))
#     """

#     rows = len(array)
#     cols = 0
    
#     for row in array:
#         if len(row) > cols:
#             cols = len(row)
    
#     return (rows, cols)

# def createProblem(array):
#     """
#     Constructs an instance of the PeakProblem object for the given array,
#     using bounds derived from the array using the getDimensions function.
   
#     RUNTIME: O(len(array))
#     """

#     (rows, cols) = getDimensions(array)
#     return PeakProblem(array, (0, 0, rows, cols))



# import peak
# import trace

# ################################################################################
# ################################## Algorithms ##################################
# ################################################################################

# def algorithm1(problem, trace = None):
#     # if it's empty, we're done 
#     if problem.numRow <= 0 or problem.numCol <= 0:
#         return None

#     # the recursive subproblem will involve half the number of columns
#     mid = problem.numCol // 2

#     # information about the two subproblems
#     (subStartR, subNumR) = (0, problem.numRow)
#     (subStartC1, subNumC1) = (0, mid)
#     (subStartC2, subNumC2) = (mid + 1, problem.numCol - (mid + 1))

#     subproblems = []
#     subproblems.append((subStartR, subStartC1, subNumR, subNumC1))
#     subproblems.append((subStartR, subStartC2, subNumR, subNumC2))

#     # get a list of all locations in the dividing column
#     divider = crossProduct(range(problem.numRow), [mid])

#     # find the maximum in the dividing column
#     bestLoc = problem.getMaximum(divider, trace)

#     # see if the maximum value we found on the dividing line has a better
#     # neighbor (which cannot be on the dividing line, because we know that
#     # this location is the best on the dividing line)
#     neighbor = problem.getBetterNeighbor(bestLoc, trace)

#     # this is a peak, so return it
#     if neighbor == bestLoc:
#         if not trace is None: trace.foundPeak(bestLoc)
#         return bestLoc
   
#     # otherwise, figure out which subproblem contains the neighbor, and
#     # recurse in that half
#     sub = problem.getSubproblemContaining(subproblems, neighbor)
#     if not trace is None: trace.setProblemDimensions(sub)
#     result = algorithm1(sub, trace)
#     return problem.getLocationInSelf(sub, result)

# def algorithm2(problem, location = (0, 0), trace = None):
#     # if it's empty, we're done 
#     if problem.numRow <= 0 or problem.numCol <= 0:
#         return None

#     nextLocation = problem.getBetterNeighbor(location, trace)

#     if nextLocation == location:
#         # there is no better neighbor, so return this peak
#         if not trace is None: trace.foundPeak(location)
#         return location
#     else:
#         # there is a better neighbor, so move to the neighbor and recurse
#         return algorithm2(problem, nextLocation, trace)

# def algorithm3(problem, bestSeen = None, trace = None):
#     # if it's empty, we're done 
#     if problem.numRow <= 0 or problem.numCol <= 0:
#         return None

#     midRow = problem.numRow // 2
#     midCol = problem.numCol // 2

#     # first, get the list of all subproblems
#     subproblems = []

#     (subStartR1, subNumR1) = (0, midRow)
#     (subStartR2, subNumR2) = (midRow + 1, problem.numRow - (midRow + 1))
#     (subStartC1, subNumC1) = (0, midCol)
#     (subStartC2, subNumC2) = (midCol + 1, problem.numCol - (midCol + 1))

#     subproblems.append((subStartR1, subStartC1, subNumR1, subNumC1))
#     subproblems.append((subStartR1, subStartC2, subNumR1, subNumC2))
#     subproblems.append((subStartR2, subStartC1, subNumR2, subNumC1))
#     subproblems.append((subStartR2, subStartC2, subNumR2, subNumC2))

#     # find the best location on the cross (the middle row combined with the
#     # middle column)
#     cross = []

#     cross.extend(crossProduct([midRow], range(problem.numCol)))
#     cross.extend(crossProduct(range(problem.numRow), [midCol]))

#     crossLoc = problem.getMaximum(cross, trace)
#     neighbor = problem.getBetterNeighbor(crossLoc, trace)

#     # update the best we've seen so far based on this new maximum
#     if bestSeen is None or problem.get(neighbor) > problem.get(bestSeen):
#         bestSeen = neighbor
#         if not trace is None: trace.setBestSeen(bestSeen)

#     # return if we can't see any better neighbors
#     if neighbor == crossLoc:
#         if not trace is None: trace.foundPeak(crossLoc)
#         return crossLoc

#     # figure out which subproblem contains the largest number we've seen so
#     # far, and recurse
#     sub = problem.getSubproblemContaining(subproblems, bestSeen)
#     newBest = sub.getLocationInSelf(problem, bestSeen)
#     if not trace is None: trace.setProblemDimensions(sub)
#     result = algorithm3(sub, newBest, trace)
#     return problem.getLocationInSelf(sub, result)

# def algorithm4(problem, bestSeen = None, rowSplit = True, trace = None):
#     # if it's empty, we're done 
#     if problem.numRow <= 0 or problem.numCol <= 0:
#         return None

#     subproblems = []
#     divider = []

#     if rowSplit:
#         # the recursive subproblem will involve half the number of rows
#         mid = problem.numRow // 2

#         # information about the two subproblems
#         (subStartR1, subNumR1) = (0, mid)
#         (subStartR2, subNumR2) = (mid + 1, problem.numRow - (mid + 1))
#         (subStartC, subNumC) = (0, problem.numCol)

#         subproblems.append((subStartR1, subStartC, subNumR1, subNumC))
#         subproblems.append((subStartR2, subStartC, subNumR2, subNumC))

#         # get a list of all locations in the dividing column
#         divider = crossProduct([mid], range(problem.numCol))
#     else:
#         # the recursive subproblem will involve half the number of columns
#         mid = problem.numCol // 2

#         # information about the two subproblems
#         (subStartR, subNumR) = (0, problem.numRow)
#         (subStartC1, subNumC1) = (0, mid)
#         (subStartC2, subNumC2) = (mid + 1, problem.numCol - (mid + 1))

#         subproblems.append((subStartR, subStartC1, subNumR, subNumC1))
#         subproblems.append((subStartR, subStartC2, subNumR, subNumC2))

#         # get a list of all locations in the dividing column
#         divider = crossProduct(range(problem.numRow), [mid])

#     # find the maximum in the dividing row or column
#     bestLoc = problem.getMaximum(divider, trace)
#     neighbor = problem.getBetterNeighbor(bestLoc, trace)

#     # update the best we've seen so far based on this new maximum
#     if bestSeen is None or problem.get(neighbor) > problem.get(bestSeen):
#         bestSeen = neighbor
#         if not trace is None: trace.setBestSeen(bestSeen)

#     # return when we know we've found a peak
#     if neighbor == bestLoc and problem.get(bestLoc) >= problem.get(bestSeen):
#         if not trace is None: trace.foundPeak(bestLoc)
#         return bestLoc

#     # figure out which subproblem contains the largest number we've seen so
#     # far, and recurse, alternating between splitting on rows and splitting
#     # on columns
#     sub = problem.getSubproblemContaining(subproblems, bestSeen)
#     newBest = sub.getLocationInSelf(problem, bestSeen)
#     if not trace is None: trace.setProblemDimensions(sub)
#     result = algorithm4(sub, newBest, not rowSplit, trace)
#     return problem.getLocationInSelf(sub, result)


# ################################################################################
# ################################ Helper Methods ################################
# ################################################################################


# def crossProduct(list1, list2):
#     """
#     Returns all pairs with one item from the first list and one item from 
#     the second list.  (Cartesian product of the two lists.)

#     The code is equivalent to the following list comprehension:
#         return [(a, b) for a in list1 for b in list2]
#     but for easier reading and analysis, we have included more explicit code.
#     """

#     answer = []
#     for a in list1:
#         for b in list2:
#             answer.append ((a, b))
#     return answer


#printing elements in fibonacci series.
# numb_of_elements=int(input("How many elements do you want in a fibonacci series? "))

# first_number=1
# second_number=0

# if numb_of_elements==1:
#     print(second_number)

# elif numb_of_elements==2:
#     print(second_number)
#     print(first_number)

# else:
#     print(second_number)
#     print(first_number)
#     for i in range (numb_of_elements-2):
#         new_number=first_number+second_number
#         second_number=first_number
#         first_number=new_number
#         print(new_number)


#printing diamond shape

# height= int(input("what is the height of the triangle? "))

# j=height-2
# for i in range (height):
#     print(" "*(height-1-i)+"* "*(i+1))
    
# while j>=0:
#     print(" "*(height-1-j)+"* "*(j+1))
#     j-=1


# factorial of a number
# number= int(input("Number whose factorial needs to be calculated: "))
# fact=1
# if number==0:
#     print ("1")

# while number>=1:

#     factorial=fact*number
#     fact=factorial
#     number-=1
# print(factorial)



# def factorial(number):
#     fact=1
#     if number==0:
#         factorial=1
#         print(factorial)
#     else:
#         while number>=1:
            
#             factorial=fact*number
#             fact=factorial
#             number-=1
#         print(factorial)

# factorial(1)


# Geometric series



# def geo_series(first_number,com_ratio,n):
    
#     print(first_number)
#     i=1
    
#     while n>i:

#         element_2=first_number*com_ratio
#         first_number=element_2
#         print(element_2)
#         i+=1

# geo_series(2,2,5)




# printing kite:

# height= int(input("what is the height of the triangle? "))
# length=int(input("what is the pole length that you want: "))

# j=height-2
# for i in range (height):
#     print(" "*(height-1-i)+"* "*(i+1))
    
# while j>=0:
#     print(" "*(height-1-j)+"* "*(j+1))
#     j-=1

# for i in range(length):

#     print(" "*(height-1)+"* "*(1))






# l=[1,2,2,3,3,4,4,4,5,6,6,8,8,8,8]
# sin_list=[]
# for elements in l:
#     if l.count(elements)>1:
#         continue
#     else:
#        print(elements)



# sum=0
# n=int(input("What is the size of the array? "))
# for i in range(n):
#     elements=int(input("Write the elements of the array:"))
#     new_sum=sum+elements
#     sum=new_sum
# print(new_sum)
    

# n=int(input("What is the size of the array? "))
# int_list = [int(x) for x in raw_input("Enter integers:").split()]
# sum=0
# for i in int_list:
#     n_sum=sum+i
#     sum=n_sum
# print(sum)    



#finding sum of elements of an array by asking integers as an input
# arr=[]
# sum=0
# n=int(input("What is the size of the array? "))
# elements=input("Write the elements of the array:")
# numbers = list(map(int, elements.split()))
# if len(numbers)==n:

#     for i in numbers:
#         arr.append(i)


#     for element in arr:
#         new_sum=sum+element
#         sum=new_sum
#     print(sum)

# if len(numbers)>n or len(numbers)<n:
#     print("input is not equal to size of array")



    

    
# a= [1, 2, 3, 4, 5]
# c=input("Which element do you want to find? ")
# b=[]
# count=0
# d=len(a)
# n=d-1
# print(n)
# print(a[n/2])


# if c==a[n/2]:
#     print(n/2)
    
    

# def bisect_left(arr, target):
#     lo, hi = 0, len(arr)
#     while lo < hi:
#         mid = lo + (hi - lo) // 2
#         if arr[mid] < target:
#             lo = mid + 1
#         else:
#             hi = mid
#     return lo



# print(bisect_left([1,2,3,4,5], 5))




# Implement int sqrt(int x).

# Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

# Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.



# Input: 4
# Output: 2


# Input: 8
# Output: 2
# Explanation: The square root of 8 is 2.82842..., and since 
#              the decimal part is truncated, 2 is returned.

 
# def sqroot(x):
#     lo,hi=0,x
#     if x==0 or x==1:
#         return x
   
#     while lo<hi:

#         mid=lo+ (hi-lo)//2
       
#         if (mid)**2>x:
#             hi=mid
#         else:
#             lo=mid
#         if lo==hi-1:
#             break
    
#     return lo   
    

# print (sqroot(0))





# # Python 3 program to find floor(sqrt(x) 

# # Returns floor of square root of x		 
# def floorSqrt(x) : 

# 	# Base cases 
# 	if (x == 0 or x == 1) : 
# 		return x 

# 	# Do Binary Search for floor(sqrt(x)) 
# 	start = 1
# 	end = x 
# 	while (start <= end) : 
# 		mid = (start + end) // 2
		
# 		# If x is a perfect square 
# 		if (mid*mid == x) : 
# 			return mid 
			
# 		# Since we need floor, we update 
# 		# answer when mid*mid is smaller 
# 		# than x, and move closer to sqrt(x) 
# 		if (mid * mid < x) : 
# 			start = mid + 1
# 			ans = mid 
			
# 		else : 
			
# 			# If mid*mid is greater than x 
# 			end = mid-1
			
# 	return ans 

# # driver code	 
# x = 11
# print(floorSqrt(x)) 
	
# This code is contributed by Nikita Tiwari. 

   

# print(ord("A"))
# import datetime
# print(datetime.datetime.now())


# class BSTnode(object):
#     """
# Representation of a node in a binary search tree.
# Has a left child, right child, and key value, and stores its subtree size.
# """
#     def __init__(self, parent, t):
#         """Create a new leaf with key t."""
#         self.key = t
#         self.parent = parent
#         self.left = None
#         self.right = None
#         self.size = 1
        
#     def update_stats(self):
#         """Updates this node's size based on its children's sizes."""
#         self.size = (0 if self.left is None else self.left.size) + (0 if self.right is None else self.right.size) 

#     def insert(self, t, NodeType):
#         """Insert key t into the subtree rooted at this node (updating subtree size)."""
#         self.size += 1
#         if t < self.key:
#             if self.left is None:
#                 self.left = NodeType(self, t)                
#                 return self.left
#             else:
#                 return self.left.insert(t, NodeType)
#         else:
#             if self.right is None:
#                 self.right = NodeType(self, t)   
#                 return self.right
#             else:
#                 return self.right.insert(t, NodeType)

#     def find(self, t):
#         """Return the node for key t if it is in this tree, or None otherwise."""
#         if t == self.key:
#             return self
#         elif t < self.key:
#             if self.left is None:
#                 return None
#             else:
#                 return self.left.find(t)
#         else:
#             if self.right is None:
#                 return None
#             else:
#                 return self.right.find(t)

#     def rank(self, t):
#         """Return the number of keys <= t in the subtree rooted at this node."""
#         left_size = 0 if self.left is None else self.left.size 
#         if t == self.key:
#             return left_size + 1
#         elif t < self.key:
#             if self.left is None:
#                 return 0
#             else:
#                 return self.left.rank(t)
#         else:
#             if self.right is None:
#                 return left_size + 1
#             else:
#                 return self.right.rank(t) + left_size + 1 
            
#     def minimum(self):
#         """Returns the node with the smallest key in the subtree rooted by this node."""
#         current = self
#         while current.left is not None:
#             current = current.left
#         return current
        

#     def successor(self):
#         """Returns the node with the smallest key larger than this node's key, or None if this has the largest key in the tree."""
#         if self.right is not None:
#             return self.right.minimum()
#         current = self
#         while current.parent is not None and current.parent.right is current:
#             current = current.parent
#         return current.parent

#     def delete(self):
#         """"Delete this node from the tree."""
#         if self.left is None or self.right is None:
#             if self is self.parent.left:
#                 self.parent.left = self.left or self.right
#                 if self.parent.left is not None:
#                     self.parent.left.parent = self.parent
#             else:
#                 self.parent.right = self.left or self.right
#                 if self.parent.right is not None:
#                     self.parent.right.parent = self.parent 
#             current = self.parent
#             while current.key is not None:
#                 current.update_stats()
#                 current = current.parent
#             return self
#         else:
#             s = self.successor()
#             self.key, s.key = s.key, self.key
#             return s.delete()        
        
#     def check(self, lokey, hikey):
#         """Checks that the subtree rooted at t is a valid BST and all keys are between (lokey, hikey)."""
#         if lokey is not None and self.key <= lokey:
#             raise "BST RI violation"
#         if hikey is not None and self.key >= hikey:
#             raise "BST RI violation"
#         if self.left is not None:
#             if self.left.parent is not self:
#                 raise "BST RI violation"
#             self.left.check(lokey, self.key)
#         if self.right is not None:
#             if self.right.parent is not self:
#                 raise "BST RI violation"
#             self.right.check(self.key, hikey)
#         if self.size != 1 + (0 if self.left is None else self.left.size) + (0 if self.right is None else self.right.size):
#             raise "BST RI violation"
            
#     def __repr__(self):
#         return "<BST Node, key:" + str(self.key) + ">"

# class BST(object):
#     """
# Simple binary search tree implementation, augmented with subtree sizes.
# This BST supports insert, find, and delete-min operations.
# Each tree contains some (possibly 0) BSTnode objects, representing nodes,
# and a pointer to the root.
# """

#     def __init__(self, NodeType=BSTnode):
#         self.root = None
#         self.NodeType = NodeType
#         self.psroot = self.NodeType(None, None)
    
#     def reroot(self):
#         self.root = self.psroot.left

#     def insert(self, t):
#         """Insert key t into this BST, modifying it in-place."""
#         if self.root is None:
#             self.psroot.left = self.NodeType(self.psroot, t)
#             self.reroot()
#             return self.root
#         else:
#             return self.root.insert(t, self.NodeType)
        
#     def find(self, t):
#         """Return the node for key t if is in the tree, or None otherwise."""
#         if self.root is None:
#             return None
#         else:
#             return self.root.find(t)
        
#     def rank(self, t):
#         """The number of keys <= t in the tree."""
#         if self.root is None:
#             return 0
#         else:
#             return self.root.rank(t)        
        
#     def delete(self, t):
#         """Delete the node for key t if it is in the tree."""
#         node = self.find(t)
#         deleted = self.root.delete()
#         self.reroot()
#         return deleted

#     def check(self):
#         if self.root is not None:
#             self.root.check(None, None)
            
#     def __str__(self):
#         if self.root is None: return '<empty tree>'
#         def recurse(node):
#             if node is None: return [], 0, 0
#             label = str(node.key)
#             left_lines, left_pos, left_width = recurse(node.left)
#             right_lines, right_pos, right_width = recurse(node.right)
#             middle = max(right_pos + left_width - left_pos + 1, len(label), 2)
#             pos = left_pos + middle // 2
#             width = left_pos + middle + right_width - right_pos
#             while len(left_lines) < len(right_lines):
#                 left_lines.append(' ' * left_width)
#             while len(right_lines) < len(left_lines):
#                 right_lines.append(' ' * right_width)
#             if (middle - len(label)) % 2 == 1 and node.parent is not None and \
#                node is node.parent.left and len(label) < middle:
#                 label += '.'
#             label = label.center(middle, '.')
#             if label[0] == '.': label = ' ' + label[1:]
#             if label[-1] == '.': label = label[:-1] + ' '
#             lines = [' ' * left_pos + label + ' ' * (right_width - right_pos),
#                      ' ' * left_pos + '/' + ' ' * (middle-2) +
#                      '\\' + ' ' * (right_width - right_pos)] + \
#               [left_line + ' ' * (width - left_width - right_width) +
#                right_line
#                for left_line, right_line in zip(left_lines, right_lines)]
#             return lines, pos, width
#         return '\n'.join(recurse(self.root) [0])

# test1 = range(0, 100, 10)
# test2 = [31, 41, 59, 26, 53, 58, 97, 93, 23]
# test3 = "algorithms"

# def printsizes(node):
#     if node is None:
#         print ("node is nil")
#     else:
#         print ("node", node.key, "has a subtree of size", node.size)

# def test(args=None, BSTtype=BST):
#     import random, sys
#     if not args:
#         args = sys.argv[1:]
#     if not args:
#         print ('usage: %s <number-of-random-items | item item item ...>' )
#         sys.argv[0]
#         sys.exit()
#     elif len(args) == 1:
#         items = (random.randrange(100) for i in xrange(int(args[0])))
#     else:
#         items = [int(i) for i in args]

#     tree = BSTtype()
#     print (tree)
#     for item in items:
#         tree.insert(item)
#         print
#         print (tree)

# if __name__ == '__main__': test()





# def DisplayMulti(*VarArgs):
#     for Arg in VarArgs:
#         if Arg.upper() == 'CONT':
#             continue
#             print('Continue Argument: '+ Arg)
#         elif Arg.upper() == 'BREAK' :
#             break
#             print('Break Argument: '+Arg)
#         print('good Argument: '+ Arg)

# DisplayMulti('Hello','cont','break','last')
    




# def SecretNumber():
#     GotIt = False
#     while GotIt== False:
#         One= int(input("Type a number between 1 and 10: "))
#         Two= int(input("Type a number between 1 and 10: "))

#         if (One>=1) and (One<=10):
#             if (Two>=1) and (Two<=10):
#                 print('Secret number is: ' +str(One*Two))
#                 GotIt= True
#                 continue
#             else:
#                 print("Incorrect second value!")
#         else:
#             print("Incorrect first value! ")
#         print("Try again! ")

# SecretNumber()




# SetA= set(['Red','Blue','Green','Black'])
# SetB= set(['Black','Green','yellow','Orange'])
# SetX= SetA.union(SetB)
# SetY= SetA.intersection(SetB)
# SetZ= SetA.difference(SetB)
# print('{0}\n{1}\n{2}'.format(SetX,SetY,SetZ))
# print(SetA.issuperset(SetY))



# MyTuple=(1,2,3,(4,5,6,(7,8,9)))
# MyNewTuple=MyTuple.__add__((10,11,12,(13,14,15)))
# print(MyNewTuple)
# for Value1 in MyTuple:
#     if type(Value1)==int:
#         print(Value1)
#     else:
#         for Value2 in Value1:
#             if type(Value2)==int:
#                 print("\t", Value2)
#             else:
#                 for Value3 in Value2:
#                     print("\t\t",Value3)




# for processing two lists in parallel use zip() function.
# ListA=[]
# ListB=[]
# for Value1,Value2 in zip(ListA, ListB):
# print(vaue1,'\t', Value2)


# import numpy as np
# myVect=np.array([1,2,3,4])
# print(myVect)
# # myVect2=np.arange(1,10,2)
# # print(myVect2)

# myVect3=np.ones(4,dtype=np.int16)
# print(myVect3)
# print(myVect+1)


# a= np.array([1,2,3,4])
# b= np.array([2,2,4,4])
# print(a==b)

# print(myVect.dot(myVect))

# myMatrix=np.array([[1,2,3],[4,5,6],[7,8,9]])
# print(myMatrix)
# print(myMatrix[0,1])



# myMatrix=np.ones([4,4,4],dtype=np.int32)
# print(myMatrix)

# myMatrix=np.mat([[1,2,3],[4,5,6],[7,8,9]])
# print(myMatrix)


# a= np.mat([[1,2,3],[4,5,6]])
# b= np.mat([[1,2,3],[3,4,5],[5,6,7]])
# print(a.dot(b))


# changeIt= np.array([1,2,3,4,5,6,7,8])
# # print(changeIt)

# # print(changeIt.reshape(2,4))

# print(changeIt.reshape(2,2,2))


# changeIt= np.array([[1,2,3,4],[5,6,7,8]])
# print(np.transpose(changeIt))



# print(np.identity(4))


# a=np.array([[1,2],[3,4]])
# b= np.linalg.inv(a)
# print(b)

# np.allclose(np.dot(a,b),np.identity(2)      [ not working]




# a= np.array([1,2,3])
# print(np.random.permutation(a))

# from itertools import combinations
# import random  
# from random import sample 

# a=np.array([1,2,3,4])
# L=[]

# for p in permutations(a):
#     L.append(p)
# print(L)
# for comb in combinations(a,2):
#     L.append(comb)
# print(L)
# print(random.sample(list(L),3))

# print(random.shuffle(a))                 [ reason behind getting None as output]



# a=np.array([1,2,3,4,5,6,6,7,7,7,7,8,8,9,1,2,3])
# b=np.array(list(set(a)))
# print (b)




# RECURSIVE FUNCTION:

# def factorial(n):
#     print("factorial called with n=", str(n))
#     if n==1 or n==0:
#         print("Ending conditions met.")
#         return 1
#     else:
#         return n* factorial(n-1)

# print(factorial(5))



# def factorial(n):
#     print("factorial called with n=", str(n))
#     if n>1:
#         return n*factorial(n-1)
#     print("Ending condition met.")
#     return 1

# print(factorial(5))


# ITERATIVE METHOD FOR FACTORIAL:

# def factorial(n):
#     result=1
#     while n>1:
#         result*=n
#         n-=1
#     return result

# print(factorial(5))




# BINARY SEARCH/ DIVIDE AND CONQUER :

# def search(searchList,key):
#     mid= int(len(searchList)/2)
#     print("Searching midpoint at", str(searchList[mid]))

#     if mid==0:
#         print("Key Not Found")
#         return key

#     elif key== searchList[mid]:
#         print("Key Found!")
#         return searchList[mid]

#     elif key> searchList[mid]:
#         print("searchList now contains", searchList[mid:len(searchList)])
#         search(searchList[mid:len(searchList)],key)

#     else:
#         print("searchList now contains", searchList[0:mid])
#         search(searchList[0:mid],key)

# aList= list(range(1,21))
# search(aList,5)

# aList= list(range(1,21))
# print(aList)






# arr= [1,2,3,4]
# arr.append(7)
# print(arr)
# arr.extend((9,10,11))
# print(arr)


# import pandas as pd 
# import numpy as np

# df = pd.DataFrame({'A': [0,0,1,None],
#                    'B': [1,2,3,4],
#                    'C':[np.NAN,3,4,1] },dtype=int)

# print(df, "\n")
# values= pd.Series(df.mean(), dtype=int)
# print(values, "\n")

# df= df.fillna(values)
# print(df)



# MyStack=[]
# StackSize=3

# def DisplayStack():
#     print("Stack currently contains:")
#     for Items in MyStack:
#         print(Items)

# def Push(Value):
#     if len(MyStack) < StackSize :
#         MyStack.append(Value)
#     else:
#         print("Stack is full!")

# def Pop():
#     if len(MyStack)>0:
#         print("Popping: ", MyStack.pop())
#     else:
#         print("Stack is empty.")

# Push(1)
# Push(2)
# Push(3)
# DisplayStack()

# Push(4)

# Pop()
# DisplayStack()

# Pop()
# Pop()
# Pop()




# import queue

# MyQueue = queue.Queue(3)
# print("Queue empty: ",MyQueue.empty())

# MyQueue.put(1)
# MyQueue.put(2)
# MyQueue.put(3)
# print("Queue full: ", MyQueue.full())

# print("Popping: ", MyQueue.get())
# print("Queue full: ", MyQueue.full())

# print("Popping: ", MyQueue.get())
# print("Popping: ", MyQueue.get())
# print("Queue empty: ", MyQueue.empty())




Colors={"Sam": "Blue", "Amy": "Red", "Sarah": "Yellow"}
# print(Colors["Sarah"])
# print(Colors.keys())

# for Item in Colors.keys():
#     print("{0} likes the color {1}.".format(Item,Colors[Item]))

# Colors["Sarah"]="Purple"
# Colors.update({"Harry":"Orange"})
# del Colors["Sam"]

# print(Colors)




# class binaryTree:
#     def __init__(self,nodeData,left=None,right=None):
#         self.nodeData= nodeData
#         self.left=left
#         self.right=right

#     def __str__(self):
#         return str(self.nodeData)


# tree = binaryTree("Root")
# BranchA = binaryTree("Branch A")
# BranchB = binaryTree("Branch B")
# tree.left = BranchA
# tree.right = BranchB

# LeafC= binaryTree("Leaf C")
# LeafD = binaryTree("Leaf D")
# LeafE = binaryTree("Leaf E")
# LeafF = binaryTree("Leaf F")
# BranchA.left= LeafC
# BranchA.right = LeafD
# BranchB.left= LeafE
# BranchB.right= LeafF

# def traverse(tree):
#     if tree.left != None:
#         traverse(tree.left)
#     if tree.right != None:
#         traverse(tree.right)
#     print(tree.nodeData)

# traverse(tree)




# graph= {'A': ['B','F'],
#         'B': ['A','C'],
#         'C': ['B','D'],
#         'D': ['C','E'],
#         'E': ['D','F'],
#         'F': ['E','A']}

# def find_path(graph, start, end, path=[]):
#     path=path+[start]

#     if start == end:
#         print("Ending")
#         return path

#     for node in graph[start]:
#         print("Checking Node ", node)

#         if node not in path:
#             print("Path so far ", path)

#             newp = find_path(graph, node, end, path)
#             if newp:
#                 return newp

# find_path(graph, 'B', 'E')






























#Initialize array     
# arr = [5, 2, 8, 7, 1]    
# temp = 0    
     
     
# #Sort the array in descending order    
# for i in range(0, len(arr)):    
#     for j in range(i+1, len(arr)):   
#         if(arr[i] < arr[j]):
#             temp = arr[i] 
#             arr[i] = arr[j]   
#             arr[j] = temp 
     
     
# #Displaying elements of array after sorting    
# print("Elements of array sorted in descending order: ")   
# for i in range(0, len(arr)):     
#     print(arr[i]) 




# selection sort

# data= [9,5,7,4,2,8,1,10,6,3]

# for scanIndex in range(0, len(data)):
#     minIndex= scanIndex

#     for compIndex in range(scanIndex+1, len(data)):
#         if data[compIndex]<data[minIndex]:
#             minIndex= compIndex

#     if minIndex != scanIndex:
#         data[scanIndex], data[minIndex]=\
#             data[minIndex],data[scanIndex]
#         print(data)




# Insertion sort

# data= [9,5,7,4,2,8,1,10,6,3]

# for scanIndex in range(1, len(data)):
#     temp= data[scanIndex]

#     minIndex= scanIndex

#     while minIndex>0 and temp< data[minIndex-1]:
#         data[minIndex]= data[minIndex-1]
#         minIndex-= 1

#     data[minIndex]= temp
#     print(data)




# Mergesort using divide and conquer approach


# data= [9,5,7,4,2,8,1,10,6,3]

# def mergeSort(list):
#     # determine whether list is broken into individual pieces
#     if len(list)<2:
#         return list

#     # Find the middle of the list.
#     middle= len(list)//2

#     #break the list into two pieces
#     left= mergeSort(list[:middle])
#     right= mergeSort(list[middle:])

#     # Merge the two sorted pieces into a larger piece
#     print("Left side: ", left)
#     print("Right Side ", right)
#     merged= merge(left, right)
#     print("merged", merged)
#     return merged

# def merge(left, right):
#     #when the left or right side is empty,
#     #it means that this is an individual ite, and is already sorted

#     if not len(left):
#         return left
#     if not len(right):
#         return right

# # Define variables used to merge two pieces

#     result= []
#     leftIndex=0
#     rightIndex=0
#     totalLen= len(left)+len(right)

#     while (len(result)< totalLen):

#     #perform required comparision and merge the pieces according to value

#         if left[leftIndex]< right[rightIndex]:
#             result.append(left[leftIndex])
#             leftIndex+=1

#         else:
#             result.append(right[rightIndex])
#             rightIndex+=1

#         #when the left side or right side is longer, add the remaining elements to result

#         if leftIndex==len(left) or rightIndex==len(right):
#             result.extend(left[leftIndex:] or right[rightIndex:])
#             break
    
#     return result

# mergeSort(data)



# QUicksort data

# data= [9,5,7,4,2,8,1,10,6,3]

# def partition(data, left, right):
#     pivot= data[left]
#     lIndex= left+1
#     rIndex= right

#     while True:
#         while lIndex <= rIndex and data[lIndex] <= pivot:
#             lIndex +=1
#         while rIndex >= lIndex and data[rIndex] >= pivot:
#             rIndex -=1
#         if rIndex <= lIndex:
#             break
#         data[lIndex], data[rIndex]= \
#             data[rIndex], data[lIndex]
#         print (data)

#     data[left], data[rIndex]= data[rIndex],data[left]
#     print(data)
#     return rIndex


# def quickSort(data, left, right):
#     if right <= left:
#         return
#     else:
#         pivot= partition(data, left, right)
#         quickSort(data, left, pivot-1)
#         quickSort(data, pivot+1, right)

#     return data

# quickSort(data, 0, len(data)-1)




# import heapq

# data= {3: 'White', 2:'Red', 1:'Green', 5:'Orange', 4:'Yellow', 7: 'Purple', 0:'Magenta'}

# heap= []
# for key,value in data.items():
#     heapq.heappush(heap,(key,value))
# heapq.heappush(heap,(6,'Teal'))
# heap.sort()

# for item in heap:
#     print('Key: ', item[0], 'Value ', item[1])
# print('Item 3 contains: ', heap[3][1])
# print('The maximum item is: ', heapq.nlargest(1,heap))




# t=int(input("No of test cases is: "))

# for j in range(t):
#     N,S= map(int,input().split())
#     P=list(map(int,input().split()))
#     i=list(map(int,input().split()))
#     p=[]
#     q=[]
#     if 0 not in i or 1 not in i:
#         print("no")
#     else:
#         for k in range(N):
#             if i[k]==0:
#                 p.append(P[k])
#             else:
#                 q.append(P[k])
#         total=S+min(p)+min(q)
#         if total<100:
#             print("yes")
        
#         else:
#             print("No")
            


# for j in range(int(input())):
#     N,S= map(int,input().split())
#     L=list(map(int,input().split()))
#     i=list(map(int,input().split()))
#     p=[]
#     q=[]
#     if 0 not in i or 1 not in i:
#         print("no")
#     else:
#         for j in range(N):
#             if i[j]==0:
#                 p.append(L[j])
#             else:
#                 q.append(L[j])
#         total=S+min(p)+min(q)
#         if total<=100:
#             print("yes")
#         else:
#             print("No")

# for i in range(int(input())):
# 	a,b=map(int,input().split())
# 	l=list(map(int,input().split()))
# 	m=list(map(int,input().split()))
# 	p=[]
# 	q=[]
# 	if 0 not in m or 1 not in m:
# 		print('no')
# 	else:
# 		for i in range(a):
# 			if m[i]==0:
# 				p.append(l[i])
# 			else:
# 				q.append(l[i])
# 		r=b+min(p)+min(q)
# 		if r<=100:
# 			print('yes')
# 		else:
# 			print('no')


# The first line of the input contains an integer T denoting the number of test cases.
# The first line of each test case contains a single integer N.
# The second line contains N + 1 space-separated integers denoting A0 to AN.

# for i in range(int(input())):
#     N=int(input())
#     m=list(map(int,input().split()))
#     k=len(m)
#     for j in range(len(m)-1):
#         if j==0:
#             forward_product= m[j]*m[j+1]
#         elif j==len(m):
#             forward_product= m[j]*m[j-1]
#             break
#         else:
#             forward_product=m[j]*m[j-1]*m[j+1]
          
#     print(forward_product)
#     u=m.reverse()
#     for k in range(len(u)):
#         if k==len(u):
#             backward_product= u[k]*u[k-1]
#             break
#         if k==0:
#             backward_product= u[k]*u[k+1]
#         else:
#             backward_product= m[k]*m[k-1]*m[k+1]
#     print(backward_product)
# print(forward_product+ backward_product)
        


# for i in range(int(input())):
# 2	    N=int(input())
# 3	    m=list(map(int,input().split()))
# 4	    print(m)
# 5	    forward_product=0
# 6	    backward_product=0
# 7	    for j in range(len(m)-1):
# 8	        if j==0:
# 9	            forward_product=forward_product+ m[j]+(m[j]*m[j+1])
# 10	            
# 11	            
# 12	        if j!=0 and j!=(len(m)-1):
# 13	            forward_product=forward_product+((m[j]*m[j-1])+(m[j]*m[j+1]))
# 14	            
# 15	        elif j==(len(m)-1):
# 16	            break
# 17	    print(forward_product)
# 18	    
# 19	    k=(len(m)-1)
# 20	    while k>=0:
# 21	        if k==0:
# 22	            break
# 23	        if k!=(len(m)-1):
# 24	            backward_product=backward_product+ ((m[k]*m[k-1])+ (m[k]*m[k+1]))
# 25	            k-=1
# 26	            
# 27	        if k==(len(m)-1):
# 28	            backward_product=backward_product+(m[k]*m[k-1])
# 29	            k-=1
# 30	            
# 31	        
# 32	    print(backward_product)
# 33	print(forward_product+ backward_product)


# for i in range(int(input())):
#     N=int(input())
#     m=list(map(int,input().split()))
#     if N==0 or N>10**3:
#         break
	
#     five_rupee=0
#     ten_rupee=0
#     counter=True
    
#     for j in range(len(m)):

#         if m[0]!=5:
#            counter=False
#            break
        
            
#         elif m[j]==10:
           
#             if five_rupee>0:
#                 five_rupee-=1
#                 ten_rupee+=1
#                 counter=True
#             else:
#                 counter=False
#                 break
            
#         elif m[j]==15:
#             if five_rupee>=2:
#                 five_rupee-=2
#                 counter=True
#             elif ten_rupee>=1:
#                 ten_rupee-=1
#                 counter=True
#             else:
#                 counter=False
#                 break
#         elif m[0]==5:
#             five_rupee+=1
#             counter=True
#     if counter==True:
#         print("true")
#     else:
#         print("False")


# T = int(input())
# for j in range(T):
#     N = int(input())
#     arr = list(map(int, input().split()))
#     a= b = 0
#     flag = 0
    
#     for i in range(len(arr)):    
#         if (arr[i] ==5):
#             a += 1
#         elif (arr[i] ==10):
#             if a >=1:
#                 a-=1
#                 b+=1
#             else:
#                 flag += 1
#                 break
#         else:
#             if b >=1:
#                 b-=1
#             elif a>=2:
#                 a-=2
#             else:
#                 flag += 1
#                 break
            
#     if flag==1:
#         print("NO")
#     else:
#         print("YES")
                   


# 5 10 10 5 10 15 10 5 5 5 



# a= [1,5,7,9,3]
# a.sort(reverse=True)
# print(a)




# N = int(input())

# evenlist = [] 
# oddlist = []

# for i in range(len(N): 
#    string=input() 
#    evenlist.clear() 
#    oddlist.clear() 
#    for item, char in enumerate(string): 
#      if item % 2 == 0: 
#        evenlist.append(char) 
#      else: oddlist.append(char) 
#    print(''.join(evenlist),''.join(oddlist))

# print('')


# import sys
# Tel={}
# n=int(input())
# for i in range(n):
#     contact= input().split(' ')
#     Tel[contact[0]]=contact[1]

# lines = sys.stdin.readlines()
# for j in lines:
#     name= j.strip()
#     if name in Tel:
#         print(name+ '=' + str(Tel[name]))
#     else:
#         print('Not found')


#Given a series of numbers, find the missing element in the series
# list=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,17,18,19,20,22]

# m=list(map(int,input().split()))
# n=1
# for i in range(len(m)):
    
#   if m[n]==1+m[n-1]:
#     n+=1
#     if n<len(m):
#       continue
#     else:
#       print("series is complete")
#       break
#   else:
#     print("missing element" +' ' + str(1+m[n-1])+ ' '+ "in series")
#     n+=1
#     if n<len(m):
#       continue
#     else:
#       break
    

# n=int(input())
# remainder=[]
# quotient=[]
# quo=n//2
# quotient.append(quo)
# rem=n%2
# remainder.append(rem)
# i=0
# while i in range(len(quotient)):

#   new_quo=quotient[i]//2
#   new_rem=quotient[i]%2
#   remainder.append(new_rem)
#   quotient.append(new_quo)
#   i+=1
#   if new_quo==1:
#       break
#   else:
#       continue
  
# new_list=[]
# q=len(quotient)
# n=remainder.reverse()
# new_list.append(quotient[q-1])
# new_list.extend(remainder)
# for items in new_list:
#     print(items, end='')

  
# counter=1
# for items in range(len(new_list)):
    
#     if new_list[items]==1 and new_list[items+1]==1:
#             counter+=1
        
#     else:
#         break
    
# print("\n"+ str(counter))


# import pandas as pd
# import wikipedia

# # Webpage url                                                                                                               
# url = 'https://en.wikipedia.org/wiki/List_of_Nobel_laureates_in_Physics'

# # Extract tables
# dfs = pd.read_html(url)

# # Get first table                                                                                                           
# df = dfs[0]
# # print(df)

# # # Extract columns                                                                                                           
# # df2 = df[['year','name']]
# # print(df2)


# df2 = df[['Year','Laureate[A]']]
# # print(df2)


# # df.to_dict('dict')
# df3 = df[['Laureate[A]']]
# # print(df3)

# laureate=df3.to_dict('dict')
# # print(laureate)


# for x in laureate:
#   laureate_2=laureate[x]
    
# lau=[]   
# for x in laureate_2:
#   name=laureate_2[x]
#   lau.append(name)
# # print(lau)
    
# #         result = wikipedia.summary("x", sentences = 5)
# #         print(result)
# about=[]
# import wikipedia
# for x in lau:
#     try:
#       result = wikipedia.summary(x, sentences = 2)
#       about.append(result)
        
#     except Exception:
#       pass
    
# # print(about)





# from pandas import DataFrame
# df4 = DataFrame (about,columns=['description'])
# # print (df4)

# # about= df4["description"]
# # df2 = df2.join(about)
# # print(df2)

# df2.append(df4)


# number= input("Enter your number: ")
# x=len(number)
# sum=0
# i=0
# while i<x:
#   sum=sum+int(number[i])
#   i+=1
# print(sum)

# players=[]
# townhall=[]
# for i in range(0,5):
#   player_name=input("Enter the player's name: ")
#   player_th= int(input("Enter the player's townhall level: "))
#   players.append(player_name)
#   townhall.append(player_th)
# print(players)
# print(townhall)


# a=[1,2,3]
# print(len(a))

a=[1,2,3,4,5,6,7,8,9,10]
b=[]
for i in range(0,len(a)):
    if a[i]%2==0:
        b.append(a[i])

print(b)
def func(x):
    return x%2==0

newlist = list(filter(func,a))
print(newlist)