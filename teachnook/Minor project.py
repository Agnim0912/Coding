from tkinter import *
import time

t=0
count = 0

def countdown():
    global timer,count,t
    t=count
    if count>0:
        count = count - 1
        label.config(text = str(count))
        timer = label.after(1000,countdown)
    else:
        timer=False
        label.config(text = "Time's Up")

def start_button():
    global timer
    global count
    count = int(entry.get())
    StopTimer()
    countdown()

def stop_button():
    global timer
    global count
    count = int(entry.get())
    StopTimer()

def reset_button():
    global timer
    global count
    count = 0
    StopTimer()
    timer=False
    entry.delete(0,END)
    label.config(text = "Enter seconds:")
    pass

def resume_button():
    global timer,count,t
    count=t
    StopTimer()
    countdown()
    pass

def StopTimer():
    global timer
    if timer:
        label.after_cancel(timer)
        timer = False

master = Tk()
master.geometry("250x300")
master.title("Countdown Timer")

label = Label(master, text="Enter seconds:")
entry = Entry(master, justify="center")
start = Button(master, text="start timer", command=start_button)
stop  = Button(master, text="stop timer", command=stop_button)
reset = Button(master, text="reset timer", command=reset_button)
resume = Button(master, text="resume timer", command=resume_button)

label.place(x=95, y=0)
entry.place(x=65, y=50)
start.place(x=95, y=100)
stop.place(x=95, y=150)
reset.place(x=95, y=200)
resume.place(x=88, y=250)

timer=False

master.mainloop()