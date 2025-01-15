import tkinter as tk

def draw_frog(canvas):
    # Draw the frog's body
    canvas.create_oval(100, 200, 300, 400, fill="green", outline="black")
    
    # Draw the frog's legs
    canvas.create_oval(80, 350, 140, 400, fill="green", outline="black")
    canvas.create_oval(260, 350, 320, 400, fill="green", outline="black")
    canvas.create_oval(50, 380, 110, 430, fill="green", outline="black")
    canvas.create_oval(290, 380, 350, 430, fill="green", outline="black")
    
    # Draw the frog's eyes
    canvas.create_oval(150, 150, 190, 190, fill="white", outline="black")
    canvas.create_oval(210, 150, 250, 190, fill="white", outline="black")
    
    # Draw the frog's pupils (initially visible)
    left_pupil = canvas.create_oval(165, 165, 175, 175, fill="black", outline="black")
    right_pupil = canvas.create_oval(225, 165, 235, 175, fill="black", outline="black")
    
    return left_pupil, right_pupil

def blink_eyes(canvas, left_pupil, right_pupil, blink):
    # Change the color of the pupils to simulate blinking
    if blink:
        canvas.itemconfig(left_pupil, fill="green")
        canvas.itemconfig(right_pupil, fill="green")
    else:
        canvas.itemconfig(left_pupil, fill="black")
        canvas.itemconfig(right_pupil, fill="black")
    
    # Schedule the next blink
    root.after(500, blink_eyes, canvas, left_pupil, right_pupil, not blink)

root = tk.Tk()
root.title("Animated Frog")

canvas = tk.Canvas(root, width=400, height=500, bg="white")
canvas.pack()

left_pupil, right_pupil = draw_frog(canvas)

# Start the blinking animation
blink_eyes(canvas, left_pupil, right_pupil, True)

root.mainloop()
