#!/bin/bash
#intalando o xdotol
#sudo apt install xdotool

xdg-open https://music.youtube.com
##xdotool getmouselocation
sleep 1
x01=562
y01=105
xdotool mousemove $x01 $y01
sleep 2
xdotool click 1
sleep 1
xdotool type "Patolino o mago" && sleep 1 && xdotool key Return
sleep 1
for i in {1..5}; do
    xdotool key Down
done
x02=340
y02=233
xdotool mousemove $x02 $y02
sleep 1
xdotool click 1
clear
