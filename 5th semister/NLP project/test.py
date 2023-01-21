from textblob import TextBlob
from tkinter import *

def checkSpelling():
    a = text.get() 
    b = TextBlob(a) 
    correctedText.set("The corrected word is: "+str(b.correct())) #Showing the corrected word
     
master = Tk() 
master.title("NLP Project")
master.geometry('750x250')
master.config(bg='Light Blue')

text=StringVar(master)

correctedText =StringVar(master)

Label(master, text='Spell Checker',font=("Times",20,"bold"), bg="red", width=90, relief="solid", bd=2, fg='black').pack(side=TOP, fill=X)

Label(master, text='Please enter the word:',bg='Light Blue',font=('calibre',13,'normal'), anchor="e", justify=LEFT).place(x=100, y=70)

Entry(master,textvariable=text, width=35,font=('calibre',13,'normal')).place(x=280,y=70)

opLabel = Label(master, textvariable=correctedText, bg='Light Blue',anchor="e",font=('calibre',13,'normal'), justify=LEFT).place(x=280, y=100)

Button(master, height=1, width=15, text="Correct", relief="solid", bd=2, bg="orange",command=checkSpelling).place(x=300, y=130)

tablem4    = Label(master, text=" Agnim Gupta-2028083\nRishav-2028030\nAnand Swaroop- 2028085\nRishita Banerjee-2028031\nKasis Chaudhary-2028097\nNishitha Sahoo-2028024", width=20, height=7, bg="violet", anchor=CENTER, relief="solid").place(x=600,y=130)
master.mainloop()
