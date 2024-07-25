

old_age = input(" what is your age")
new_age=int(old_age)+10
print(new_age)



# two number sum

# first=input("enter first number :")
# second=input("enter second number :")
# sum=int(first)+int(second)
# print(sum)



# change word case

name="Tony Stark"
print(name.upper())
print(name.lower())




#find text

name="tony stark"
print(name.find('s'))


#replace a text to other text

name="Tony stark"
print(name.replace("T","M"))





# find with True and False bolian

name="ajay singh"
print("a" in name)


# True and False

print(2<2)
print(2<3)
print(2==2)

print(2==3) and (2==2)
print(2==3) or(2==2)



# Prompt the user to enter their age
a = input("Enter your age: ")

# Convert the input string to an integer
n = int(a)

# Assign 'n' to 'age'
age = n

# Check if the user is an adult
if age >= 18:
    print("You are an adult")
    print("You can vote")

# Check if the user is in school age range
elif age < 18 and age > 3:
    print("You are in school")

# For ages 3 and below
else:
    print("You are a child")




# print range item

for item in range(50):
  print(item+5)




