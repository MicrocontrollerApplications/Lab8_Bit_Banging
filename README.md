# Lab8_Bit_Banging
In today's lab, you will use a common technique called bit banging to communicate with the display that you have been using throughout the lecture.

# What is Bit Banging
>**Bit banging** is a term of art that describes a method of digital data transmission as using general-purpose input/output (GPIO) instead of computer hardware that is intended specifically for data communication. Controlling software is responsible for satisfying protocol requirements including timing which can be challenging due to limited host system resources and competing demands on the software.

(from: [Wikipedia](https://en.wikipedia.org/wiki/Bit_banging))

So, basically Bit Banging describes a way to realize a serial (or parallel) interface via software instead of dedicated hardware. Think of the laboratory for serial communication. There we used a dedicated module of our microcontroller to realize the communication via UART. If we would have used bit banging instead you would have needed to take care of Rx' and Tx' logical levels via software. Which is especially complicated as we used USART asynchronous, so the timing is essential and communication must not be interrupted.

Today we will use this technique to realize a more forgiving communication. Therefore, we will realize a SPI communication using Bit Banging to send data to our display. The following chapter recapitulates the communication using a Serial Peripheral Interface. Afterward, your exercise is described.

# Repetition of Serial Peripheral Interface (SPI)
<span style="color: rgb(160,0,0)">
TODOs:<br>
  - Explain SPI<br>
  - Set focus to the required lines for communication and their purpose<br>
  - Make sure the know the order in which bits need to be sent<br>
  - State out, that the clock does not need a dedicated timing, but levels must be set / switched accordingly<br>
  - Prepare them to find the necessary pins for communication within the schematic
</span>

# Exercise
<span style="color: rgb(160,0,0)">
TODOs:<br>
  - Let them search for the relevant pins, tell them the most confusing but irrelevant ones <br>
  - Explain expected functionality of funtion <i>GLCD_Bit_Banging()</i><br>
  - Ask them to calculate the duration for sending one byte to the display (provide information about number of commands?)<br>
</span>
