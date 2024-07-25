import time
timestamp = time.strftime('%H:%M:%S')
print(timestamp)


timestamp1 = time.strftime('%H')
print(timestamp1)

timestamp2 = time.strftime('%M')
print(timestamp2)

timestamp3 = time.strftime('%S')
print(timestamp3)




# Get the current time
current_time = time.strftime('%H:%M:%S')
print("Current time:", current_time)

# Extract hour
hour = int(time.strftime('%H'))

# Print greetings based on the hour
if 6 <= hour < 12:
    print("Good morning!")
elif 12 <= hour < 18:
    print("Good afternoon!")
elif 18 <= hour < 24 or 0 <= hour < 6:
    print("Good evening!")
else:
    print("Invalid time range.")
