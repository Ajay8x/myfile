import tkinter as tk
import random

# List of possible colors
colors = ['Red', 'Blue', 'Green', 'Pink', 'Black', 'Yellow', 'Orange', 'White', 'Purple', 'Brown']

score = 0
timeleft = 5

def start_game(event):
    if timeleft == 30:
        countdown()
        next_color()

def next_color():
    global score, timeleft
    if timeleft > 0:
        entry.focus_set()
        if entry.get().lower() == colors[1].lower():
            score += 1
            entry.delete(0, tk.END)
            random.shuffle(colors)
            color_label.config(fg=str(colors[1]), text=str(colors[0]))
            score_label.config(text=f"Score: {score}")

def countdown():
    global timeleft
    if timeleft > 0:
        timeleft -= 1
        time_label.config(text=f"Time left: {timeleft}")
        time_label.after(1000, countdown)

root = tk.Tk()
root.title("Color Game")
root.geometry("375x200")

instructions = tk.Label(root, text="Type in the color of the words, not the word text!", font=('Helvetica', 12))
instructions.pack()

score_label = tk.Label(root, text="Press enter to start", font=('Helvetica', 12))
score_label.pack()

time_label = tk.Label(root, text=f"Time left: {timeleft}", font=('Helvetica', 12))
time_label.pack()

color_label = tk.Label(root, font=('Helvetica', 60))
color_label.pack()

entry = tk.Entry(root)
root.bind('<Return>', start_game)
entry.pack()
entry.focus_set()

root.mainloop()

