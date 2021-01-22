# Keyboard Case
![](Case0.JPG)
Please visit [v1.2](https://github.com/YangPiCui/ErgonomicVerticalKeyboard/tree/master/EVK_v1.2/Case#siemens-nx-modelling) for how the keyboard is designed.  

## 0. 3D Printing the Components
Before 3D printing the parts, make sure to fully calibrate your printer. [This is how I did it.](https://github.com/YangPiCui/3DPrinterCalibrationAndTuning/tree/master/DoogellVegaWithPLA) 
"./STLFiles/" constains the .stl files of the various parts. Modelling uncertainty for part clearance = +/-0.25mm (tolerance 0.5mm)  
"./CuraSettings/" contains my Cura print settings  
  
### Keycaps
Layer Height = 0.16mm (See Cura settings in "./CuraSettings/Vega PLA ND=0.3 LH=0.16.curaprofile")  
I have designed the keycaps for a press-fit on the Cherry Switches, but you may have to fine tune your own print settings to achieve this result. Once you have fully calibrated your printer, play with the Horizontal Expansion setting in Cura. 

KeycapHome x 12 (8 for the home row and 4 for the most bottom row)  
KeycapThumb x 4  
KeycapNormal x 74  
  
Print the keycaps in this orientation for a smooth finish:  
![](KeycapOrientation.JPG)  

### Other parts
Layer Height = 0.24mm (See the settings in "./CuraSettings/Vega PLA ND=0.3 LH=0.24.curaprofile")  
  
LeftHandPlate X 1  
RightHandPlate X 1 (just mirror the LeftHandPlate.stl in Cura)  
TopWall x 1  
... x 1  

Print these parts in this orientation to minimize support:
![](HandPlateOrientation.JPG)

## 1. Assemble the Components





Make sure to update "ToleranceAndClearance.prt" for your own print parameters.  
"./NX_ErgonomicVerticalKeyboard/STL Files" constains Cura project files.  
I have modelled the case to be printed vertically and added tear-drop shaped M3 self-tapping pilot holes to do away with some supports:  
<img src="./Images/ASM_Case_LeftHand3.png"> 

Back of the left front case:  
<img src="./Images/3DPrintedCase0.jpg">  

Both front cases with press-fit keycaps and hot-glued switches:  
<img src="./Images/CaseFront.jpg"> 

Front and back cases without connector rods and hand rests. I ran out of blue filaments, so I printed half of the right backplate with white filaments and glued it onto the existing part.  
<img src="./Images/LeftRightCases0.jpg"> 
<img src="./Images/LeftRightCases1.jpg"> 
<img src="./Images/LeftRightCases2.jpg"> 

###### [ODC Open Database License v1.0](https://choosealicense.com/appendix/)  (free but no patent or commercial use)